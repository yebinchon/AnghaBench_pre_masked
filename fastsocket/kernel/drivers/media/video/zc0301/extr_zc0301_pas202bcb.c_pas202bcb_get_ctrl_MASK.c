
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zc0301_device {int dummy; } ;
struct v4l2_control {int id; int value; } ;


 int VAR_0 ;
 int VAR_1 ;






 void* FUNC_0 (struct zc0301_device*,int,int) ;

__attribute__((used)) static int FUNC_1(struct zc0301_device* VAR_2,
         struct v4l2_control* VAR_3)
{
 switch (VAR_3->id) {
 case 132:
  {
   int VAR_4 = FUNC_0(VAR_2, 0x04, 1),
       VAR_5 = FUNC_0(VAR_2, 0x05, 1);
   if (VAR_4 < 0 || VAR_5 < 0)
    return -VAR_1;
   VAR_3->value = (VAR_4 << 6) | (VAR_5 & 0x3f);
  }
  return 0;
 case 130:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x09, 1)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x0f;
  return 0;
 case 133:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x07, 1)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x0f;
  return 0;
 case 131:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x10, 1)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x1f;
  return 0;
 case 128:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x08, 1)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x0f;
  return 0;
 case 129:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x0c, 1)) < 0)
   return -VAR_1;
  return 0;
 default:
  return -VAR_0;
 }
}
