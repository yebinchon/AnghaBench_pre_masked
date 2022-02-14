
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {TYPE_1__* cspec; } ;
struct qib_ctxtdata {size_t ctxt; struct qib_devdata* dd; } ;
struct TYPE_2__ {int* rcvavail_timeout; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct qib_devdata*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct qib_ctxtdata *VAR_3, int VAR_4)
{
 struct qib_devdata *VAR_5 = VAR_3->dd;
 u32 VAR_6 = VAR_5->cspec->rcvavail_timeout[VAR_3->ctxt];





 if (VAR_4 < VAR_1 && VAR_6 > 2)
  VAR_6 >>= 1;
 else if (VAR_4 >= VAR_1 && VAR_6 < VAR_2)
  VAR_6 = FUNC_0(VAR_6 << 1, VAR_2);
 else
  return;

 VAR_5->cspec->rcvavail_timeout[VAR_3->ctxt] = VAR_6;
 FUNC_1(VAR_5, VAR_0 + VAR_3->ctxt, VAR_6);
}
