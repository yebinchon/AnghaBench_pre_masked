
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
typedef enum tvp514x_std { ____Placeholder_tvp514x_std } tvp514x_std ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static enum tvp514x_std FUNC_1(struct v4l2_subdev *VAR_7)
{
 u8 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_7, VAR_0);
 if ((VAR_8 & VAR_6) == VAR_5)

  VAR_9 = FUNC_0(VAR_7, VAR_1);
 else

  VAR_9 = VAR_8;

 switch (VAR_9 & VAR_6) {
 case 129:
  return VAR_3;

 case 128:
  return VAR_4;

 default:
  return VAR_2;
 }

 return VAR_2;
}
