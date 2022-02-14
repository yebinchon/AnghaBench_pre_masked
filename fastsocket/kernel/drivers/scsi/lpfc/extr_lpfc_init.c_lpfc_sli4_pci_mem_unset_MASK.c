
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int conf_regs_memmap_p; int ctrl_regs_memmap_p; int drbl_regs_memmap_p; int sli_intf; } ;
struct lpfc_hba {TYPE_1__* pcidev; TYPE_2__ sli4_hba; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_2)
{
 uint32_t VAR_3;
 VAR_3 = FUNC_0(VAR_1, &VAR_2->sli4_hba.sli_intf);

 switch (VAR_3) {
 case 130:
  FUNC_2(VAR_2->sli4_hba.drbl_regs_memmap_p);
  FUNC_2(VAR_2->sli4_hba.ctrl_regs_memmap_p);
  FUNC_2(VAR_2->sli4_hba.conf_regs_memmap_p);
  break;
 case 128:
  FUNC_2(VAR_2->sli4_hba.conf_regs_memmap_p);
  break;
 case 129:
 default:
  FUNC_1(VAR_0, &VAR_2->pcidev->dev,
      "FATAL - unsupported SLI4 interface type - %d\n",
      VAR_3);
  break;
 }
}
