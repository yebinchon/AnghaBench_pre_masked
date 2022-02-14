
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lg_cpu {TYPE_1__* regs; } ;
typedef int insn ;
struct TYPE_2__ {int cs; int eip; } ;


 int VAR_0 ;
 int FUNC_0 (struct lg_cpu*,int*,int ,int) ;
 int FUNC_1 (struct lg_cpu*,int ) ;

__attribute__((used)) static bool FUNC_2(struct lg_cpu *VAR_1)
{
 u8 VAR_2[3];






 if ((VAR_1->regs->cs & 3) != VAR_0)
  return 0;


 FUNC_0(VAR_1, VAR_2, FUNC_1(VAR_1, VAR_1->regs->eip), sizeof(VAR_2));
 return VAR_2[0] == 0x0f && VAR_2[1] == 0x01 && VAR_2[2] == 0xc1;
}
