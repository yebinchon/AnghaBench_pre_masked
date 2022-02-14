
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct jpeg_d_coef_controller {int dummy; } ;
typedef TYPE_3__* my_coef_ptr ;
struct TYPE_11__ {int v_samp_factor; scalar_t__ height_in_blocks; scalar_t__ h_samp_factor; scalar_t__ width_in_blocks; } ;
typedef TYPE_4__ jpeg_component_info ;
typedef TYPE_5__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_12__ {int num_components; TYPE_1__* mem; scalar_t__ progressive_mode; TYPE_4__* comp_info; struct jpeg_d_coef_controller* coef; } ;
struct TYPE_9__ {int * coef_arrays; int decompress_data; int consume_data; int start_output_pass; int start_input_pass; } ;
struct TYPE_10__ {TYPE_2__ pub; scalar_t__* MCU_buffer; int * whole_image; int * coef_bits_latch; } ;
struct TYPE_8__ {scalar_t__ (* alloc_large ) (int ,int ,int) ;int (* request_virt_barray ) (int ,int ,int ,int ,int ,int ) ;scalar_t__ (* alloc_small ) (int ,int ,int) ;} ;
typedef int JDIMENSION ;
typedef scalar_t__ JBLOCKROW ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (long,long) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

void
FUNC_6 (j_decompress_ptr VAR_12, boolean VAR_13)
{
  my_coef_ptr VAR_14;

  VAR_14 = (my_coef_ptr)
    (*VAR_12->mem->alloc_small) ((j_common_ptr) VAR_12, VAR_3,
    FUNC_1(VAR_9));
  VAR_12->coef = (struct jpeg_d_coef_controller *) VAR_14;
  VAR_14->pub.start_input_pass = VAR_10;
  VAR_14->pub.start_output_pass = VAR_11;





  if (VAR_13) {
    FUNC_0(VAR_12, VAR_2);

  } else {

    JBLOCKROW VAR_15;
    int VAR_16;

    VAR_15 = (JBLOCKROW)
      (*VAR_12->mem->alloc_large) ((j_common_ptr) VAR_12, VAR_3,
      VAR_0 * FUNC_1(VAR_1));
    for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
      VAR_14->MCU_buffer[VAR_16] = VAR_15 + VAR_16;
    }
    VAR_14->pub.consume_data = VAR_8;
    VAR_14->pub.decompress_data = VAR_7;
    VAR_14->pub.coef_arrays = ((void*)0);
  }
}
