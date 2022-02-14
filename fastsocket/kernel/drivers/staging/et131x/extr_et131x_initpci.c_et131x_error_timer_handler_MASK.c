
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int link_status; } ;
struct TYPE_12__ {TYPE_5__ bits; } ;
struct TYPE_10__ {int TransPhyComaModeOnBoot; } ;
struct et131x_adapter {int ErrorTimer; scalar_t__ RegistryPhyComa; TYPE_6__ Bmsr; TYPE_4__ PoMgmt; TYPE_3__* pdev; TYPE_2__* regs; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int pm_csr; } ;
struct TYPE_8__ {TYPE_1__ global; } ;


 int VAR_0 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct et131x_adapter*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;

void FUNC_6(unsigned long VAR_4)
{
 struct et131x_adapter *VAR_5 = (struct et131x_adapter *) VAR_4;
 u32 VAR_6;

 VAR_6 = FUNC_5(&VAR_5->regs->global.pm_csr);

 if ((VAR_6 & VAR_0) == 0)
  FUNC_1(VAR_5);
 else
  FUNC_2(&VAR_5->pdev->dev,
      "No interrupts, in PHY coma, pm_csr = 0x%x\n", VAR_6);

 if (!VAR_5->Bmsr.bits.link_status &&
     VAR_5->RegistryPhyComa &&
     VAR_5->PoMgmt.TransPhyComaModeOnBoot < 11) {
  VAR_5->PoMgmt.TransPhyComaModeOnBoot++;
 }

 if (VAR_5->PoMgmt.TransPhyComaModeOnBoot == 10) {
  if (!VAR_5->Bmsr.bits.link_status
      && VAR_5->RegistryPhyComa) {
   if ((VAR_6 & VAR_0) == 0) {



    FUNC_3(VAR_5);
    FUNC_0(VAR_5);
   }
  }
 }


 FUNC_4(&VAR_5->ErrorTimer, VAR_3 +
       VAR_2 * VAR_1 / 1000);
}
