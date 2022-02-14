
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t tmrHw_ID_t ;
struct TYPE_2__ {int InterruptStatus; int RawInterruptStatus; int InterruptClear; int Control; int BackgroundLoad; int LoadValue; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,...) ;
 int FUNC_2 (char const*,...) ;
 int FUNC_3 (char const*,...) ;
 int FUNC_4 (char const*,...) ;
 int FUNC_5 (char const*,...) ;
 int FUNC_6 (char const*,...) ;

void FUNC_7(tmrHw_ID_t VAR_1,
     int (*VAR_2) (const char *, ...)
) {
 (*VAR_2) ("Displaying register contents \n\n");
 (*VAR_2) ("Timer %d: Load value              0x%X\n", VAR_1,
      VAR_0[VAR_1].LoadValue);
 (*VAR_2) ("Timer %d: Background load value   0x%X\n", VAR_1,
      VAR_0[VAR_1].BackgroundLoad);
 (*VAR_2) ("Timer %d: Control                 0x%X\n", VAR_1,
      VAR_0[VAR_1].Control);
 (*VAR_2) ("Timer %d: Interrupt clear         0x%X\n", VAR_1,
      VAR_0[VAR_1].InterruptClear);
 (*VAR_2) ("Timer %d: Interrupt raw interrupt 0x%X\n", VAR_1,
      VAR_0[VAR_1].RawInterruptStatus);
 (*VAR_2) ("Timer %d: Interrupt status        0x%X\n", VAR_1,
      VAR_0[VAR_1].InterruptStatus);
}
