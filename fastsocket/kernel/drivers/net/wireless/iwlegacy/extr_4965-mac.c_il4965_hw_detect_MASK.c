
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int rev_id; TYPE_1__* pci_dev; void* hw_wa_rev; void* hw_rev; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (struct il_priv*,int ) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_2)
{
 VAR_2->hw_rev = FUNC_1(VAR_2, VAR_0);
 VAR_2->hw_wa_rev = FUNC_1(VAR_2, VAR_1);
 VAR_2->rev_id = VAR_2->pci_dev->revision;
 FUNC_0("HW Revision ID = 0x%X\n", VAR_2->rev_id);
}
