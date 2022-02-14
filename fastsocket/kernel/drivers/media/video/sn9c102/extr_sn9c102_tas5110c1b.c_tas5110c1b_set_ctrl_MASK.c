
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct sn9c102_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct sn9c102_device*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct sn9c102_device* VAR_2,
          const struct v4l2_control* VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->id) {
 case 128:
  VAR_4 += FUNC_0(VAR_2, 0x20, 0xf6 - VAR_3->value);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4 ? -VAR_1 : 0;
}
