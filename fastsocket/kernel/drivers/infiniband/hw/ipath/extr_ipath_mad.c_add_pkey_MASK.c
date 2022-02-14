
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ipath_devdata {int* ipath_pkeys; int * ipath_pkeyrefs; } ;
struct TYPE_2__ {int* sps_pkeys; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct ipath_devdata *VAR_3, u16 VAR_4)
{
 int VAR_5;
 u16 VAR_6 = VAR_4 & 0x7FFF;
 int VAR_7 = 0;
 int VAR_8;

 if (VAR_6 == 0x7FFF) {
  VAR_8 = 0;
  goto bail;
 }


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->ipath_pkeys); VAR_5++) {
  if (!VAR_3->ipath_pkeys[VAR_5]) {
   VAR_7++;
   continue;
  }

  if (VAR_3->ipath_pkeys[VAR_5] == VAR_4) {
   if (FUNC_2(&VAR_3->ipath_pkeyrefs[VAR_5]) > 1) {
    VAR_8 = 0;
    goto bail;
   }

   FUNC_1(&VAR_3->ipath_pkeyrefs[VAR_5]);
   VAR_7++;
  }





  if ((VAR_3->ipath_pkeys[VAR_5] & 0x7FFF) == VAR_6) {
   VAR_8 = -VAR_1;
   goto bail;
  }
 }
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto bail;
 }
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->ipath_pkeys); VAR_5++) {
  if (!VAR_3->ipath_pkeys[VAR_5] &&
      FUNC_2(&VAR_3->ipath_pkeyrefs[VAR_5]) == 1) {

   VAR_2.sps_pkeys[VAR_5] = VAR_6;
   VAR_3->ipath_pkeys[VAR_5] = VAR_4;
   VAR_8 = 1;
   goto bail;
  }
 }
 VAR_8 = -VAR_0;

bail:
 return VAR_8;
}
