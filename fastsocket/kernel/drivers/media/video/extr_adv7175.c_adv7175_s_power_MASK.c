
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, int VAR_1)
{
 if (VAR_1)
  FUNC_0(VAR_0, 0x01, 0x00);
 else
  FUNC_0(VAR_0, 0x01, 0x78);

 return 0;
}
