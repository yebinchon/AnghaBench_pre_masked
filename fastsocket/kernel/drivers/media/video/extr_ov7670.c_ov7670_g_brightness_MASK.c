
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char*) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, __s32 *VAR_2)
{
 unsigned char VAR_3 = 0;
 int VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_3);

 *VAR_2 = FUNC_1(VAR_3);
 return VAR_4;
}
