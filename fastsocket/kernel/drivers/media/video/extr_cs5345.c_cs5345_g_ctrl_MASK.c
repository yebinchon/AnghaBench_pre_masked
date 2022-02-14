
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {scalar_t__ id; int value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3, struct v4l2_control *VAR_4)
{
 if (VAR_4->id == VAR_1) {
  VAR_4->value = (FUNC_0(VAR_3, 0x04) & 0x08) != 0;
  return 0;
 }
 if (VAR_4->id != VAR_2)
  return -VAR_0;
 VAR_4->value = FUNC_0(VAR_3, 0x07) & 0x3f;
 if (VAR_4->value >= 32)
  VAR_4->value = VAR_4->value - 64;
 return 0;
}
