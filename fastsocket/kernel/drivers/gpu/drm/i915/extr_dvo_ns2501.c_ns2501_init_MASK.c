
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ns2501_priv {int quiet; int reg_8_shadow; scalar_t__ reg_8_set; } ;
struct intel_dvo_device {int slave_addr; struct ns2501_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ns2501_priv*) ;
 struct ns2501_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (struct intel_dvo_device*,int ,unsigned char*) ;

__attribute__((used)) static bool FUNC_4(struct intel_dvo_device *VAR_9,
   struct i2c_adapter *VAR_10)
{

 struct ns2501_priv *VAR_11;
 unsigned char VAR_12;

 VAR_11 = FUNC_2(sizeof(struct ns2501_priv), VAR_0);
 if (VAR_11 == ((void*)0))
  return 0;

 VAR_9->i2c_bus = VAR_10;
 VAR_9->dev_priv = VAR_11;
 VAR_11->quiet = 1;

 if (!FUNC_3(VAR_9, VAR_8, &VAR_12))
  goto out;

 if (VAR_12 != (VAR_7 & 0xff)) {
  FUNC_0("ns2501 not detected got %d: from %s Slave %d.\n",
         VAR_12, VAR_10->name, VAR_9->slave_addr);
  goto out;
 }

 if (!FUNC_3(VAR_9, VAR_6, &VAR_12))
  goto out;

 if (VAR_12 != (VAR_5 & 0xff)) {
  FUNC_0("ns2501 not detected got %d: from %s Slave %d.\n",
         VAR_12, VAR_10->name, VAR_9->slave_addr);
  goto out;
 }
 VAR_11->quiet = 0;
 VAR_11->reg_8_set = 0;
 VAR_11->reg_8_shadow =
     VAR_3 | VAR_1 | VAR_4 | VAR_2;

 FUNC_0("init ns2501 dvo controller successfully!\n");
 return 1;

out:
 FUNC_1(VAR_11);
 return 0;
}
