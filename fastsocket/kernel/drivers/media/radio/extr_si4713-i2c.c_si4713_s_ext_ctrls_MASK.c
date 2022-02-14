
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; TYPE_1__* controls; } ;
struct si4713_device {int dummy; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (struct si4713_device*,TYPE_1__*) ;
 int FUNC_1 (struct si4713_device*,TYPE_1__*) ;
 int FUNC_2 (struct si4713_device*,TYPE_1__*) ;
 struct si4713_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
    struct v4l2_ext_controls *VAR_3)
{
 struct si4713_device *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 if (VAR_3->ctrl_class != VAR_1)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->count; VAR_5++) {
  int VAR_6;

  switch ((VAR_3->controls + VAR_5)->id) {
  case 131:
  case 130:
   VAR_6 = FUNC_1(VAR_4,
       VAR_3->controls + VAR_5);
   break;
  case 129:
  case 128:
   VAR_6 = FUNC_2(VAR_4,
       VAR_3->controls + VAR_5);
   break;
  default:
   VAR_6 = FUNC_0(VAR_4,
       VAR_3->controls + VAR_5);
  }

  if (VAR_6 < 0) {
   VAR_3->error_idx = VAR_5;
   return VAR_6;
  }
 }

 return 0;
}
