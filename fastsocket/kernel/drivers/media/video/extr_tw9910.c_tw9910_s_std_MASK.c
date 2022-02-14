
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3, v4l2_std_id VAR_4)
{
 int VAR_5 = -VAR_0;

 if (VAR_4 & (VAR_1 | VAR_2))
  VAR_5 = 0;

 return VAR_5;
}
