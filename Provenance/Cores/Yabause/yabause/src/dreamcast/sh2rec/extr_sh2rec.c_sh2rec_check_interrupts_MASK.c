
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ I; } ;
struct TYPE_8__ {TYPE_1__ part; int all; } ;
struct TYPE_9__ {int* R; scalar_t__ VBR; int PC; TYPE_2__ SR; } ;
struct TYPE_11__ {int NumberOfInterrupts; scalar_t__ isSleeping; TYPE_4__* interrupts; TYPE_3__ regs; } ;
struct TYPE_10__ {scalar_t__ level; int vector; } ;
typedef TYPE_5__ SH2_struct ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(SH2_struct *VAR_0) {
    if(VAR_0->NumberOfInterrupts != 0) {
        if(VAR_0->interrupts[VAR_0->NumberOfInterrupts-1].level > VAR_0->regs.SR.part.I) {
            VAR_0->regs.R[15] -= 4;
            FUNC_1(VAR_0->regs.R[15], VAR_0->regs.SR.all);
            VAR_0->regs.R[15] -= 4;
            FUNC_1(VAR_0->regs.R[15], VAR_0->regs.PC);
            VAR_0->regs.SR.part.I = VAR_0->interrupts[VAR_0->NumberOfInterrupts - 1].level;
            VAR_0->regs.PC = FUNC_0(VAR_0->regs.VBR + (VAR_0->interrupts[VAR_0->NumberOfInterrupts-1].vector << 2));
            VAR_0->NumberOfInterrupts--;
            VAR_0->isSleeping = 0;
        }
    }
}
