
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ipath_devdata {unsigned long ipath_errormask; int ipath_flags; unsigned long ipath_hwerrmask; TYPE_2__* pcidev; TYPE_1__* ipath_kregs; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int kr_intclear; int kr_errorclear; int kr_hwerrclear; int kr_errormask; int kr_control; int kr_hwerrstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,unsigned long,unsigned long,int,unsigned long) ;
 int FUNC_1 (char*,int,unsigned long,unsigned long) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;
 unsigned long FUNC_3 (struct ipath_devdata*,int ) ;
 int FUNC_4 (struct ipath_devdata*,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_5(struct ipath_devdata *VAR_2)
{
 static u32 VAR_3;
 u32 VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;

 if (!VAR_2->ipath_errormask || !(VAR_2->ipath_flags & VAR_1))
  return;

 VAR_5 = FUNC_3(VAR_2, VAR_2->ipath_kregs->kr_errormask);

 if (VAR_5 == VAR_2->ipath_errormask)
  return;
 VAR_3++;

 VAR_6 = FUNC_3(VAR_2, VAR_2->ipath_kregs->kr_hwerrstatus);
 VAR_4 = FUNC_2(VAR_2, VAR_2->ipath_kregs->kr_control);

 FUNC_4(VAR_2, VAR_2->ipath_kregs->kr_errormask,
  VAR_2->ipath_errormask);

 if ((VAR_6 & VAR_2->ipath_hwerrmask) ||
  (VAR_4 & VAR_0)) {

  FUNC_4(VAR_2, VAR_2->ipath_kregs->kr_hwerrclear, 0ULL);
  FUNC_4(VAR_2, VAR_2->ipath_kregs->kr_errorclear, 0ULL);
  FUNC_4(VAR_2, VAR_2->ipath_kregs->kr_intclear, 0ULL);
  FUNC_0(&VAR_2->pcidev->dev,
   "errormask fixed(%u) %lx -> %lx, ctrl %x hwerr %lx\n",
   VAR_3, VAR_5, (unsigned long)VAR_2->ipath_errormask,
   VAR_4, VAR_6);
 } else
  FUNC_1("errormask fixed(%u) %lx -> %lx, no freeze\n",
   VAR_3, VAR_5,
   (unsigned long)VAR_2->ipath_errormask);
}
