
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_4__* adapter; int name; } ;
struct TYPE_5__ {int error; } ;
struct cs53l32a_state {TYPE_1__ hdl; struct v4l2_subdev sd; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (struct cs53l32a_state*) ;
 struct cs53l32a_state* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int *,int ,int,int,int,int ) ;
 int FUNC_9 (int,int ,struct v4l2_subdev*,char*,int,int ) ;
 int FUNC_10 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_11 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_9,
     const struct i2c_device_id *VAR_10)
{
 struct cs53l32a_state *VAR_11;
 struct v4l2_subdev *VAR_12;
 int VAR_13;


 if (!FUNC_2(VAR_9->adapter, VAR_3))
  return -VAR_0;

 if (!VAR_10)
  FUNC_5(VAR_9->name, "cs53l32a", sizeof(VAR_9->name));

 FUNC_11(VAR_9, "chip found @ 0x%x (%s)\n",
   VAR_9->addr << 1, VAR_9->adapter->name);

 VAR_11 = FUNC_4(sizeof(struct cs53l32a_state), VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;
 VAR_12 = &VAR_11->sd;
 FUNC_10(VAR_12, VAR_9, &VAR_7);

 for (VAR_13 = 1; VAR_13 <= 7; VAR_13++) {
  u8 VAR_14 = FUNC_0(VAR_12, VAR_13);

  FUNC_9(1, VAR_8, VAR_12, "Read Reg %d %02x\n", VAR_13, VAR_14);
 }

 FUNC_7(&VAR_11->hdl, 2);
 FUNC_8(&VAR_11->hdl, &VAR_6,
   VAR_5, -96, 12, 1, 0);
 FUNC_8(&VAR_11->hdl, &VAR_6,
   VAR_4, 0, 1, 1, 0);
 VAR_12->ctrl_handler = &VAR_11->hdl;
 if (VAR_11->hdl.error) {
  int VAR_15 = VAR_11->hdl.error;

  FUNC_6(&VAR_11->hdl);
  FUNC_3(VAR_11);
  return VAR_15;
 }



 FUNC_1(VAR_12, 0x01, 0x21);
 FUNC_1(VAR_12, 0x02, 0x29);
 FUNC_1(VAR_12, 0x03, 0x30);
 FUNC_1(VAR_12, 0x04, 0x00);
 FUNC_1(VAR_12, 0x05, 0x00);
 FUNC_1(VAR_12, 0x06, 0x00);
 FUNC_1(VAR_12, 0x07, 0x00);



 for (VAR_13 = 1; VAR_13 <= 7; VAR_13++) {
  u8 VAR_16 = FUNC_0(VAR_12, VAR_13);

  FUNC_9(1, VAR_8, VAR_12, "Read Reg %d %02x\n", VAR_13, VAR_16);
 }
 return 0;
}
