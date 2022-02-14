
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;
struct TYPE_2__ {int mbus_code; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_3, unsigned VAR_4,
     enum v4l2_mbus_pixelcode *VAR_5)
{
 if (VAR_4 >= VAR_1)
  return -VAR_0;

 *VAR_5 = VAR_2[VAR_4].mbus_code;
 return 0;
}
