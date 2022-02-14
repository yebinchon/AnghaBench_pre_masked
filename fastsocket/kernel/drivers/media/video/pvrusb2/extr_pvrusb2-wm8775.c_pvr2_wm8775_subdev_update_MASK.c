
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {TYPE_2__* ops; } ;
struct pvr2_hdw {int input_val; scalar_t__ force_dirty; scalar_t__ input_dirty; } ;
struct TYPE_4__ {TYPE_1__* audio; } ;
struct TYPE_3__ {int (* s_routing ) (struct v4l2_subdev*,int,int ,int ) ;} ;



 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int ,int ) ;

void FUNC_2(struct pvr2_hdw *VAR_1, struct v4l2_subdev *VAR_2)
{
 if (VAR_1->input_dirty || VAR_1->force_dirty) {
  u32 VAR_3;

  switch (VAR_1->input_val) {
  case 128:
   VAR_3 = 1;
   break;
  default:

   VAR_3 = 2;
   break;
  }
  FUNC_0(VAR_0, "subdev wm8775"
      " set_input(val=%d route=0x%x)",
      VAR_1->input_val, VAR_3);

  VAR_2->ops->audio->s_routing(VAR_2, VAR_3, 0, 0);
 }
}
