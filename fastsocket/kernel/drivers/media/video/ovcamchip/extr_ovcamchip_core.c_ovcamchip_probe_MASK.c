
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ovcamchip {size_t subtype; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int * VAR_2 ;
 int FUNC_1 (struct ovcamchip*) ;
 struct ovcamchip* FUNC_2 (int,int ) ;
 int FUNC_3 (struct i2c_client*) ;
 int VAR_3 ;
 int FUNC_4 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,char*,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct ovcamchip *VAR_6;
 struct v4l2_subdev *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_2(sizeof *VAR_6, VAR_1);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto no_ov;
 }
 VAR_7 = &VAR_6->sd;
 FUNC_4(VAR_7, VAR_4, &VAR_3);

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8 < 0)
  goto error;

 FUNC_5(VAR_4, "%s found @ 0x%02x (%s)\n",
   VAR_2[VAR_6->subtype], VAR_4->addr << 1, VAR_4->adapter->name);

 FUNC_0(1, "Camera chip detection complete");

 return VAR_8;
error:
 FUNC_1(VAR_6);
no_ov:
 FUNC_0(1, "returning %d", VAR_8);
 return VAR_8;
}
