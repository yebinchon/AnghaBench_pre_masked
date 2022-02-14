
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cpCRreg; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 void* VAR_2 ;

void FUNC_7(void *VAR_3)
{
 u32 VAR_4 = 0;
 FUNC_1(VAR_4);
 FUNC_5();
 VAR_1[30] = FUNC_3(FUNC_0(VAR_3),0,16);
 VAR_1[31] = FUNC_4(FUNC_0(VAR_3),16,16);
 VAR_0->cpCRreg = (VAR_0->cpCRreg&~0x22)|0x22;
 VAR_1[1] = VAR_0->cpCRreg;
 VAR_2 = VAR_3;
 FUNC_6();
  FUNC_2(VAR_4);
}
