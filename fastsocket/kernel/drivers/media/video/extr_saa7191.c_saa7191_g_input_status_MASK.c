
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*,int*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5, u32 *VAR_6)
{
 u8 VAR_7;
 int VAR_8 = VAR_4;

 if (FUNC_0(VAR_5, &VAR_7))
  return -VAR_0;
 if ((VAR_7 & VAR_2) == 0)
  VAR_8 = 0;
 if (!(VAR_7 & VAR_1))
  VAR_8 |= VAR_3;
 *VAR_6 = VAR_8;
 return 0;
}
