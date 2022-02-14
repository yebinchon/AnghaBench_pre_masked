
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_devdata {int pcidev; TYPE_1__* cspec; } ;
struct TYPE_2__ {int num_msix_entries; } ;


 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qib_devdata*,int ) ;

__attribute__((used)) static int FUNC_4(struct qib_devdata *VAR_0)
{
 if (!VAR_0->cspec->num_msix_entries)
  return 0;

 FUNC_1(VAR_0->pcidev,
  "MSIx interrupt not detected, trying INTx interrupts\n");
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->pcidev);
 FUNC_3(VAR_0, 0);
 return 1;
}
