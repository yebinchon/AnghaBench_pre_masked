
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_13__ {scalar_t__ global_state; scalar_t__ next_scanline; scalar_t__ image_height; TYPE_3__* main; TYPE_2__* master; TYPE_1__* progress; } ;
struct TYPE_12__ {int (* process_data ) (TYPE_4__*,int ,scalar_t__*,scalar_t__) ;} ;
struct TYPE_11__ {int (* pass_startup ) (TYPE_4__*) ;scalar_t__ call_pass_startup; } ;
struct TYPE_10__ {long pass_counter; long pass_limit; int (* progress_monitor ) (int ) ;} ;
typedef int JSAMPARRAY ;
typedef scalar_t__ JDIMENSION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int ,scalar_t__*,scalar_t__) ;

JDIMENSION
FUNC_5 (j_compress_ptr VAR_3, JSAMPARRAY VAR_4,
        JDIMENSION VAR_5)
{
  JDIMENSION VAR_6, VAR_7;

  if (VAR_3->global_state != VAR_0)
    FUNC_0(VAR_3, VAR_1, VAR_3->global_state);
  if (VAR_3->next_scanline >= VAR_3->image_height)
    FUNC_1(VAR_3, VAR_2);


  if (VAR_3->progress != ((void*)0)) {
    VAR_3->progress->pass_counter = (long) VAR_3->next_scanline;
    VAR_3->progress->pass_limit = (long) VAR_3->image_height;
    (*VAR_3->progress->progress_monitor) ((j_common_ptr) VAR_3);
  }






  if (VAR_3->master->call_pass_startup)
    (*VAR_3->master->pass_startup) (VAR_3);


  VAR_7 = VAR_3->image_height - VAR_3->next_scanline;
  if (VAR_5 > VAR_7)
    VAR_5 = VAR_7;

  VAR_6 = 0;
  (*VAR_3->main->process_data) (VAR_3, VAR_4, &VAR_6, VAR_5);
  VAR_3->next_scanline += VAR_6;
  return VAR_6;
}
