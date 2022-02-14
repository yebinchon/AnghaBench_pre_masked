
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,unsigned char*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3, int VAR_4)
{
 unsigned char VAR_5 = 0, VAR_6;
 int VAR_7;

 FUNC_1(VAR_3, VAR_2, &VAR_5);
 VAR_5 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_2, VAR_5);
 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = FUNC_2(VAR_3, VAR_1, VAR_6);
 return VAR_7;
}
