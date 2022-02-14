
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_14__ {scalar_t__ global_state; scalar_t__ next_scanline; scalar_t__ image_height; int max_v_samp_factor; TYPE_3__* coef; TYPE_2__* master; TYPE_1__* progress; } ;
struct TYPE_13__ {int (* compress_data ) (TYPE_4__*,int ) ;} ;
struct TYPE_12__ {int (* pass_startup ) (TYPE_4__*) ;scalar_t__ call_pass_startup; } ;
struct TYPE_11__ {long pass_counter; long pass_limit; int (* progress_monitor ) (int ) ;} ;
typedef int JSAMPIMAGE ;
typedef int JDIMENSION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;

JDIMENSION
FUNC_6 (j_compress_ptr VAR_5, JSAMPIMAGE VAR_6,
       JDIMENSION VAR_7)
{
  JDIMENSION VAR_8;

  if (VAR_5->global_state != VAR_0)
    FUNC_1(VAR_5, VAR_2, VAR_5->global_state);
  if (VAR_5->next_scanline >= VAR_5->image_height) {
    FUNC_2(VAR_5, VAR_4);
    return 0;
  }


  if (VAR_5->progress != ((void*)0)) {
    VAR_5->progress->pass_counter = (long) VAR_5->next_scanline;
    VAR_5->progress->pass_limit = (long) VAR_5->image_height;
    (*VAR_5->progress->progress_monitor) ((j_common_ptr) VAR_5);
  }






  if (VAR_5->master->call_pass_startup)
    (*VAR_5->master->pass_startup) (VAR_5);


  VAR_8 = VAR_5->max_v_samp_factor * VAR_1;
  if (VAR_7 < VAR_8)
    FUNC_0(VAR_5, VAR_3);


  if (! (*VAR_5->coef->compress_data) (VAR_5, VAR_6)) {

    return 0;
  }


  VAR_5->next_scanline += VAR_8;
  return VAR_8;
}
