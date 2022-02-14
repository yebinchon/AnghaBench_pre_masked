
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qib_pportdata {scalar_t__* pkeys; int * pkeyrefs; } ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct qib_pportdata *VAR_0, u16 VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->pkeys); VAR_2++) {
  if (VAR_0->pkeys[VAR_2] != VAR_1)
   continue;
  if (FUNC_1(&VAR_0->pkeyrefs[VAR_2])) {
   VAR_0->pkeys[VAR_2] = 0;
   VAR_3 = 1;
   goto bail;
  }
  break;
 }

 VAR_3 = 0;

bail:
 return VAR_3;
}
