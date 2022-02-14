
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct qib_pportdata {unsigned int lid; unsigned int lmc; int port; struct qib_devdata* dd; } ;
struct qib_devdata {int unit; int pcidev; int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,unsigned int) ;
 int FUNC_1 (struct qib_pportdata*,int ,unsigned int) ;

int FUNC_2(struct qib_pportdata *VAR_1, u32 VAR_2, u8 VAR_3)
{
 struct qib_devdata *VAR_4 = VAR_1->dd;
 VAR_1->lid = VAR_2;
 VAR_1->lmc = VAR_3;

 VAR_4->f_set_ib_cfg(VAR_1, VAR_0,
    VAR_2 | (~((1U << VAR_3) - 1)) << 16);

 FUNC_0(VAR_4->pcidev, "IB%u:%u got a lid: 0x%x\n",
      VAR_4->unit, VAR_1->port, VAR_2);

 return 0;
}
