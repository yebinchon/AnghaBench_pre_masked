
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int version; int * gregs; } ;
struct ucontext {TYPE_1__ uc_mcontext; } ;
struct switch_stack {int a6; int a5; int a4; int a3; int d7; int d6; } ;
struct pt_regs {int sr; int pc; int a2; int a1; int a0; int d5; int d4; int d3; int d2; int d1; int d0; } ;
typedef int greg_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ucontext*,struct pt_regs*) ;

__attribute__((used)) static inline int FUNC_3(struct ucontext *VAR_1, struct pt_regs *VAR_2)
{
 struct switch_stack *VAR_3 = (struct switch_stack *)VAR_2 - 1;
 greg_t *VAR_4 = VAR_1->uc_mcontext.gregs;
 int VAR_5 = 0;

 VAR_5 |= FUNC_0(VAR_0, &VAR_1->uc_mcontext.version);
 VAR_5 |= FUNC_0(VAR_2->d0, &VAR_4[0]);
 VAR_5 |= FUNC_0(VAR_2->d1, &VAR_4[1]);
 VAR_5 |= FUNC_0(VAR_2->d2, &VAR_4[2]);
 VAR_5 |= FUNC_0(VAR_2->d3, &VAR_4[3]);
 VAR_5 |= FUNC_0(VAR_2->d4, &VAR_4[4]);
 VAR_5 |= FUNC_0(VAR_2->d5, &VAR_4[5]);
 VAR_5 |= FUNC_0(VAR_3->d6, &VAR_4[6]);
 VAR_5 |= FUNC_0(VAR_3->d7, &VAR_4[7]);
 VAR_5 |= FUNC_0(VAR_2->a0, &VAR_4[8]);
 VAR_5 |= FUNC_0(VAR_2->a1, &VAR_4[9]);
 VAR_5 |= FUNC_0(VAR_2->a2, &VAR_4[10]);
 VAR_5 |= FUNC_0(VAR_3->a3, &VAR_4[11]);
 VAR_5 |= FUNC_0(VAR_3->a4, &VAR_4[12]);
 VAR_5 |= FUNC_0(VAR_3->a5, &VAR_4[13]);
 VAR_5 |= FUNC_0(VAR_3->a6, &VAR_4[14]);
 VAR_5 |= FUNC_0(FUNC_1(), &VAR_4[15]);
 VAR_5 |= FUNC_0(VAR_2->pc, &VAR_4[16]);
 VAR_5 |= FUNC_0(VAR_2->sr, &VAR_4[17]);



 return VAR_5;
}
