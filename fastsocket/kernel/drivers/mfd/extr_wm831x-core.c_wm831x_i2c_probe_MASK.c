
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int write_dev; int read_dev; struct i2c_client* control_data; int * dev; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,struct wm831x*) ;
 int FUNC_1 (struct i2c_client*) ;
 struct wm831x* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wm831x*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
       const struct i2c_device_id *VAR_5)
{
 struct wm831x *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct wm831x), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }

 FUNC_0(VAR_4, VAR_6);
 VAR_6->dev = &VAR_4->dev;
 VAR_6->control_data = VAR_4;
 VAR_6->read_dev = VAR_2;
 VAR_6->write_dev = VAR_3;

 return FUNC_3(VAR_6, VAR_5->driver_data, VAR_4->irq);
}
