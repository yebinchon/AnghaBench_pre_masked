
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_2, unsigned VAR_3,
     enum v4l2_mbus_pixelcode *VAR_4)
{
 if (VAR_3 > 0)
  return -VAR_0;

 *VAR_4 = VAR_1;
 return 0;
}
