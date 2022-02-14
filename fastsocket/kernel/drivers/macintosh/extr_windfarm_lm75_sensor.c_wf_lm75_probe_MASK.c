
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ops; int name; } ;
struct wf_lm75_sensor {TYPE_2__ sens; struct i2c_client* i2c; int ds1775; scalar_t__ inited; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_3__ {int platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,struct wf_lm75_sensor*) ;
 int FUNC_1 (struct wf_lm75_sensor*) ;
 struct wf_lm75_sensor* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 struct wf_lm75_sensor *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(struct wf_lm75_sensor), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->inited = 0;
 VAR_5->ds1775 = VAR_4->driver_data;
 VAR_5->i2c = VAR_3;
 VAR_5->sens.name = VAR_3->dev.platform_data;
 VAR_5->sens.ops = &VAR_2;
 FUNC_0(VAR_3, VAR_5);

 VAR_6 = FUNC_3(&VAR_5->sens);
 if (VAR_6) {
  FUNC_0(VAR_3, ((void*)0));
  FUNC_1(VAR_5);
 }

 return VAR_6;
}
