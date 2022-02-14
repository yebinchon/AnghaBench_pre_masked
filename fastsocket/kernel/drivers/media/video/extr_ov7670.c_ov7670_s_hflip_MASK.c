
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,unsigned char*) ;
 scalar_t__ FUNC_2 (struct v4l2_subdev*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, int VAR_3)
{
 unsigned char VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_4);
 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 FUNC_0(10);
 VAR_5 += FUNC_2(VAR_2, VAR_1, VAR_4);
 return VAR_5;
}
