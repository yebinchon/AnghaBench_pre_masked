
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
typedef int __s32 ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2, __s32 *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5);
 *VAR_3 = (VAR_5 & VAR_0) != 0;
 return VAR_4;
}
