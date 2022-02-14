
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct em28xx {int volume; int mute; } ;





__attribute__((used)) static int FUNC_0(struct em28xx *VAR_0, struct v4l2_control *VAR_1)
{
 switch (VAR_1->id) {
 case 129:
  VAR_1->value = VAR_0->mute;
  return 0;
 case 128:
  VAR_1->value = VAR_0->volume;
  return 0;
 default:

  return 1;
 }
}
