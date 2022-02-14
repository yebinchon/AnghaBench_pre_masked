
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* j_decompress_ptr ;
typedef int j_common_ptr ;
struct TYPE_11__ {scalar_t__ global_state; scalar_t__ output_scanline; scalar_t__ output_height; int max_v_samp_factor; int min_DCT_scaled_size; TYPE_2__* coef; TYPE_1__* progress; } ;
struct TYPE_10__ {int (* decompress_data ) (TYPE_3__*,int ) ;} ;
struct TYPE_9__ {long pass_counter; long pass_limit; int (* progress_monitor ) (int ) ;} ;
typedef int JSAMPIMAGE ;
typedef int JDIMENSION ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

JDIMENSION
FUNC_5 (j_decompress_ptr VAR_4, JSAMPIMAGE VAR_5,
      JDIMENSION VAR_6)
{
  JDIMENSION VAR_7;

  if (VAR_4->global_state != VAR_0)
    FUNC_1(VAR_4, VAR_1, VAR_4->global_state);
  if (VAR_4->output_scanline >= VAR_4->output_height) {
    FUNC_2(VAR_4, VAR_3);
    return 0;
  }


  if (VAR_4->progress != ((void*)0)) {
    VAR_4->progress->pass_counter = (long) VAR_4->output_scanline;
    VAR_4->progress->pass_limit = (long) VAR_4->output_height;
    (*VAR_4->progress->progress_monitor) ((j_common_ptr) VAR_4);
  }


  VAR_7 = VAR_4->max_v_samp_factor * VAR_4->min_DCT_scaled_size;
  if (VAR_6 < VAR_7)
    FUNC_0(VAR_4, VAR_2);


  if (! (*VAR_4->coef->decompress_data) (VAR_4, VAR_5))
    return 0;


  VAR_4->output_scanline += VAR_7;
  return VAR_7;
}
