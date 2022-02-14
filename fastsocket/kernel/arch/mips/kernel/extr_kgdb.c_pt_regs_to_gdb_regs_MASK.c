
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pt_regs {int cp0_status; int cp0_epc; int cp0_cause; int cp0_badvaddr; int hi; int lo; int * regs; } ;
struct TYPE_5__ {int * fpr; } ;
struct TYPE_6__ {TYPE_1__ fpu; } ;
struct TYPE_7__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(unsigned long *VAR_2, struct pt_regs *VAR_3)
{
 int VAR_4;




 u64 *VAR_5 = (u64 *)VAR_2;


 for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
  *(VAR_5++) = VAR_3->regs[VAR_4];

 *(VAR_5++) = VAR_3->cp0_status;
 *(VAR_5++) = VAR_3->lo;
 *(VAR_5++) = VAR_3->hi;
 *(VAR_5++) = VAR_3->cp0_badvaddr;
 *(VAR_5++) = VAR_3->cp0_cause;
 *(VAR_5++) = VAR_3->cp0_epc;


 if (!(VAR_1 && (VAR_3->cp0_status & VAR_0)))
  return;

 FUNC_0(VAR_1);
 for (VAR_4 = 0; VAR_4 < 32; VAR_4++)
  *(VAR_5++) = VAR_1->thread.fpu.fpr[VAR_4];
}
