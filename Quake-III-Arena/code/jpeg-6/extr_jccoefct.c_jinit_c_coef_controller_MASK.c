
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct jpeg_c_coef_controller {int dummy; } ;
typedef TYPE_3__* my_coef_ptr ;
struct TYPE_11__ {scalar_t__ v_samp_factor; scalar_t__ height_in_blocks; scalar_t__ h_samp_factor; scalar_t__ width_in_blocks; } ;
typedef TYPE_4__ jpeg_component_info ;
typedef TYPE_5__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_12__ {int num_components; TYPE_2__* mem; TYPE_4__* comp_info; struct jpeg_c_coef_controller* coef; } ;
struct TYPE_8__ {int start_pass; } ;
struct TYPE_10__ {int ** whole_image; scalar_t__* MCU_buffer; TYPE_1__ pub; } ;
struct TYPE_9__ {scalar_t__ (* alloc_large ) (int ,int ,int) ;int * (* request_virt_barray ) (int ,int ,int ,int ,int ,int ) ;scalar_t__ (* alloc_small ) (int ,int ,int) ;} ;
typedef int JDIMENSION ;
typedef scalar_t__ JBLOCKROW ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (long,long) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int * FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

void
FUNC_6 (j_compress_ptr VAR_7, boolean VAR_8)
{
  my_coef_ptr VAR_9;

  VAR_9 = (my_coef_ptr)
    (*VAR_7->mem->alloc_small) ((j_common_ptr) VAR_7, VAR_4,
    FUNC_1(VAR_5));
  VAR_7->coef = (struct jpeg_c_coef_controller *) VAR_9;
  VAR_9->pub.start_pass = VAR_6;


  if (VAR_8) {
    FUNC_0(VAR_7, VAR_3);

  } else {

    JBLOCKROW VAR_10;
    int VAR_11;

    VAR_10 = (JBLOCKROW)
      (*VAR_7->mem->alloc_large) ((j_common_ptr) VAR_7, VAR_4,
      VAR_0 * FUNC_1(VAR_2));
    for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
      VAR_9->MCU_buffer[VAR_11] = VAR_10 + VAR_11;
    }
    VAR_9->whole_image[0] = ((void*)0);
  }
}
