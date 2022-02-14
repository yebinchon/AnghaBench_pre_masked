
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_6__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_21__ {scalar_t__ global_state; scalar_t__ next_scanline; scalar_t__ image_height; scalar_t__ total_iMCU_rows; TYPE_5__* dest; TYPE_4__* marker; TYPE_3__* master; TYPE_2__* coef; TYPE_1__* progress; } ;
struct TYPE_20__ {int (* term_destination ) (TYPE_6__*) ;} ;
struct TYPE_19__ {int (* write_file_trailer ) (TYPE_6__*) ;} ;
struct TYPE_18__ {int (* finish_pass ) (TYPE_6__*) ;int (* prepare_for_pass ) (TYPE_6__*) ;int is_last_pass; } ;
struct TYPE_17__ {int (* compress_data ) (TYPE_6__*,int ) ;} ;
struct TYPE_16__ {long pass_counter; long pass_limit; int (* progress_monitor ) (int ) ;} ;
typedef int JSAMPIMAGE ;
typedef scalar_t__ JDIMENSION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;

void
FUNC_10 (j_compress_ptr VAR_6)
{
  JDIMENSION VAR_7;

  if (VAR_6->global_state == VAR_1 ||
      VAR_6->global_state == VAR_0) {

    if (VAR_6->next_scanline < VAR_6->image_height)
      FUNC_0(VAR_6, VAR_5);
    (*VAR_6->master->finish_pass) (VAR_6);
  } else if (VAR_6->global_state != VAR_2)
    FUNC_1(VAR_6, VAR_3, VAR_6->global_state);

  while (! VAR_6->master->is_last_pass) {
    (*VAR_6->master->prepare_for_pass) (VAR_6);
    for (VAR_7 = 0; VAR_7 < VAR_6->total_iMCU_rows; VAR_7++) {
      if (VAR_6->progress != ((void*)0)) {
 VAR_6->progress->pass_counter = (long) VAR_7;
 VAR_6->progress->pass_limit = (long) VAR_6->total_iMCU_rows;
 (*VAR_6->progress->progress_monitor) ((j_common_ptr) VAR_6);
      }



      if (! (*VAR_6->coef->compress_data) (VAR_6, (JSAMPIMAGE) ((void*)0)))
 FUNC_0(VAR_6, VAR_4);
    }
    (*VAR_6->master->finish_pass) (VAR_6);
  }

  (*VAR_6->marker->write_file_trailer) (VAR_6);
  (*VAR_6->dest->term_destination) (VAR_6);

  FUNC_2((j_common_ptr) VAR_6);
}
