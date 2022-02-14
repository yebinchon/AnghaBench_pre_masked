
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_devdata {unsigned long long ipath_control; unsigned long long ipath_errormask; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_intclear; int kr_intmask; int kr_errormask; int kr_errorclear; int kr_hwerrclear; int kr_scratch; int kr_control; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct ipath_devdata*,int) ;
 int FUNC_1 (struct ipath_devdata*) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;
 int FUNC_3 (struct ipath_devdata*,int ,unsigned long long) ;

void FUNC_4(struct ipath_devdata *VAR_1)
{

 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_errormask, 0ULL);


 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_intmask, 0ULL);

 FUNC_0(VAR_1, 1);


 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_control,
    VAR_1->ipath_control);
 FUNC_2(VAR_1, VAR_1->ipath_kregs->kr_scratch);


 FUNC_1(VAR_1);







 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_hwerrclear, 0ULL);
 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_errorclear,
  VAR_0);
 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_errormask,
  VAR_1->ipath_errormask);
 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_intmask, -1LL);
 FUNC_3(VAR_1, VAR_1->ipath_kregs->kr_intclear, 0ULL);
}
