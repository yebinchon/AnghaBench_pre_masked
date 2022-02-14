
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct jpeg_color_deconverter {int dummy; } ;
typedef TYPE_4__* my_cconvert_ptr ;
typedef TYPE_5__* j_decompress_ptr ;
typedef int j_common_ptr ;
struct TYPE_13__ {int jpeg_color_space; int num_components; int out_color_space; int out_color_components; int output_components; scalar_t__ quantize_colors; TYPE_2__* comp_info; struct jpeg_color_deconverter* cconvert; TYPE_1__* mem; } ;
struct TYPE_11__ {void* color_convert; int start_pass; } ;
struct TYPE_12__ {TYPE_3__ pub; } ;
struct TYPE_10__ {int component_needed; } ;
struct TYPE_9__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 void* VAR_9 ;
 void* VAR_10 ;

void
FUNC_4 (j_decompress_ptr VAR_11)
{
  my_cconvert_ptr VAR_12;
  int VAR_13;

  VAR_12 = (my_cconvert_ptr)
    (*VAR_11->mem->alloc_small) ((j_common_ptr) VAR_11, VAR_3,
    FUNC_1(VAR_6));
  VAR_11->cconvert = (struct jpeg_color_deconverter *) VAR_12;
  VAR_12->pub.start_pass = VAR_8;


  switch (VAR_11->jpeg_color_space) {
  case 131:
    if (VAR_11->num_components != 1)
      FUNC_0(VAR_11, VAR_1);
    break;

  case 130:
  case 128:
    if (VAR_11->num_components != 3)
      FUNC_0(VAR_11, VAR_1);
    break;

  case 132:
  case 129:
    if (VAR_11->num_components != 4)
      FUNC_0(VAR_11, VAR_1);
    break;

  default:
    if (VAR_11->num_components < 1)
      FUNC_0(VAR_11, VAR_1);
    break;
  }






  switch (VAR_11->out_color_space) {
  case 131:
    VAR_11->out_color_components = 1;
    if (VAR_11->jpeg_color_space == 131 ||
 VAR_11->jpeg_color_space == 128) {
      VAR_12->pub.color_convert = VAR_5;

      for (VAR_13 = 1; VAR_13 < VAR_11->num_components; VAR_13++)
 VAR_11->comp_info[VAR_13].component_needed = VAR_0;
    } else
      FUNC_0(VAR_11, VAR_2);
    break;

  case 130:
    VAR_11->out_color_components = VAR_4;
    if (VAR_11->jpeg_color_space == 128) {
      VAR_12->pub.color_convert = VAR_9;
      FUNC_2(VAR_11);
    } else if (VAR_11->jpeg_color_space == 130 && VAR_4 == 3) {
      VAR_12->pub.color_convert = VAR_7;
    } else
      FUNC_0(VAR_11, VAR_2);
    break;

  case 132:
    VAR_11->out_color_components = 4;
    if (VAR_11->jpeg_color_space == 129) {
      VAR_12->pub.color_convert = VAR_10;
      FUNC_2(VAR_11);
    } else if (VAR_11->jpeg_color_space == 132) {
      VAR_12->pub.color_convert = VAR_7;
    } else
      FUNC_0(VAR_11, VAR_2);
    break;

  default:

    if (VAR_11->out_color_space == VAR_11->jpeg_color_space) {
      VAR_11->out_color_components = VAR_11->num_components;
      VAR_12->pub.color_convert = VAR_7;
    } else
      FUNC_0(VAR_11, VAR_2);
    break;
  }

  if (VAR_11->quantize_colors)
    VAR_11->output_components = 1;
  else
    VAR_11->output_components = VAR_11->out_color_components;
}
