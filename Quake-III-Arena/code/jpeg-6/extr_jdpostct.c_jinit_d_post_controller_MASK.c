
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jpeg_d_post_controller {int dummy; } ;
typedef TYPE_3__* my_post_ptr ;
typedef TYPE_4__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_10__ {int output_width; int out_color_components; TYPE_2__* mem; scalar_t__ output_height; scalar_t__ max_v_samp_factor; scalar_t__ quantize_colors; struct jpeg_d_post_controller* post; } ;
struct TYPE_7__ {int start_pass; } ;
struct TYPE_9__ {scalar_t__ strip_height; int * buffer; int * whole_image; TYPE_1__ pub; } ;
struct TYPE_8__ {int * (* alloc_sarray ) (int ,int ,int,scalar_t__) ;int * (* request_virt_sarray ) (int ,int ,int ,int,scalar_t__,scalar_t__) ;scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;
typedef scalar_t__ JDIMENSION ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (long,long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ,int ,int ,int,scalar_t__,scalar_t__) ;
 int * FUNC_5 (int ,int ,int,scalar_t__) ;

void
FUNC_6 (j_decompress_ptr VAR_5, boolean VAR_6)
{
  my_post_ptr VAR_7;

  VAR_7 = (my_post_ptr)
    (*VAR_5->mem->alloc_small) ((j_common_ptr) VAR_5, VAR_2,
    FUNC_1(VAR_3));
  VAR_5->post = (struct jpeg_d_post_controller *) VAR_7;
  VAR_7->pub.start_pass = VAR_4;
  VAR_7->whole_image = ((void*)0);
  VAR_7->buffer = ((void*)0);


  if (VAR_5->quantize_colors) {




    VAR_7->strip_height = (JDIMENSION) VAR_5->max_v_samp_factor;
    if (VAR_6) {
      FUNC_0(VAR_5, VAR_1);

    } else {

      VAR_7->buffer = (*VAR_5->mem->alloc_sarray)
 ((j_common_ptr) VAR_5, VAR_2,
  VAR_5->output_width * VAR_5->out_color_components,
  VAR_7->strip_height);
    }
  }
}
