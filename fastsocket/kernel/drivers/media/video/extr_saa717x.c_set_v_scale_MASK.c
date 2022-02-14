
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1 * 0x40;

 FUNC_0(VAR_0, 0x70 + VAR_3, VAR_2 & 0xff);

 FUNC_0(VAR_0, 0x71 + VAR_3, VAR_2 >> 8);
}
