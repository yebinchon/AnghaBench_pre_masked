
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct reg_window {scalar_t__* ins; } ;
struct pt_regs {int tstate; scalar_t__* u_regs; int tnpc; int tpc; } ;
struct TYPE_2__ {int tstate; struct thread_info* thread; scalar_t__ rpc; scalar_t__ i7; scalar_t__ o7; int tnpc; int tpc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (struct thread_info*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct thread_info *VAR_5, struct pt_regs *VAR_6,
         int VAR_7)
{
 FUNC_0();

 VAR_4[VAR_7].tstate = VAR_6->tstate;
 VAR_4[VAR_7].tpc = VAR_6->tpc;
 VAR_4[VAR_7].tnpc = VAR_6->tnpc;
 VAR_4[VAR_7].o7 = VAR_6->u_regs[VAR_3];

 if (VAR_6->tstate & VAR_1) {
  struct reg_window *VAR_8;

  VAR_8 = (struct reg_window *)
   (VAR_6->u_regs[VAR_2] + VAR_0);
  if (FUNC_1(VAR_5, (unsigned long) VAR_8)) {
   VAR_4[VAR_7].i7 = VAR_8->ins[7];
   VAR_8 = (struct reg_window *)
    (VAR_8->ins[6] + VAR_0);
   if (FUNC_1(VAR_5, (unsigned long) VAR_8))
    VAR_4[VAR_7].rpc = VAR_8->ins[7];
  }
 } else {
  VAR_4[VAR_7].i7 = 0;
  VAR_4[VAR_7].rpc = 0;
 }
 VAR_4[VAR_7].thread = VAR_5;
}
