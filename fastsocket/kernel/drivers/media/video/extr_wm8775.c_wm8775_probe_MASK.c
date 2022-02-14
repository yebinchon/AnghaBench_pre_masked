
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
struct v4l2_subdev {TYPE_1__* ctrl_handler; } ;
struct wm8775_state {int input; TYPE_1__ hdl; int mute; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_4__* adapter; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (struct wm8775_state*) ;
 struct wm8775_state* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int,int,int ) ;
 int FUNC_6 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,char*,int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_20,
   const struct i2c_device_id *VAR_21)
{
 struct wm8775_state *VAR_22;
 struct v4l2_subdev *VAR_23;


 if (!FUNC_0(VAR_20->adapter, VAR_3))
  return -VAR_0;

 FUNC_7(VAR_20, "chip found @ 0x%02x (%s)\n",
   VAR_20->addr << 1, VAR_20->adapter->name);

 VAR_22 = FUNC_2(sizeof(struct wm8775_state), VAR_2);
 if (VAR_22 == ((void*)0))
  return -VAR_1;
 VAR_23 = &VAR_22->sd;
 FUNC_6(VAR_23, VAR_20, &VAR_19);
 VAR_22->input = 2;

 FUNC_4(&VAR_22->hdl, 1);
 VAR_22->mute = FUNC_5(&VAR_22->hdl, &VAR_18,
   VAR_17, 0, 1, 1, 0);
 VAR_23->ctrl_handler = &VAR_22->hdl;
 if (VAR_22->hdl.error) {
  int VAR_24 = VAR_22->hdl.error;

  FUNC_3(&VAR_22->hdl);
  FUNC_1(VAR_22);
  return VAR_24;
 }




 FUNC_8(VAR_23, VAR_15, 0x000);

 FUNC_8(VAR_23, VAR_16, 0x000);

 FUNC_8(VAR_23, VAR_4, 0x021);

 FUNC_8(VAR_23, VAR_5, 0x102);

 FUNC_8(VAR_23, VAR_6, 0x000);

 FUNC_8(VAR_23, VAR_7, 0x1d4);

 FUNC_8(VAR_23, VAR_8, 0x1d4);

 FUNC_8(VAR_23, VAR_9, 0x1bf);


 FUNC_8(VAR_23, VAR_10, 0x185);

 FUNC_8(VAR_23, VAR_11, 0x0a2);

 FUNC_8(VAR_23, VAR_12, 0x005);

 FUNC_8(VAR_23, VAR_13, 0x07a);

 FUNC_8(VAR_23, VAR_14, 0x102);
 return 0;
}
