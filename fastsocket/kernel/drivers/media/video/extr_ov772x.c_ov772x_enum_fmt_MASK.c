
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;
struct TYPE_3__ {int code; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2, unsigned int VAR_3,
      enum v4l2_mbus_pixelcode *VAR_4)
{
 if (VAR_3 >= FUNC_0(VAR_1))
  return -VAR_0;

 *VAR_4 = VAR_1[VAR_3].code;
 return 0;
}
