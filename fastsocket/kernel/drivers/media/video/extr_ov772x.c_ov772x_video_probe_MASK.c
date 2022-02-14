
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int parent; } ;
struct soc_camera_device {scalar_t__ iface; TYPE_1__ dev; } ;
struct ov772x_priv {int model; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,char const*,int ,int ,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 struct ov772x_priv* FUNC_4 (struct i2c_client*) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct soc_camera_device *VAR_7,
         struct i2c_client *VAR_8)
{
 struct ov772x_priv *VAR_9 = FUNC_4(VAR_8);
 u8 VAR_10, VAR_11;
 const char *VAR_12;





 if (!VAR_7->dev.parent ||
     FUNC_5(VAR_7->dev.parent)->nr != VAR_7->iface)
  return -VAR_0;




 VAR_10 = FUNC_3(VAR_8, VAR_3);
 VAR_11 = FUNC_3(VAR_8, VAR_6);

 switch (FUNC_0(VAR_10, VAR_11)) {
 case 129:
  VAR_12 = "ov7720";
  VAR_9->model = VAR_4;
  break;
 case 128:
  VAR_12 = "ov7725";
  VAR_9->model = VAR_5;
  break;
 default:
  FUNC_1(&VAR_8->dev,
   "Product ID error %x:%x\n", VAR_10, VAR_11);
  return -VAR_0;
 }

 FUNC_2(&VAR_8->dev,
   "%s Product ID %0x:%0x Manufacturer ID %x:%x\n",
   VAR_12,
   VAR_10,
   VAR_11,
   FUNC_3(VAR_8, VAR_1),
   FUNC_3(VAR_8, VAR_2));

 return 0;
}
