
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct TYPE_3__ {unsigned long ksp; unsigned long ksp_vsid; scalar_t__ ksp_limit; struct pt_regs* regs; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int msr; unsigned long* gpr; unsigned long nip; } ;
struct TYPE_4__ {unsigned long sllp; } ;


 int FUNC_0 (struct pt_regs*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct task_struct*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long,int ) ;
 size_t VAR_12 ;
 TYPE_2__* VAR_13 ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int ) ;

int FUNC_7(unsigned long VAR_14, unsigned long VAR_15,
  unsigned long VAR_16, struct task_struct *VAR_17,
  struct pt_regs *VAR_18)
{
 struct pt_regs *VAR_19, *VAR_20;
 extern void FUNC_8(void);
 unsigned long VAR_21 = (unsigned long)FUNC_5(VAR_17) + VAR_10;

 FUNC_0(VAR_18);

 VAR_21 -= sizeof(struct pt_regs);
 VAR_19 = (struct pt_regs *) VAR_21;
 *VAR_19 = *VAR_18;
 if ((VAR_19->msr & VAR_5) == 0) {

  VAR_19->gpr[1] = VAR_21 + sizeof(struct pt_regs);



  FUNC_2(VAR_17, VAR_11);

  VAR_17->thread.regs = ((void*)0);
 } else {
  VAR_19->gpr[1] = VAR_15;
  VAR_17->thread.regs = VAR_19;
  if (VAR_14 & VAR_0) {





    VAR_19->gpr[2] = VAR_19->gpr[6];
  }
 }
 VAR_19->gpr[3] = 0;
 VAR_21 -= VAR_9;
 VAR_21 -= sizeof(struct pt_regs);
 VAR_20 = (struct pt_regs *) VAR_21;
 VAR_21 -= VAR_9;
 VAR_17->thread.ksp = VAR_21;
 VAR_17->thread.ksp_limit = (unsigned long)FUNC_5(VAR_17) +
    FUNC_1(sizeof(struct thread_info), 16);
 VAR_20->nip = (unsigned long)FUNC_8;


 return 0;
}
