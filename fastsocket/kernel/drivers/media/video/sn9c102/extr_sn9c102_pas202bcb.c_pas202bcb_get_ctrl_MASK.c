
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
 case 130:
  {
   int VAR_4 = FUNC_0(VAR_2, 0x04),
       VAR_5 = FUNC_0(VAR_2, 0x05);
   if (VAR_4 < 0 || VAR_5 < 0)
    return -VAR_1;
   VAR_3->value = (VAR_4 << 6) | (VAR_5 & 0x3f);
  }
  return 0;
 case 128:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x09)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x0f;
  return 0;
 case 131:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x07)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x0f;
  return 0;
 case 129:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x10)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x1f;
  return 0;
 case 132:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x08)) < 0)
   return -VAR_1;
  VAR_3->value &= 0x0f;
  return 0;
 case 133:
  if ((VAR_3->value = FUNC_0(VAR_2, 0x0c)) < 0)
   return -VAR_1;
  return 0;
 default:
  return -VAR_0;
 }
}
