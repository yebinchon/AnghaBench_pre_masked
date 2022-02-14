
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct il_priv {TYPE_2__* ops; scalar_t__ eeprom; TYPE_1__* cfg; } ;
typedef int __le16 ;
struct TYPE_4__ {int (* eeprom_acquire_semaphore ) (struct il_priv*) ;int (* eeprom_release_semaphore ) (struct il_priv*) ;int (* apm_init ) (struct il_priv*) ;} ;
struct TYPE_3__ {int eeprom_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct il_priv*,int ,int ,int ,int ) ;
 int FUNC_3 (struct il_priv*,int ) ;
 int FUNC_4 (struct il_priv*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*,int ) ;
 int FUNC_9 (struct il_priv*) ;
 scalar_t__ FUNC_10 (int,int ) ;
 int FUNC_11 (struct il_priv*) ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*) ;

int
FUNC_14(struct il_priv *VAR_9)
{
 __le16 *VAR_10;
 u32 VAR_11 = FUNC_3(VAR_9, VAR_0);
 int VAR_12;
 int VAR_13;
 u16 VAR_14;


 VAR_12 = VAR_9->cfg->eeprom_size;
 FUNC_0("NVM size = %d\n", VAR_12);
 VAR_9->eeprom = FUNC_10(VAR_12, VAR_7);
 if (!VAR_9->eeprom) {
  VAR_13 = -VAR_6;
  goto alloc_err;
 }
 VAR_10 = (__le16 *) VAR_9->eeprom;

 VAR_9->ops->apm_init(VAR_9);

 VAR_13 = FUNC_9(VAR_9);
 if (VAR_13 < 0) {
  FUNC_1("EEPROM not found, EEPROM_GP=0x%08x\n", VAR_11);
  VAR_13 = -VAR_5;
  goto err;
 }


 VAR_13 = VAR_9->ops->eeprom_acquire_semaphore(VAR_9);
 if (VAR_13 < 0) {
  FUNC_1("Failed to acquire EEPROM semaphore.\n");
  VAR_13 = -VAR_5;
  goto err;
 }


 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14 += sizeof(u16)) {
  u32 VAR_15;

  FUNC_4(VAR_9, VAR_1,
         VAR_2 & (VAR_14 << 1));

  VAR_13 =
      FUNC_2(VAR_9, VAR_1,
     VAR_3,
     VAR_3,
     VAR_8);
  if (VAR_13 < 0) {
   FUNC_1("Time out reading EEPROM[%d]\n", VAR_14);
   goto done;
  }
  VAR_15 = FUNC_3(VAR_9, VAR_1);
  VAR_10[VAR_14 / 2] = FUNC_5(VAR_15 >> 16);
 }

 FUNC_0("NVM Type: %s, version: 0x%x\n", "EEPROM",
   FUNC_8(VAR_9, VAR_4));

 VAR_13 = 0;
done:
 VAR_9->ops->eeprom_release_semaphore(VAR_9);

err:
 if (VAR_13)
  FUNC_7(VAR_9);

 FUNC_6(VAR_9);
alloc_err:
 return VAR_13;
}
