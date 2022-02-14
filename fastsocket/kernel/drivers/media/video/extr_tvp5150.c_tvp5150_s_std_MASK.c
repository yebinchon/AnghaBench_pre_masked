
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {scalar_t__ norm; } ;


 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct tvp5150 *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->norm == VAR_1)
  return 0;

 return FUNC_1(VAR_0, VAR_1);
}
