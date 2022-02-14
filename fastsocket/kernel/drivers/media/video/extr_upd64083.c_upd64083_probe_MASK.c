
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct upd64083_state {int ext_y_adc; int * regs; scalar_t__ mode; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct upd64083_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct v4l2_subdev*,int,int ) ;
 int FUNC_4 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_7,
     const struct i2c_device_id *VAR_8)
{
 struct upd64083_state *VAR_9;
 struct v4l2_subdev *VAR_10;
 int VAR_11;

 if (!FUNC_0(VAR_7->adapter, VAR_3))
  return -VAR_0;

 FUNC_5(VAR_7, "chip found @ 0x%x (%s)\n",
   VAR_7->addr << 1, VAR_7->adapter->name);

 VAR_9 = FUNC_1(sizeof(struct upd64083_state), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;
 VAR_10 = &VAR_9->sd;
 FUNC_4(VAR_10, VAR_7, &VAR_6);

 VAR_9->mode = 0;
 VAR_9->ext_y_adc = (1 << 5);
 FUNC_2(VAR_9->regs, VAR_5, VAR_4);
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
  FUNC_3(VAR_10, VAR_11, VAR_9->regs[VAR_11]);
 return 0;
}
