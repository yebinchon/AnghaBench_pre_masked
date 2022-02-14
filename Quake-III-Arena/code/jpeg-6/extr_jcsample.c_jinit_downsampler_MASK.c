
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct jpeg_downsampler {int dummy; } ;
typedef TYPE_3__* my_downsample_ptr ;
struct TYPE_12__ {int h_samp_factor; int v_samp_factor; } ;
typedef TYPE_4__ jpeg_component_info ;
typedef TYPE_5__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef void* boolean ;
struct TYPE_13__ {int num_components; int max_h_samp_factor; int max_v_samp_factor; scalar_t__ smoothing_factor; TYPE_4__* comp_info; scalar_t__ CCIR601_sampling; struct jpeg_downsampler* downsample; TYPE_1__* mem; } ;
struct TYPE_10__ {void* need_context_rows; int downsample; int start_pass; } ;
struct TYPE_11__ {int * methods; TYPE_2__ pub; } ;
struct TYPE_9__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_5__*,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

void
FUNC_4 (j_compress_ptr VAR_15)
{
  my_downsample_ptr VAR_16;
  int VAR_17;
  jpeg_component_info * VAR_18;
  boolean VAR_19 = VAR_5;

  VAR_16 = (my_downsample_ptr)
    (*VAR_15->mem->alloc_small) ((j_common_ptr) VAR_15, VAR_3,
    FUNC_1(VAR_12));
  VAR_15->downsample = (struct jpeg_downsampler *) VAR_16;
  VAR_16->pub.start_pass = VAR_14;
  VAR_16->pub.downsample = VAR_13;
  VAR_16->pub.need_context_rows = VAR_0;

  if (VAR_15->CCIR601_sampling)
    FUNC_0(VAR_15, VAR_1);


  for (VAR_17 = 0, VAR_18 = VAR_15->comp_info; VAR_17 < VAR_15->num_components;
       VAR_17++, VAR_18++) {
    if (VAR_18->h_samp_factor == VAR_15->max_h_samp_factor &&
 VAR_18->v_samp_factor == VAR_15->max_v_samp_factor) {






 VAR_16->methods[VAR_17] = VAR_6;
    } else if (VAR_18->h_samp_factor * 2 == VAR_15->max_h_samp_factor &&
        VAR_18->v_samp_factor == VAR_15->max_v_samp_factor) {
      VAR_19 = VAR_0;
      VAR_16->methods[VAR_17] = VAR_8;
    } else if (VAR_18->h_samp_factor * 2 == VAR_15->max_h_samp_factor &&
        VAR_18->v_samp_factor * 2 == VAR_15->max_v_samp_factor) {






 VAR_16->methods[VAR_17] = VAR_9;
    } else if ((VAR_15->max_h_samp_factor % VAR_18->h_samp_factor) == 0 &&
        (VAR_15->max_v_samp_factor % VAR_18->v_samp_factor) == 0) {
      VAR_19 = VAR_0;
      VAR_16->methods[VAR_17] = VAR_11;
    } else
      FUNC_0(VAR_15, VAR_2);
  }





}
