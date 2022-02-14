
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


struct jpeg_c_prep_controller {int dummy; } ;
typedef TYPE_4__* my_prep_ptr ;
struct TYPE_14__ {long h_samp_factor; scalar_t__ width_in_blocks; } ;
typedef TYPE_5__ jpeg_component_info ;
typedef TYPE_6__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_15__ {int num_components; long max_h_samp_factor; scalar_t__ max_v_samp_factor; TYPE_3__* mem; TYPE_5__* comp_info; TYPE_1__* downsample; struct jpeg_c_prep_controller* prep; } ;
struct TYPE_11__ {int pre_process_data; int start_pass; } ;
struct TYPE_13__ {int * color_buf; TYPE_2__ pub; } ;
struct TYPE_12__ {int (* alloc_sarray ) (int ,int ,int ,int ) ;scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;
struct TYPE_10__ {scalar_t__ need_context_rows; } ;
typedef int JDIMENSION ;


 long VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;

void
FUNC_5 (j_compress_ptr VAR_8, boolean VAR_9)
{
  my_prep_ptr VAR_10;
  int VAR_11;
  jpeg_component_info * VAR_12;

  if (VAR_9)
    FUNC_0(VAR_8, VAR_1);

  VAR_10 = (my_prep_ptr)
    (*VAR_8->mem->alloc_small) ((j_common_ptr) VAR_8, VAR_3,
    FUNC_1(VAR_4));
  VAR_8->prep = (struct jpeg_c_prep_controller *) VAR_10;
  VAR_10->pub.start_pass = VAR_7;





  if (VAR_8->downsample->need_context_rows) {





    FUNC_0(VAR_8, VAR_2);

  } else {

    VAR_10->pub.pre_process_data = VAR_6;
    for (VAR_11 = 0, VAR_12 = VAR_8->comp_info; VAR_11 < VAR_8->num_components;
  VAR_11++, VAR_12++) {
      VAR_10->color_buf[VAR_11] = (*VAR_8->mem->alloc_sarray)
 ((j_common_ptr) VAR_8, VAR_3,
  (JDIMENSION) (((long) VAR_12->width_in_blocks * VAR_0 *
   VAR_8->max_h_samp_factor) / VAR_12->h_samp_factor),
  (JDIMENSION) VAR_8->max_v_samp_factor);
    }
  }
}
