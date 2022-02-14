
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jpeg_color_converter {int dummy; } ;
typedef TYPE_3__* my_cconvert_ptr ;
typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_10__ {int in_color_space; int input_components; int jpeg_color_space; int num_components; struct jpeg_color_converter* cconvert; TYPE_1__* mem; } ;
struct TYPE_8__ {void* color_convert; void* start_pass; } ;
struct TYPE_9__ {TYPE_2__ pub; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_4__*,int ) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

void
FUNC_3 (j_compress_ptr VAR_13)
{
  my_cconvert_ptr VAR_14;

  VAR_14 = (my_cconvert_ptr)
    (*VAR_13->mem->alloc_small) ((j_common_ptr) VAR_13, VAR_3,
    FUNC_1(VAR_7));
  VAR_13->cconvert = (struct jpeg_color_converter *) VAR_14;

  VAR_14->pub.start_pass = VAR_9;


  switch (VAR_13->in_color_space) {
  case 131:
    if (VAR_13->input_components != 1)
      FUNC_0(VAR_13, VAR_0);
    break;

  case 130:

    if (VAR_13->input_components != VAR_4)
      FUNC_0(VAR_13, VAR_0);
    break;


  case 128:
    if (VAR_13->input_components != 3)
      FUNC_0(VAR_13, VAR_0);
    break;

  case 132:
  case 129:
    if (VAR_13->input_components != 4)
      FUNC_0(VAR_13, VAR_0);
    break;

  default:
    if (VAR_13->input_components < 1)
      FUNC_0(VAR_13, VAR_0);
    break;
  }


  switch (VAR_13->jpeg_color_space) {
  case 131:
    if (VAR_13->num_components != 1)
      FUNC_0(VAR_13, VAR_1);
    if (VAR_13->in_color_space == 131)
      VAR_14->pub.color_convert = VAR_6;
    else if (VAR_13->in_color_space == 130) {
      VAR_14->pub.start_pass = VAR_12;
      VAR_14->pub.color_convert = VAR_10;
    } else if (VAR_13->in_color_space == 128)
      VAR_14->pub.color_convert = VAR_6;
    else
      FUNC_0(VAR_13, VAR_2);
    break;

  case 130:
    if (VAR_13->num_components != 3)
      FUNC_0(VAR_13, VAR_1);
    if (VAR_13->in_color_space == 130 && VAR_4 == 3)
      VAR_14->pub.color_convert = VAR_8;
    else
      FUNC_0(VAR_13, VAR_2);
    break;

  case 128:
    if (VAR_13->num_components != 3)
      FUNC_0(VAR_13, VAR_1);
    if (VAR_13->in_color_space == 130) {
      VAR_14->pub.start_pass = VAR_12;
      VAR_14->pub.color_convert = VAR_11;
    } else if (VAR_13->in_color_space == 128)
      VAR_14->pub.color_convert = VAR_8;
    else
      FUNC_0(VAR_13, VAR_2);
    break;

  case 132:
    if (VAR_13->num_components != 4)
      FUNC_0(VAR_13, VAR_1);
    if (VAR_13->in_color_space == 132)
      VAR_14->pub.color_convert = VAR_8;
    else
      FUNC_0(VAR_13, VAR_2);
    break;

  case 129:
    if (VAR_13->num_components != 4)
      FUNC_0(VAR_13, VAR_1);
    if (VAR_13->in_color_space == 132) {
      VAR_14->pub.start_pass = VAR_12;
      VAR_14->pub.color_convert = VAR_5;
    } else if (VAR_13->in_color_space == 129)
      VAR_14->pub.color_convert = VAR_8;
    else
      FUNC_0(VAR_13, VAR_2);
    break;

  default:
    if (VAR_13->jpeg_color_space != VAR_13->in_color_space ||
 VAR_13->num_components != VAR_13->input_components)
      FUNC_0(VAR_13, VAR_2);
    VAR_14->pub.color_convert = VAR_8;
    break;
  }
}
