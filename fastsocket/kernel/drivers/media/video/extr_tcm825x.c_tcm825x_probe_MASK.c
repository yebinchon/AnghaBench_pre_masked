
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pixelformat; int height; int width; } ;
struct tcm825x_sensor {int * v4l2_int_device; TYPE_3__ pix; struct i2c_client* i2c_client; TYPE_2__* platform_data; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {TYPE_2__* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct TYPE_8__ {int height; int width; } ;
struct TYPE_6__ {int (* is_okay ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,struct tcm825x_sensor*) ;
 int FUNC_2 () ;
 struct tcm825x_sensor VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct tcm825x_sensor *VAR_9 = &VAR_4;
 int VAR_10;

 if (FUNC_0(VAR_7))
  return -VAR_0;

 VAR_9->platform_data = VAR_7->dev.platform_data;

 if (VAR_9->platform_data == ((void*)0)
     || !VAR_9->platform_data->is_okay())
  return -VAR_1;

 VAR_9->v4l2_int_device = &VAR_5;

 VAR_9->i2c_client = VAR_7;
 FUNC_1(VAR_7, VAR_9);


 VAR_9->pix.width = VAR_6[VAR_2].width;
 VAR_9->pix.height = VAR_6[VAR_2].height;
 VAR_9->pix.pixelformat = VAR_3;

 VAR_10 = FUNC_3(VAR_9->v4l2_int_device);
 if (VAR_10)
  FUNC_1(VAR_7, ((void*)0));

 return VAR_10;
}
