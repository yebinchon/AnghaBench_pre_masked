
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct sn9c102_device*,int) ;
 int FUNC_1 (struct sn9c102_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct sn9c102_device* VAR_2,
       const struct v4l2_control* VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->id) {
 case 129:
  VAR_4 += FUNC_1(VAR_2, 0x30, VAR_3->value);
  break;
 case 128:
  VAR_4 += FUNC_1(VAR_2, 0x31, VAR_3->value);
  break;
 case 130:
  VAR_4 += FUNC_1(VAR_2, 0x33, VAR_3->value);
  break;
 case 132:
  VAR_4 += FUNC_1(VAR_2, 0x32, VAR_3->value);
  break;
 case 131:
  {
   int VAR_5 = FUNC_0(VAR_2, 0x01);
   if (VAR_5 < 0)
    return -VAR_1;
   VAR_4 += FUNC_1(VAR_2, 0x01,
       (VAR_3->value<<3) | (VAR_5&0xf7));
  }
  break;
 default:
  return -VAR_0;
 }

 return VAR_4 ? -VAR_1 : 0;
}
