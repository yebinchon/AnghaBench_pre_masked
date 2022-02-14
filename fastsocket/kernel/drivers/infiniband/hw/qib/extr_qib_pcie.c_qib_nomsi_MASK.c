
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int pcidev; scalar_t__ msi_lo; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct qib_devdata *VAR_0)
{
 VAR_0->msi_lo = 0;
 FUNC_0(VAR_0->pcidev);
}
