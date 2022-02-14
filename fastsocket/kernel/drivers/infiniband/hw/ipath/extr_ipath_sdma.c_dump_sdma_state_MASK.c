
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_senddmahead; int kr_senddmatail; int kr_senddmabufmask2; int kr_senddmabufmask1; int kr_senddmabufmask0; int kr_sendctrl; int kr_senddmastatus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 unsigned long FUNC_1 (struct ipath_devdata*,int ) ;

__attribute__((used)) static void FUNC_2(struct ipath_devdata *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_senddmastatus);
 FUNC_0(VAR_0, "kr_senddmastatus: 0x%016lx\n", VAR_2);

 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_sendctrl);
 FUNC_0(VAR_0, "kr_sendctrl: 0x%016lx\n", VAR_2);

 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_senddmabufmask0);
 FUNC_0(VAR_0, "kr_senddmabufmask0: 0x%016lx\n", VAR_2);

 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_senddmabufmask1);
 FUNC_0(VAR_0, "kr_senddmabufmask1: 0x%016lx\n", VAR_2);

 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_senddmabufmask2);
 FUNC_0(VAR_0, "kr_senddmabufmask2: 0x%016lx\n", VAR_2);

 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_senddmatail);
 FUNC_0(VAR_0, "kr_senddmatail: 0x%016lx\n", VAR_2);

 VAR_2 = FUNC_1(VAR_1, VAR_1->ipath_kregs->kr_senddmahead);
 FUNC_0(VAR_0, "kr_senddmahead: 0x%016lx\n", VAR_2);
}
