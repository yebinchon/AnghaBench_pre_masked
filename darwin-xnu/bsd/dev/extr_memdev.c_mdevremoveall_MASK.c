
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mdFlags; scalar_t__ mdcdevb; scalar_t__ mdbdevb; scalar_t__ mdCDev; scalar_t__ mdBDev; scalar_t__ mdSecsize; scalar_t__ mdSize; scalar_t__ mdBase; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_1(void) {

 int VAR_3;

 for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if(!(VAR_2[VAR_3].mdFlags & VAR_1)) continue;

  FUNC_0(VAR_2[VAR_3].mdbdevb);
  FUNC_0(VAR_2[VAR_3].mdcdevb);

  VAR_2[VAR_3].mdBase = 0;
  VAR_2[VAR_3].mdSize = 0;
  VAR_2[VAR_3].mdSecsize = 0;
  VAR_2[VAR_3].mdFlags = 0;
  VAR_2[VAR_3].mdBDev = 0;
  VAR_2[VAR_3].mdCDev = 0;
  VAR_2[VAR_3].mdbdevb = 0;
  VAR_2[VAR_3].mdcdevb = 0;
 }
}
