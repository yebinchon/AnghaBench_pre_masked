
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct fpustate {int dummy; } ;
struct TYPE_2__ {int* xfsr; } ;


 int VAR_0 ;
 struct fpustate* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*,struct fpustate*) ;
 scalar_t__ FUNC_3 (int ,char*,struct pt_regs*,int ,int,int ) ;

void FUNC_4(struct pt_regs *VAR_4)
{
 struct fpustate *VAR_5 = VAR_1;
 int VAR_6 = 0;

 if (FUNC_3(VAR_0, "fpu exception other", VAR_4,
         0, 0x25, VAR_3) == VAR_2)
  return;

 switch ((FUNC_0()->xfsr[0] & 0x1c000)) {
 case (2 << 14):
 case (3 << 14):
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  break;
 }
 if (VAR_6)
  return;
 FUNC_1(VAR_4);
}
