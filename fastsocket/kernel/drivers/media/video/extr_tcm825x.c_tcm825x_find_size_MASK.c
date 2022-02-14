
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct tcm825x_sensor {TYPE_1__* i2c_client; } ;
typedef enum image_size { ____Placeholder_image_size } image_size ;
struct TYPE_4__ {unsigned long height; unsigned long width; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static enum image_size FUNC_1(struct v4l2_int_device *VAR_3,
      unsigned int VAR_4,
      unsigned int VAR_5)
{
 enum image_size VAR_6;
 unsigned long VAR_7 = VAR_4 * VAR_5;
 struct tcm825x_sensor *VAR_8 = VAR_3->priv;

 for (VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2[VAR_6 + 1].height
      * VAR_2[VAR_6 + 1].width > VAR_7) {
   FUNC_0(&VAR_8->i2c_client->dev, "size %d\n", VAR_6);

   return VAR_6;
  }
 }

 FUNC_0(&VAR_8->i2c_client->dev, "format default VGA\n");

 return VAR_0;
}
