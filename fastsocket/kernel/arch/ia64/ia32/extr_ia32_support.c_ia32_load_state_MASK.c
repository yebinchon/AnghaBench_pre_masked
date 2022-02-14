
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long eflag; unsigned long fsr; unsigned long fcr; unsigned long fir; unsigned long fdr; } ;
struct task_struct {TYPE_2__ thread; } ;
struct pt_regs {int r17; void* r30; } ;
typedef int __u32 ;
struct TYPE_4__ {void* old_k1; void* old_iob; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 () ;
 struct pt_regs* FUNC_6 (struct task_struct*) ;

void
FUNC_7 (struct task_struct *VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct pt_regs *VAR_18 = FUNC_6(VAR_11);

 VAR_12 = VAR_11->thread.eflag;
 VAR_13 = VAR_11->thread.fsr;
 VAR_14 = VAR_11->thread.fcr;
 VAR_15 = VAR_11->thread.fir;
 VAR_16 = VAR_11->thread.fdr;
 VAR_17 = FUNC_4(VAR_9);

 FUNC_2(VAR_3, VAR_12);
 FUNC_2(VAR_7, VAR_13);
 FUNC_2(VAR_4, VAR_14);
 FUNC_2(VAR_6, VAR_15);
 FUNC_2(VAR_5, VAR_16);
 VAR_10->thread.old_iob = FUNC_0(VAR_1);
 VAR_10->thread.old_k1 = FUNC_0(VAR_2);
 FUNC_1(VAR_1, VAR_0);
 FUNC_1(VAR_2, VAR_17);

 VAR_18->r17 = (VAR_9 << 48) | (VAR_8 << 32) | (__u32) VAR_18->r17;
 VAR_18->r30 = FUNC_4(VAR_8);
 FUNC_3(&VAR_11->thread, FUNC_5());
}
