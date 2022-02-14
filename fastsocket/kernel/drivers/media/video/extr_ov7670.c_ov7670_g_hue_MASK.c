
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {int hue; } ;
typedef int __s32 ;


 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, __s32 *VAR_1)
{
 struct ov7670_info *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->hue;
 return 0;
}
