
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct tlv320aic23b_state {scalar_t__ muted; struct v4l2_subdev sd; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct tlv320aic23b_state* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct v4l2_subdev*,int,int) ;
 int FUNC_3 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5,
         const struct i2c_device_id *VAR_6)
{
 struct tlv320aic23b_state *VAR_7;
 struct v4l2_subdev *VAR_8;


 if (!FUNC_0(VAR_5->adapter, VAR_3))
  return -VAR_0;

 FUNC_4(VAR_5, "chip found @ 0x%x (%s)\n",
   VAR_5->addr << 1, VAR_5->adapter->name);

 VAR_7 = FUNC_1(sizeof(struct tlv320aic23b_state), VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;
 VAR_8 = &VAR_7->sd;
 FUNC_3(VAR_8, VAR_5, &VAR_4);
 VAR_7->muted = 0;




 FUNC_2(VAR_8, 15, 0x000);

 FUNC_2(VAR_8, 6, 0x00A);

 FUNC_2(VAR_8, 7, 0x049);

 FUNC_2(VAR_8, 0, 0x119);

 FUNC_2(VAR_8, 8, 0x000);

 FUNC_2(VAR_8, 9, 0x001);
 return 0;
}
