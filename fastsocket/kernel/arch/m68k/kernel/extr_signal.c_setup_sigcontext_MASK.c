
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigcontext {unsigned long sc_mask; int sc_formatvec; int sc_pc; int sc_sr; int sc_a1; int sc_a0; int sc_d1; int sc_d0; int sc_usp; } ;
struct pt_regs {int format; int vector; int pc; int sr; int a1; int a0; int d1; int d0; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sigcontext*,struct pt_regs*) ;

__attribute__((used)) static void FUNC_2(struct sigcontext *VAR_0, struct pt_regs *VAR_1,
        unsigned long VAR_2)
{
 VAR_0->sc_mask = VAR_2;
 VAR_0->sc_usp = FUNC_0();
 VAR_0->sc_d0 = VAR_1->d0;
 VAR_0->sc_d1 = VAR_1->d1;
 VAR_0->sc_a0 = VAR_1->a0;
 VAR_0->sc_a1 = VAR_1->a1;
 VAR_0->sc_sr = VAR_1->sr;
 VAR_0->sc_pc = VAR_1->pc;
 VAR_0->sc_formatvec = VAR_1->format << 12 | VAR_1->vector;
 FUNC_1(VAR_0, VAR_1);
}
