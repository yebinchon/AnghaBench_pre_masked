
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct sn9c102_device {int dummy; } ;
typedef enum sn9c102_bridge { ____Placeholder_sn9c102_bridge } sn9c102_bridge ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sn9c102_device*) ;
 void* FUNC_1 (struct sn9c102_device*,int) ;
 void* FUNC_2 (struct sn9c102_device*,int) ;

__attribute__((used)) static int FUNC_3(struct sn9c102_device* VAR_4,
      struct v4l2_control* VAR_5)
{
 enum sn9c102_bridge VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = 0;

 switch (VAR_5->id) {
 case 132:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x10)) < 0)
   return -VAR_3;
  break;
 case 130:
  if (VAR_6 == VAR_0 || VAR_6 == VAR_1)
   VAR_5->value = FUNC_2(VAR_4, 0x05);
  else
   VAR_5->value = FUNC_2(VAR_4, 0x07);
  break;
 case 134:
  VAR_5->value = FUNC_2(VAR_4, 0x06);
  break;
 case 136:
  if (VAR_6 == VAR_0 || VAR_6 == VAR_1)
   VAR_5->value = FUNC_2(VAR_4, 0x07);
  else
   VAR_5->value = FUNC_2(VAR_4, 0x05);
  break;
  break;
 case 131:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x00)) < 0)
   return -VAR_3;
  VAR_5->value &= 0x3f;
  break;
 case 133:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x0c)) < 0)
   return -VAR_3;
  VAR_5->value &= 0x3f;
  break;
 case 128:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x0d)) < 0)
   return -VAR_3;
  VAR_5->value &= 0x3f;
  break;
 case 135:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x13)) < 0)
   return -VAR_3;
  VAR_5->value &= 0x01;
  break;
 case 129:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x75)) < 0)
   return -VAR_3;
  VAR_5->value = (VAR_5->value & 0x80) ? 1 : 0;
  break;
 case 137:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x14)) < 0)
   return -VAR_3;
  VAR_5->value = (VAR_5->value & 0x02) ? 1 : 0;
  break;
 case 138:
  if ((VAR_5->value = FUNC_1(VAR_4, 0x2d)) < 0)
   return -VAR_3;
  VAR_5->value = (VAR_5->value & 0x02) ? 1 : 0;
  break;
 default:
  return -VAR_2;
 }

 return VAR_7 ? -VAR_3 : 0;
}
