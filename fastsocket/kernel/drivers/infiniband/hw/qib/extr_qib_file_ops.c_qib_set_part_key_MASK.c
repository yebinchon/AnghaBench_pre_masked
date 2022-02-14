
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qib_pportdata {int* pkeys; TYPE_1__* dd; int * pkeyrefs; } ;
struct qib_ctxtdata {int* pkeys; struct qib_pportdata* ppd; } ;
typedef int atomic_t ;
struct TYPE_2__ {int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int ) ;} ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qib_pportdata*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct qib_ctxtdata *VAR_5, u16 VAR_6)
{
 struct qib_pportdata *VAR_7 = VAR_5->ppd;
 int VAR_8, VAR_9 = 0, VAR_10 = -1;
 u16 VAR_11 = VAR_6 & 0x7FFF;
 int VAR_12;

 if (VAR_11 == (VAR_3 & 0x7FFF)) {

  VAR_12 = 0;
  goto bail;
 }

 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto bail;
 }







 VAR_6 |= 0x8000;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->pkeys); VAR_8++) {
  if (!VAR_5->pkeys[VAR_8] && VAR_10 == -1)
   VAR_10 = VAR_8;
  if (VAR_5->pkeys[VAR_8] == VAR_6) {
   VAR_12 = -VAR_1;
   goto bail;
  }
 }
 if (VAR_10 == -1) {
  VAR_12 = -VAR_0;
  goto bail;
 }
 for (VAR_9 = VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->pkeys); VAR_8++) {
  if (!VAR_7->pkeys[VAR_8]) {
   VAR_9++;
   continue;
  }
  if (VAR_7->pkeys[VAR_8] == VAR_6) {
   atomic_t *VAR_13 = &VAR_7->pkeyrefs[VAR_8];

   if (FUNC_2(VAR_13) > 1) {
    VAR_5->pkeys[VAR_10] = VAR_6;
    VAR_12 = 0;
    goto bail;
   } else {



    FUNC_1(VAR_13);
    VAR_9++;
   }
  }
  if ((VAR_7->pkeys[VAR_8] & 0x7FFF) == VAR_11) {





   VAR_12 = -VAR_1;
   goto bail;
  }
 }
 if (!VAR_9) {
  VAR_12 = -VAR_0;
  goto bail;
 }
 for (VAR_9 = VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->pkeys); VAR_8++) {
  if (!VAR_7->pkeys[VAR_8] &&
      FUNC_2(&VAR_7->pkeyrefs[VAR_8]) == 1) {
   VAR_5->pkeys[VAR_10] = VAR_6;
   VAR_7->pkeys[VAR_8] = VAR_6;
   (void) VAR_7->dd->f_set_ib_cfg(VAR_7, VAR_4, 0);
   VAR_12 = 0;
   goto bail;
  }
 }
 VAR_12 = -VAR_0;

bail:
 return VAR_12;
}
