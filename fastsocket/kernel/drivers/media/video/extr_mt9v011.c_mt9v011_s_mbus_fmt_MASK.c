
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct mt9v011 {int height; int width; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 struct mt9v011* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_mbus_framefmt *VAR_2)
{
 struct mt9v011 *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4 < 0)
  return -VAR_0;

 VAR_3->width = VAR_2->width;
 VAR_3->height = VAR_2->height;

 FUNC_1(VAR_1);

 return 0;
}
