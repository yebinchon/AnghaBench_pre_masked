
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int SPIClock; int UARTClock; } ;
typedef int (* RUNFUNC ) () ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_11 ;

void FUNC_2(uint32_t VAR_12)
{
 int VAR_13 = 0;
 RUNFUNC VAR_14 = (RUNFUNC) (unsigned long)VAR_4;


 FUNC_1(VAR_1, 0xffffffff);
 FUNC_1(VAR_2, 0xffffffff);
 FUNC_1(VAR_3, 0xffffffff);

 {
  VAR_7;
  if (VAR_12 & VAR_9) {
   FUNC_0(VAR_9);
  }

  VAR_11->UARTClock |= VAR_8;
  VAR_11->SPIClock |= VAR_8;


  do {
   ((uint32_t *) VAR_5)[VAR_13] =
       ((uint32_t *) &VAR_10)[VAR_13];
   VAR_13++;
  } while (((uint32_t *) VAR_5)[VAR_13 - 1] != 0xe1a0f00f);

  VAR_0;


  VAR_14();


  VAR_6;
 }
}
