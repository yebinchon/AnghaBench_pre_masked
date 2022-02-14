
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct il_priv {int lock; TYPE_1__* pci_dev; scalar_t__ eeprom; } ;
struct il3945_eeprom {int sku_cap; int board_revision; int almgor_m_version; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct il_priv*,int ,int ) ;
 int FUNC_3 (struct il_priv*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct il_priv *VAR_12)
{
 struct il3945_eeprom *VAR_13 = (struct il3945_eeprom *)VAR_12->eeprom;
 unsigned long VAR_14;
 u8 VAR_15 = VAR_12->pci_dev->revision;

 FUNC_4(&VAR_12->lock, VAR_14);


 FUNC_0("HW Revision ID = 0x%X\n", VAR_15);

 if (VAR_15 & VAR_11)
  FUNC_0("RTP type\n");
 else if (VAR_15 & VAR_10) {
  FUNC_0("3945 RADIO-MB type\n");
  FUNC_3(VAR_12, VAR_6,
      VAR_2);
 } else {
  FUNC_0("3945 RADIO-MM type\n");
  FUNC_3(VAR_12, VAR_6,
      VAR_3);
 }

 if (VAR_8 == VAR_13->sku_cap) {
  FUNC_0("SKU OP mode is mrc\n");
  FUNC_3(VAR_12, VAR_6,
      VAR_5);
 } else
  FUNC_0("SKU OP mode is basic\n");

 if ((VAR_13->board_revision & 0xF0) == 0xD0) {
  FUNC_0("3945ABG revision is 0x%X\n", VAR_13->board_revision);
  FUNC_3(VAR_12, VAR_6,
      VAR_4);
 } else {
  FUNC_0("3945ABG revision is 0x%X\n", VAR_13->board_revision);
  FUNC_2(VAR_12, VAR_6,
        VAR_4);
 }

 if (VAR_13->almgor_m_version <= 1) {
  FUNC_3(VAR_12, VAR_6,
      VAR_0);
  FUNC_0("Card M type A version is 0x%X\n",
         VAR_13->almgor_m_version);
 } else {
  FUNC_0("Card M type B version is 0x%X\n",
         VAR_13->almgor_m_version);
  FUNC_3(VAR_12, VAR_6,
      VAR_1);
 }
 FUNC_5(&VAR_12->lock, VAR_14);

 if (VAR_13->sku_cap & VAR_9)
  FUNC_1("SW RF KILL supported in EEPROM.\n");

 if (VAR_13->sku_cap & VAR_7)
  FUNC_1("HW RF KILL supported in EEPROM.\n");
}
