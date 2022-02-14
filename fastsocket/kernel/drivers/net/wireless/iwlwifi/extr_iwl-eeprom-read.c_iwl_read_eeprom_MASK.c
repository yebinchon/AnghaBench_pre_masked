
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_trans {int dev; TYPE_2__* cfg; } ;
typedef int __le16 ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {int eeprom_size; int shadow_ram_support; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int VAR_11 ;
 int FUNC_1 (struct iwl_trans*,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,int) ;
 int FUNC_6 (struct iwl_trans*,int*) ;
 int FUNC_7 (struct iwl_trans*) ;
 int FUNC_8 (struct iwl_trans*) ;
 int FUNC_9 (struct iwl_trans*,int ,int ,int ,int ) ;
 int FUNC_10 (struct iwl_trans*,int ) ;
 int FUNC_11 (struct iwl_trans*,int,int *) ;
 int FUNC_12 (struct iwl_trans*,int ,int) ;
 int FUNC_13 (struct iwl_trans*,int ,int) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int,int ) ;

int FUNC_16(struct iwl_trans *VAR_12, u8 **VAR_13, size_t *VAR_14)
{
 __le16 *VAR_15;
 u32 VAR_16 = FUNC_10(VAR_12, VAR_0);
 int VAR_17;
 int VAR_18;
 u16 VAR_19;
 u16 VAR_20 = 0;
 u16 VAR_21 = 0;
 int VAR_22;

 if (!VAR_13 || !VAR_14)
  return -VAR_8;

 VAR_22 = FUNC_8(VAR_12);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_17 = VAR_12->cfg->base_params->eeprom_size;
 FUNC_0(VAR_12->dev, "NVM size = %d\n", VAR_17);

 VAR_15 = FUNC_15(VAR_17, VAR_10);
 if (!VAR_15)
  return -VAR_9;

 VAR_18 = FUNC_5(VAR_12, VAR_22);
 if (VAR_18 < 0) {
  FUNC_1(VAR_12, "EEPROM not found, EEPROM_GP=0x%08x\n", VAR_16);
  goto err_free;
 }


 VAR_18 = FUNC_3(VAR_12);
 if (VAR_18 < 0) {
  FUNC_1(VAR_12, "Failed to acquire EEPROM semaphore.\n");
  goto err_free;
 }

 if (VAR_22) {
  VAR_18 = FUNC_7(VAR_12);
  if (VAR_18) {
   FUNC_1(VAR_12, "Failed to initialize OTP access.\n");
   goto err_unlock;
  }

  FUNC_13(VAR_12, VAR_0,
       FUNC_10(VAR_12, VAR_0) &
       ~VAR_1);

  FUNC_12(VAR_12, VAR_5,
       VAR_6 |
       VAR_7);

  if (!VAR_12->cfg->base_params->shadow_ram_support) {
   VAR_18 = FUNC_6(VAR_12, &VAR_20);
   if (VAR_18)
    goto err_unlock;
  }
  for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_17;
       VAR_19 += sizeof(u16)) {
   __le16 VAR_23;

   VAR_18 = FUNC_11(VAR_12, VAR_19, &VAR_23);
   if (VAR_18)
    goto err_unlock;
   VAR_15[VAR_21 / 2] = VAR_23;
   VAR_21 += sizeof(u16);
  }
 } else {

  for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19 += sizeof(u16)) {
   u32 VAR_24;

   FUNC_13(VAR_12, VAR_2,
        VAR_3 & (VAR_19 << 1));

   VAR_18 = FUNC_9(VAR_12, VAR_2,
        VAR_4,
        VAR_4,
        VAR_11);
   if (VAR_18 < 0) {
    FUNC_1(VAR_12,
     "Time out reading EEPROM[%d]\n", VAR_19);
    goto err_unlock;
   }
   VAR_24 = FUNC_10(VAR_12, VAR_2);
   VAR_15[VAR_19 / 2] = FUNC_2(VAR_24 >> 16);
  }
 }

 FUNC_0(VAR_12->dev, "NVM Type: %s\n",
    VAR_22 ? "OTP" : "EEPROM");

 FUNC_4(VAR_12);

 *VAR_14 = VAR_17;
 *VAR_13 = (u8 *)VAR_15;
 return 0;

 err_unlock:
 FUNC_4(VAR_12);
 err_free:
 FUNC_14(VAR_15);

 return VAR_18;
}
