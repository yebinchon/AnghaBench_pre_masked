
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_stack {int a5; } ;
struct sigcontext {int sc_sr; int sc_formatvec; int sc_d0; int sc_usp; int sc_pc; int sc_a5; int sc_a1; int sc_a0; int sc_d1; } ;
struct pt_regs {int sr; int orig_d0; int format; int vector; int pc; int a1; int a0; int d1; } ;
typedef int context ;
struct TYPE_3__ {int fn; } ;
struct TYPE_4__ {TYPE_1__ restart_block; } ;


 scalar_t__ FUNC_0 (struct sigcontext*,struct sigcontext*,int) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct sigcontext*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline int
FUNC_4(struct pt_regs *VAR_1, struct sigcontext *VAR_2, void *VAR_3,
     int *VAR_4)
{
 int VAR_5;
 struct sigcontext VAR_6;
 int VAR_7 = 0;


 FUNC_1()->restart_block.fn = VAR_0;


 if (FUNC_0(&VAR_6, VAR_2, sizeof(VAR_6)))
  goto badframe;


 VAR_1->d1 = VAR_6.sc_d1;
 VAR_1->a0 = VAR_6.sc_a0;
 VAR_1->a1 = VAR_6.sc_a1;
 ((struct switch_stack *)VAR_1 - 1)->a5 = VAR_6.sc_a5;
 VAR_1->sr = (VAR_1->sr & 0xff00) | (VAR_6.sc_sr & 0xff);
 VAR_1->pc = VAR_6.sc_pc;
 VAR_1->orig_d0 = -1;
 FUNC_3(VAR_6.sc_usp);
 VAR_5 = VAR_6.sc_formatvec;
 VAR_1->format = VAR_5 >> 12;
 VAR_1->vector = VAR_5 & 0xfff;





 *VAR_4 = VAR_6.sc_d0;
 return VAR_7;

badframe:
 return 1;
}
