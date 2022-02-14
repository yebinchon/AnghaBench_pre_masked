
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wm8739_state {TYPE_3__* mute; TYPE_2__* volume; TYPE_1__* balance; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; } ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (scalar_t__,int) ;
 struct v4l2_subdev* FUNC_1 (struct v4l2_ctrl*) ;
 struct wm8739_state* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_1(VAR_3);
 struct wm8739_state *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6, VAR_7;
 u8 VAR_8;
 u8 VAR_9;
 u16 VAR_10;

 switch (VAR_3->id) {
 case 128:
  break;

 default:
  return -VAR_0;
 }


 VAR_6 = (FUNC_0(65536 - VAR_5->balance->val, 32768) * VAR_5->volume->val) / 32768;
 VAR_7 = (FUNC_0(VAR_5->balance->val, 32768) * VAR_5->volume->val) / 32768;

 VAR_8 = (long)VAR_6 * 31 / 65535;
 VAR_9 = (long)VAR_7 * 31 / 65535;


 VAR_10 = VAR_5->mute->val ? 0x80 : 0;




 FUNC_3(VAR_4, VAR_1, (VAR_8 & 0x1f) | VAR_10);
 FUNC_3(VAR_4, VAR_2, (VAR_9 & 0x1f) | VAR_10);
 return 0;
}
