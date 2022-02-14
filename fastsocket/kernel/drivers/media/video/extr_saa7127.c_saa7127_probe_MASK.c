
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_data {int member_3; int member_2; int member_1; int member_0; } ;
struct saa7127_state {scalar_t__ ident; struct v4l2_subdev sd; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {int addr; TYPE_1__* adapter; int name; } ;
struct TYPE_2__ {int name; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct saa7127_state*) ;
 struct saa7127_state* FUNC_2 (int,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 int FUNC_4 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data*) ;
 int FUNC_5 (struct v4l2_subdev*,int ) ;
 int FUNC_6 (struct v4l2_subdev*,int ) ;
 int FUNC_7 (struct v4l2_subdev*,int ) ;
 int FUNC_8 (struct v4l2_subdev*,int) ;
 int FUNC_9 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data*) ;
 int FUNC_10 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data*) ;
 int FUNC_11 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data*) ;
 int FUNC_12 (struct v4l2_subdev*,int,int) ;
 int FUNC_13 (struct v4l2_subdev*,int ) ;
 int VAR_16 ;
 int FUNC_14 (int ,char*,int ) ;
 int VAR_17 ;
 int FUNC_15 (int,int ,struct v4l2_subdev*,char*) ;
 int FUNC_16 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_17 (struct v4l2_subdev*,char*,int ,int,int ) ;
 int FUNC_18 (int,int ,struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_18,
    const struct i2c_device_id *VAR_19)
{
 struct saa7127_state *VAR_20;
 struct v4l2_subdev *VAR_21;
 struct v4l2_sliced_vbi_data VAR_22 = { 0, 0, 0, 0 };


 if (!FUNC_0(VAR_18->adapter, VAR_4))
  return -VAR_0;

 FUNC_18(1, VAR_13, VAR_18, "detecting saa7127 client on address 0x%x\n",
   VAR_18->addr << 1);

 VAR_20 = FUNC_2(sizeof(struct saa7127_state), VAR_3);
 if (VAR_20 == ((void*)0))
  return -VAR_2;

 VAR_21 = &VAR_20->sd;
 FUNC_16(VAR_21, VAR_18, &VAR_15);






 if ((FUNC_3(VAR_21, 0) & 0xe4) != 0 ||
   (FUNC_3(VAR_21, 0x29) & 0x3f) != 0x1d) {
  FUNC_15(1, VAR_13, VAR_21, "saa7127 not found\n");
  FUNC_1(VAR_20);
  return -VAR_1;
 }

 if (VAR_19->driver_data) {
  VAR_20->ident = VAR_19->driver_data;
 } else {
  int VAR_23;


  VAR_23 = FUNC_3(VAR_21, VAR_9);
  FUNC_12(VAR_21, VAR_9, 0xaa);
  if (FUNC_3(VAR_21, VAR_9) == 0xaa) {
   FUNC_12(VAR_21, VAR_9,
     VAR_23);
   VAR_20->ident = VAR_11;
   FUNC_14(VAR_18->name, "saa7129", VAR_5);
  } else {
   VAR_20->ident = VAR_10;
   FUNC_14(VAR_18->name, "saa7127", VAR_5);
  }
 }

 FUNC_17(VAR_21, "%s found @ 0x%x (%s)\n", VAR_18->name,
   VAR_18->addr << 1, VAR_18->adapter->name);

 FUNC_15(1, VAR_13, VAR_21, "Configuring encoder\n");
 FUNC_13(VAR_21, VAR_14);
 FUNC_7(VAR_21, VAR_12);
 FUNC_6(VAR_21, VAR_8);
 FUNC_9(VAR_21, &VAR_22);
 FUNC_10(VAR_21, &VAR_22);
 FUNC_4(VAR_21, &VAR_22);
 FUNC_11(VAR_21, &VAR_22);
 if (VAR_17 == 1)


  FUNC_5(VAR_21, VAR_7);
 else
  FUNC_5(VAR_21, VAR_6);
 FUNC_8(VAR_21, 1);

 if (VAR_20->ident == VAR_11)
  FUNC_13(VAR_21, VAR_16);
 return 0;
}
