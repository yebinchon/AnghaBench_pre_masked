
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct jpeg_d_main_controller {int dummy; } ;
typedef TYPE_4__* my_main_ptr ;
struct TYPE_14__ {int v_samp_factor; int DCT_scaled_size; int width_in_blocks; } ;
typedef TYPE_5__ jpeg_component_info ;
typedef TYPE_6__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_15__ {int min_DCT_scaled_size; int num_components; TYPE_3__* mem; TYPE_5__* comp_info; TYPE_2__* upsample; struct jpeg_d_main_controller* main; } ;
struct TYPE_10__ {int start_pass; } ;
struct TYPE_13__ {int * buffer; TYPE_1__ pub; } ;
struct TYPE_12__ {int (* alloc_sarray ) (int ,int ,int,int ) ;scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;
struct TYPE_11__ {scalar_t__ need_context_rows; } ;
typedef int JDIMENSION ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;

void
FUNC_5 (j_decompress_ptr VAR_5, boolean VAR_6)
{

  my_main_ptr VAR_7;
  int VAR_8, VAR_9, VAR_10;
  jpeg_component_info *VAR_11;

  VAR_7 = (my_main_ptr)
    (*VAR_5->mem->alloc_small) ((j_common_ptr) VAR_5, VAR_2,
    FUNC_1(VAR_3));
  VAR_5->main = (struct jpeg_d_main_controller *) VAR_7;
  VAR_7->pub.start_pass = VAR_4;

  if (VAR_6)
    FUNC_0(VAR_5, VAR_0);




  if (VAR_5->upsample->need_context_rows) {
    if (VAR_5->min_DCT_scaled_size < 2)
      FUNC_0(VAR_5, VAR_1);
    FUNC_2(VAR_5);
    VAR_10 = VAR_5->min_DCT_scaled_size + 2;
  } else {
    VAR_10 = VAR_5->min_DCT_scaled_size;
  }

  for (VAR_8 = 0, VAR_11 = VAR_5->comp_info; VAR_8 < VAR_5->num_components;
       VAR_8++, VAR_11++) {
    VAR_9 = (VAR_11->v_samp_factor * VAR_11->DCT_scaled_size) /
      VAR_5->min_DCT_scaled_size;
    VAR_7->buffer[VAR_8] = (*VAR_5->mem->alloc_sarray)
   ((j_common_ptr) VAR_5, VAR_2,
    VAR_11->width_in_blocks * VAR_11->DCT_scaled_size,
    (JDIMENSION) (VAR_9 * VAR_10));
  }
}
