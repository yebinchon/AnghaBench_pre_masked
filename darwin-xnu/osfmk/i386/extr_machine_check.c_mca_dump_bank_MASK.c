
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* mca_error_bank; } ;
typedef TYPE_2__ mca_state_t ;
struct TYPE_6__ {scalar_t__ miscv; scalar_t__ addrv; int val; } ;
struct TYPE_9__ {TYPE_1__ bits; int u64; } ;
struct TYPE_8__ {int mca_mci_misc; int mca_mci_addr; TYPE_4__ mca_mci_status; } ;
typedef TYPE_3__ mca_mci_bank_t ;
typedef TYPE_4__ ia32_mci_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(mca_state_t *VAR_0, int VAR_1)
{
 mca_mci_bank_t *VAR_2;
 ia32_mci_status_t VAR_3;

 VAR_2 = &VAR_0->mca_error_bank[VAR_1];
 VAR_3 = VAR_2->mca_mci_status;
 if (!VAR_3.bits.val)
  return;

 FUNC_3(" IA32_MC%d_STATUS(0x%x): 0x%016qx\n",
  VAR_1, FUNC_2(VAR_1), VAR_3.u64);

 if (VAR_3.bits.addrv)
  FUNC_3(" IA32_MC%d_ADDR(0x%x):   0x%016qx\n",
   VAR_1, FUNC_0(VAR_1), VAR_2->mca_mci_addr);

 if (VAR_3.bits.miscv)
  FUNC_3(" IA32_MC%d_MISC(0x%x):   0x%016qx\n",
   VAR_1, FUNC_1(VAR_1), VAR_2->mca_mci_misc);
}
