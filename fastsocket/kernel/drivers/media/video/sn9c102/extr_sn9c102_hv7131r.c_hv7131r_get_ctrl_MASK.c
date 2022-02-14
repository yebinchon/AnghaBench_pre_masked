
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 void* FUNC_0 (struct sn9c102_device*,int) ;

__attribute__((used)) static int FUNC_1(struct sn9c102_device* VAR_2,
       struct v4l2_control* VAR_3)
{
 switch (VAR_3->id) {
 case 129:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x30)) < 0)
   return -VAR_1;
  return 0;
 case 128:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x31)) < 0)
   return -VAR_1;
  VAR_3->value = VAR_3->value & 0x3f;
  return 0;
 case 130:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x33)) < 0)
   return -VAR_1;
  VAR_3->value = VAR_3->value & 0x3f;
  return 0;
 case 132:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x32)) < 0)
   return -VAR_1;
  VAR_3->value = VAR_3->value & 0x3f;
  return 0;
 case 131:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x01)) < 0)
   return -VAR_1;
  VAR_3->value = (VAR_3->value & 0x08) ? 1 : 0;
  return 0;
 default:
  return -VAR_0;
 }
}
