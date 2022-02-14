
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int * gprs; } ;
struct TYPE_4__ {int fpc; } ;
struct TYPE_5__ {TYPE_1__ fp_regs; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_0 (struct pt_regs *VAR_1, int VAR_2, int VAR_3) {
        VAR_1->gprs[VAR_2] = VAR_0->thread.fp_regs.fpc;
        return 0;
}
