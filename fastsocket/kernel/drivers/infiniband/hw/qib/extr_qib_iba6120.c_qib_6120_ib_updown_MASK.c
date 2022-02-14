
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {TYPE_2__* dd; int lflags_lock; int lflags; } ;
struct TYPE_4__ {TYPE_1__* cspec; } ;
struct TYPE_3__ {int ibdeltainprog; void* ibsymsnap; void* iblnkerrsnap; scalar_t__ lli_counter; int iblnkerrdelta; int ibsymdelta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qib_pportdata*,int) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct qib_pportdata*) ;
 void* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct qib_pportdata *VAR_3, int VAR_4, u64 VAR_5)
{
 unsigned long VAR_6;

 FUNC_4(&VAR_3->lflags_lock, VAR_6);
 VAR_3->lflags &= ~VAR_0;
 FUNC_5(&VAR_3->lflags_lock, VAR_6);

 if (VAR_4) {
  if (VAR_3->dd->cspec->ibdeltainprog) {
   VAR_3->dd->cspec->ibdeltainprog = 0;
   VAR_3->dd->cspec->ibsymdelta +=
    FUNC_3(VAR_3->dd, VAR_2) -
     VAR_3->dd->cspec->ibsymsnap;
   VAR_3->dd->cspec->iblnkerrdelta +=
    FUNC_3(VAR_3->dd, VAR_1) -
     VAR_3->dd->cspec->iblnkerrsnap;
  }
  FUNC_2(VAR_3);
 } else {
  VAR_3->dd->cspec->lli_counter = 0;
  if (!VAR_3->dd->cspec->ibdeltainprog) {
   VAR_3->dd->cspec->ibdeltainprog = 1;
   VAR_3->dd->cspec->ibsymsnap =
    FUNC_3(VAR_3->dd, VAR_2);
   VAR_3->dd->cspec->iblnkerrsnap =
    FUNC_3(VAR_3->dd, VAR_1);
  }
  FUNC_1(VAR_3);
 }

 FUNC_0(VAR_3, VAR_4);

 return 0;
}
