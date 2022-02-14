
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct bt819 {int enable; int contrast; int sat; scalar_t__ hue; scalar_t__ bright; scalar_t__ input; int norm; int ident; struct v4l2_subdev sd; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 int VAR_8 ;
 int FUNC_1 (struct bt819*,int) ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct bt819* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,int) ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,char*,char const*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_10,
   const struct i2c_device_id *VAR_11)
{
 int VAR_12, VAR_13;
 struct bt819 *VAR_14;
 struct v4l2_subdev *VAR_15;
 const char *VAR_16;


 if (!FUNC_2(VAR_10->adapter, VAR_3))
  return -VAR_0;

 VAR_14 = FUNC_3(sizeof(struct bt819), VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_1;
 VAR_15 = &VAR_14->sd;
 FUNC_5(VAR_15, VAR_10, &VAR_8);

 VAR_13 = FUNC_1(VAR_14, 0x17);
 switch (VAR_13 & 0xf0) {
 case 0x70:
  VAR_16 = "bt819a";
  VAR_14->ident = VAR_6;
  break;
 case 0x60:
  VAR_16 = "bt817a";
  VAR_14->ident = VAR_5;
  break;
 case 0x20:
  VAR_16 = "bt815a";
  VAR_14->ident = VAR_4;
  break;
 default:
  FUNC_4(1, VAR_9, VAR_15,
   "unknown chip version 0x%02x\n", VAR_13);
  return -VAR_0;
 }

 FUNC_6(VAR_10, "%s found @ 0x%x (%s)\n", VAR_16,
   VAR_10->addr << 1, VAR_10->adapter->name);

 VAR_14->norm = VAR_7;
 VAR_14->input = 0;
 VAR_14->enable = 1;
 VAR_14->bright = 0;
 VAR_14->contrast = 0xd8;
 VAR_14->hue = 0;
 VAR_14->sat = 0xfe;

 VAR_12 = FUNC_0(VAR_15);
 if (VAR_12 < 0)
  FUNC_4(1, VAR_9, VAR_15, "init status %d\n", VAR_12);
 return 0;
}
