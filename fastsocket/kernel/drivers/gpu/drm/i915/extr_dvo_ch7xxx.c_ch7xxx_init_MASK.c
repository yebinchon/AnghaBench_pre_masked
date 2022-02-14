
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct intel_dvo_device {scalar_t__ slave_addr; struct ch7xxx_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {scalar_t__ name; } ;
struct ch7xxx_priv {int quiet; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct intel_dvo_device*,int ,scalar_t__*) ;
 int FUNC_3 (struct ch7xxx_priv*) ;
 struct ch7xxx_priv* FUNC_4 (int,int ) ;

__attribute__((used)) static bool FUNC_5(struct intel_dvo_device *VAR_4,
   struct i2c_adapter *VAR_5)
{

 struct ch7xxx_priv *VAR_6;
 uint8_t VAR_7, VAR_8;
 char *VAR_9;

 VAR_6 = FUNC_4(sizeof(struct ch7xxx_priv), VAR_3);
 if (VAR_6 == ((void*)0))
  return 0;

 VAR_4->i2c_bus = VAR_5;
 VAR_4->dev_priv = VAR_6;
 VAR_6->quiet = 1;

 if (!FUNC_2(VAR_4, VAR_2, &VAR_7))
  goto out;

 VAR_9 = FUNC_1(VAR_7);
 if (!VAR_9) {
  FUNC_0("ch7xxx not detected; got 0x%02x from %s "
    "slave %d.\n",
     VAR_7, VAR_5->name, VAR_4->slave_addr);
  goto out;
 }


 if (!FUNC_2(VAR_4, VAR_1, &VAR_8))
  goto out;

 if (VAR_8 != VAR_0) {
  FUNC_0("ch7xxx not detected; got 0x%02x from %s "
    "slave %d.\n",
     VAR_7, VAR_5->name, VAR_4->slave_addr);
  goto out;
 }

 VAR_6->quiet = 0;
 FUNC_0("Detected %s chipset, vendor/device ID 0x%02x/0x%02x\n",
    VAR_9, VAR_7, VAR_8);
 return 1;
out:
 FUNC_3(VAR_6);
 return 0;
}
