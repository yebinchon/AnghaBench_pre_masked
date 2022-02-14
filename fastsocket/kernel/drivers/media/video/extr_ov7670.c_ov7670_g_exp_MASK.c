
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
typedef unsigned char __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3, __s32 *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_0(VAR_3, VAR_2, &VAR_6) +
  FUNC_0(VAR_3, VAR_0, &VAR_7) +
  FUNC_0(VAR_3, VAR_1, &VAR_8);
 *VAR_4 = ((VAR_8 & 0x3f) << 10) | (VAR_7 << 2) | (VAR_6 & 0x03);
 return VAR_5;
}
