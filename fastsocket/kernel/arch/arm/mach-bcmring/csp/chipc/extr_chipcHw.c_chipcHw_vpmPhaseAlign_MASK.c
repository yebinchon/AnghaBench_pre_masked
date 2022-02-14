
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int VPMClock; int Spare1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

int FUNC_8(void)
{

 if (FUNC_0() == VAR_5) {
  return FUNC_7();
 } else {
  uint32_t VAR_7 = FUNC_2();
  uint32_t VAR_8 = 0;
  int VAR_9 = 0;


  VAR_6->Spare1 &= ~VAR_4;

  FUNC_3();

  FUNC_4();

  while (VAR_9 < VAR_0) {
   VAR_8 = FUNC_1();


   if (VAR_8 > 0xF) {

    VAR_7++;
   } else if (VAR_8 < 0xF) {

    VAR_7--;
   } else {

    VAR_6->Spare1 |= VAR_4;

    return VAR_9;
   }

   FUNC_5(&VAR_6->VPMClock, (VAR_6->VPMClock & (~VAR_1)) | (VAR_7 << VAR_2));

   FUNC_6(1);

   VAR_6->VPMClock ^= VAR_3;

   VAR_9++;
  }
 }


 VAR_6->Spare1 &= ~VAR_4;
 return -1;
}
