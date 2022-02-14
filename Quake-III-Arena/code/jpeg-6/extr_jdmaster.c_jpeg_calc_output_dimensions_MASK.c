
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int h_samp_factor; int v_samp_factor; int DCT_scaled_size; void* downsampled_height; void* downsampled_width; } ;
typedef TYPE_1__ jpeg_component_info ;
typedef TYPE_2__* j_decompress_ptr ;
struct TYPE_7__ {scalar_t__ global_state; int scale_num; int scale_denom; int min_DCT_scaled_size; int num_components; int max_h_samp_factor; int max_v_samp_factor; int out_color_space; int out_color_components; int output_components; int rec_outbuf_height; scalar_t__ quantize_colors; void* image_height; void* output_height; void* image_width; void* output_width; TYPE_1__* comp_info; } ;
typedef void* JDIMENSION ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;





 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (long,long) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

void
FUNC_3 (j_decompress_ptr VAR_4)

{






  if (VAR_4->global_state != VAR_1)
    FUNC_0(VAR_4, VAR_2, VAR_4->global_state);
  VAR_4->output_width = VAR_4->image_width;
  VAR_4->output_height = VAR_4->image_height;
  switch (VAR_4->out_color_space) {
  case 131:
    VAR_4->out_color_components = 1;
    break;
  case 130:

    VAR_4->out_color_components = VAR_3;
    break;

  case 128:
    VAR_4->out_color_components = 3;
    break;
  case 132:
  case 129:
    VAR_4->out_color_components = 4;
    break;
  default:
    VAR_4->out_color_components = VAR_4->num_components;
    break;
  }
  VAR_4->output_components = (VAR_4->quantize_colors ? 1 :
         VAR_4->out_color_components);


  if (FUNC_2(VAR_4))
    VAR_4->rec_outbuf_height = VAR_4->max_v_samp_factor;
  else
    VAR_4->rec_outbuf_height = 1;
}
