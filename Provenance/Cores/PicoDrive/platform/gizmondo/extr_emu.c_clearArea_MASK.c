
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 TYPE_1__ VAR_0 ;
 int* FUNC_0 (int) ;
 int FUNC_1 () ;
 int* VAR_1 ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_0(1);
 if (VAR_2) FUNC_2(VAR_1, 0, 320*240*2/4);
 else FUNC_2((int *)((char *)VAR_1 + 321*232*2), 0, 321*8*2/4);

 if (VAR_0.EmuOpt&0x8000) {
  FUNC_1();
  VAR_1 = FUNC_0(0);
  if (VAR_2) FUNC_2(VAR_1, 0, 320*240*2/4);
  else FUNC_2((int *)((char *)VAR_1 + 321*232*2), 0, 321*8*2/4);
 }
}
