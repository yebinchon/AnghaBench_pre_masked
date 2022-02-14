
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct jpeg_upsampler {int dummy; } ;
typedef TYPE_3__* my_upsample_ptr ;
struct TYPE_11__ {int h_samp_factor; int DCT_scaled_size; int v_samp_factor; int downsampled_width; int component_needed; } ;
typedef TYPE_4__ jpeg_component_info ;
typedef TYPE_5__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef int boolean ;
typedef void* UINT8 ;
struct TYPE_12__ {int min_DCT_scaled_size; int num_components; int max_h_samp_factor; int max_v_samp_factor; scalar_t__ output_width; TYPE_2__* mem; TYPE_4__* comp_info; scalar_t__ do_fancy_upsampling; scalar_t__ CCIR601_sampling; struct jpeg_upsampler* upsample; } ;
struct TYPE_8__ {void* need_context_rows; int upsample; int start_pass; } ;
struct TYPE_10__ {int* rowgroup_height; int * color_buf; void** v_expand; void** h_expand; int * methods; TYPE_1__ pub; } ;
struct TYPE_9__ {int (* alloc_sarray ) (int ,int ,int ,int ) ;scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;
typedef int JDIMENSION ;


 int FUNC_0 (TYPE_5__*,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (long,long) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

void
FUNC_5 (j_decompress_ptr VAR_15)
{
  my_upsample_ptr VAR_16;
  int VAR_17;
  jpeg_component_info * VAR_18;
  boolean VAR_19, VAR_20;
  int VAR_21, VAR_22, VAR_23, VAR_24;

  VAR_16 = (my_upsample_ptr)
    (*VAR_15->mem->alloc_small) ((j_common_ptr) VAR_15, VAR_3,
    FUNC_1(VAR_11));
  VAR_15->upsample = (struct jpeg_upsampler *) VAR_16;
  VAR_16->pub.start_pass = VAR_14;
  VAR_16->pub.upsample = VAR_13;
  VAR_16->pub.need_context_rows = VAR_0;

  if (VAR_15->CCIR601_sampling)
    FUNC_0(VAR_15, VAR_1);




  VAR_20 = VAR_15->do_fancy_upsampling && VAR_15->min_DCT_scaled_size > 1;




  for (VAR_17 = 0, VAR_18 = VAR_15->comp_info; VAR_17 < VAR_15->num_components;
       VAR_17++, VAR_18++) {



    VAR_21 = (VAR_18->h_samp_factor * VAR_18->DCT_scaled_size) /
   VAR_15->min_DCT_scaled_size;
    VAR_22 = (VAR_18->v_samp_factor * VAR_18->DCT_scaled_size) /
   VAR_15->min_DCT_scaled_size;
    VAR_23 = VAR_15->max_h_samp_factor;
    VAR_24 = VAR_15->max_v_samp_factor;
    VAR_16->rowgroup_height[VAR_17] = VAR_22;
    VAR_19 = VAR_4;
    if (! VAR_18->component_needed) {

      VAR_16->methods[VAR_17] = VAR_12;
      VAR_19 = VAR_0;
    } else if (VAR_21 == VAR_23 && VAR_22 == VAR_24) {

      VAR_16->methods[VAR_17] = VAR_5;
      VAR_19 = VAR_0;
    } else if (VAR_21 * 2 == VAR_23 &&
        VAR_22 == VAR_24) {

      if (VAR_20 && VAR_18->downsampled_width > 2)
 VAR_16->methods[VAR_17] = VAR_6;
      else
 VAR_16->methods[VAR_17] = VAR_7;
    } else if (VAR_21 * 2 == VAR_23 &&
        VAR_22 * 2 == VAR_24) {

      if (VAR_20 && VAR_18->downsampled_width > 2) {
 VAR_16->methods[VAR_17] = VAR_8;
 VAR_16->pub.need_context_rows = VAR_4;
      } else
 VAR_16->methods[VAR_17] = VAR_9;
    } else if ((VAR_23 % VAR_21) == 0 &&
        (VAR_24 % VAR_22) == 0) {

      VAR_16->methods[VAR_17] = VAR_10;
      VAR_16->h_expand[VAR_17] = (UINT8) (VAR_23 / VAR_21);
      VAR_16->v_expand[VAR_17] = (UINT8) (VAR_24 / VAR_22);
    } else
      FUNC_0(VAR_15, VAR_2);
    if (VAR_19) {
      VAR_16->color_buf[VAR_17] = (*VAR_15->mem->alloc_sarray)
 ((j_common_ptr) VAR_15, VAR_3,
  (JDIMENSION) FUNC_2((long) VAR_15->output_width,
    (long) VAR_15->max_h_samp_factor),
  (JDIMENSION) VAR_15->max_v_samp_factor);
    }
  }
}
