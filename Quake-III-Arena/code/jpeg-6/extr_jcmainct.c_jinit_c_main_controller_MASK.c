
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct jpeg_c_main_controller {int dummy; } ;
typedef TYPE_3__* my_main_ptr ;
struct TYPE_11__ {int width_in_blocks; int v_samp_factor; scalar_t__ height_in_blocks; } ;
typedef TYPE_4__ jpeg_component_info ;
typedef TYPE_5__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_12__ {int num_components; TYPE_2__* mem; TYPE_4__* comp_info; scalar_t__ raw_data_in; struct jpeg_c_main_controller* main; } ;
struct TYPE_8__ {int start_pass; } ;
struct TYPE_10__ {int * buffer; int ** whole_image; TYPE_1__ pub; } ;
struct TYPE_9__ {int (* alloc_sarray ) (int ,int ,int,int) ;int * (* request_virt_sarray ) (int ,int ,int ,int,int,int) ;scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;
typedef int JDIMENSION ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (long,long) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int * FUNC_4 (int ,int ,int ,int,int,int) ;
 int FUNC_5 (int ,int ,int,int) ;

void
FUNC_6 (j_compress_ptr VAR_6, boolean VAR_7)
{

  my_main_ptr VAR_8;
  int VAR_9;
  jpeg_component_info *VAR_10;

  VAR_8 = (my_main_ptr)
    (*VAR_6->mem->alloc_small) ((j_common_ptr) VAR_6, VAR_3,
    FUNC_1(VAR_4));
  VAR_6->main = (struct jpeg_c_main_controller *) VAR_8;
  VAR_8->pub.start_pass = VAR_5;


  if (VAR_6->raw_data_in)
    return;




  if (VAR_7) {
    FUNC_0(VAR_6, VAR_2);

  } else {




    for (VAR_9 = 0, VAR_10 = VAR_6->comp_info; VAR_9 < VAR_6->num_components;
  VAR_9++, VAR_10++) {
      VAR_8->buffer[VAR_9] = (*VAR_6->mem->alloc_sarray)
 ((j_common_ptr) VAR_6, VAR_3,
  VAR_10->width_in_blocks * VAR_0,
  (JDIMENSION) (VAR_10->v_samp_factor * VAR_0));
    }
  }
}
