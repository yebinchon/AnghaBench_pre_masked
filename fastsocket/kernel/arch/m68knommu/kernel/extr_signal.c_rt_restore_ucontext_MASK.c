
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int version; int * gregs; } ;
struct ucontext {int uc_stack; TYPE_2__ uc_mcontext; } ;
struct switch_stack {int d6; int d7; int a3; int a4; int a5; int a6; } ;
struct pt_regs {int d0; int d1; int d2; int d3; int d4; int d5; int a0; int a1; int a2; int pc; int sr; int orig_d0; int format; int vector; } ;
typedef int greg_t ;
struct TYPE_4__ {int fn; } ;
struct TYPE_6__ {TYPE_1__ restart_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 TYPE_3__* FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static inline int
FUNC_4(struct pt_regs *VAR_3, struct switch_stack *VAR_4,
      struct ucontext *VAR_5, int *VAR_6)
{
 int VAR_7;
 greg_t *VAR_8 = VAR_5->uc_mcontext.gregs;
 unsigned long VAR_9;
 int VAR_10;


 FUNC_1()->restart_block.fn = VAR_2;

 VAR_10 = FUNC_0(VAR_7, &VAR_5->uc_mcontext.version);
 if (VAR_7 != VAR_1)
  goto badframe;

 VAR_10 |= FUNC_0(VAR_3->d0, &VAR_8[0]);
 VAR_10 |= FUNC_0(VAR_3->d1, &VAR_8[1]);
 VAR_10 |= FUNC_0(VAR_3->d2, &VAR_8[2]);
 VAR_10 |= FUNC_0(VAR_3->d3, &VAR_8[3]);
 VAR_10 |= FUNC_0(VAR_3->d4, &VAR_8[4]);
 VAR_10 |= FUNC_0(VAR_3->d5, &VAR_8[5]);
 VAR_10 |= FUNC_0(VAR_4->d6, &VAR_8[6]);
 VAR_10 |= FUNC_0(VAR_4->d7, &VAR_8[7]);
 VAR_10 |= FUNC_0(VAR_3->a0, &VAR_8[8]);
 VAR_10 |= FUNC_0(VAR_3->a1, &VAR_8[9]);
 VAR_10 |= FUNC_0(VAR_3->a2, &VAR_8[10]);
 VAR_10 |= FUNC_0(VAR_4->a3, &VAR_8[11]);
 VAR_10 |= FUNC_0(VAR_4->a4, &VAR_8[12]);
 VAR_10 |= FUNC_0(VAR_4->a5, &VAR_8[13]);
 VAR_10 |= FUNC_0(VAR_4->a6, &VAR_8[14]);
 VAR_10 |= FUNC_0(VAR_9, &VAR_8[15]);
 FUNC_3(VAR_9);
 VAR_10 |= FUNC_0(VAR_3->pc, &VAR_8[16]);
 VAR_10 |= FUNC_0(VAR_7, &VAR_8[17]);
 VAR_3->sr = (VAR_3->sr & 0xff00) | (VAR_7 & 0xff);
 VAR_3->orig_d0 = -1;
 VAR_3->format = VAR_7 >> 12;
 VAR_3->vector = VAR_7 & 0xfff;

 if (FUNC_2(&VAR_5->uc_stack, ((void*)0), VAR_9) == -VAR_0)
  goto badframe;

 *VAR_6 = VAR_3->d0;
 return VAR_10;

badframe:
 return 1;
}
