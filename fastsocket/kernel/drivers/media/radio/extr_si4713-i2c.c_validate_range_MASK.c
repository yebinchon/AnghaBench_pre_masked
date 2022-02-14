
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {scalar_t__ minimum; scalar_t__ maximum; int id; } ;
struct v4l2_ext_control {scalar_t__ value; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
     struct v4l2_ext_control *VAR_2)
{
 struct v4l2_queryctrl VAR_3;
 int VAR_4;

 VAR_3.id = VAR_2->id;
 VAR_4 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_4 < 0)
  goto exit;

 if (VAR_2->value < VAR_3.minimum || VAR_2->value > VAR_3.maximum)
  VAR_4 = -VAR_0;

exit:
 return VAR_4;
}
