
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct saa711x_state {TYPE_1__* agc; TYPE_2__* gain; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct saa711x_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_1(VAR_6);
 struct saa711x_state *VAR_8 = FUNC_2(VAR_7);

 switch (VAR_6->id) {
 case 132:
  FUNC_0(VAR_7, VAR_1, VAR_6->val);
  break;

 case 130:
  FUNC_0(VAR_7, VAR_2, VAR_6->val);
  break;

 case 128:
  FUNC_0(VAR_7, VAR_3, VAR_6->val);
  break;

 case 129:
  FUNC_0(VAR_7, VAR_4, VAR_6->val);
  break;

 case 131:

  if (VAR_8->agc->val)
   FUNC_0(VAR_7, VAR_5, VAR_8->gain->val);
  else
   FUNC_0(VAR_7, VAR_5, VAR_8->gain->val | 0x80);
  FUNC_3(VAR_8->gain, !VAR_8->agc->val);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
