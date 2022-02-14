
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg_cpu {TYPE_1__* regs; } ;
typedef int insn ;
struct TYPE_2__ {int eip; } ;


 int FUNC_0 (struct lg_cpu*,int ,int*,int) ;
 int FUNC_1 (struct lg_cpu*,int ) ;
 int FUNC_2 (struct lg_cpu*) ;

__attribute__((used)) static void FUNC_3(struct lg_cpu *VAR_0)
{





 u8 VAR_1[3] = {0xcd, 0x1f, 0x90};

 FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_0->regs->eip), VAR_1, sizeof(VAR_1));






 FUNC_2(VAR_0);
}
