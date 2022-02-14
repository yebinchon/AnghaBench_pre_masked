
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int old_k1; int old_iob; void* fdr; void* fir; void* fcr; void* fsr; void* eflag; } ;
struct task_struct {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2 (struct task_struct *VAR_7)
{
 VAR_7->thread.eflag = FUNC_0(VAR_2);
 VAR_7->thread.fsr = FUNC_0(VAR_6);
 VAR_7->thread.fcr = FUNC_0(VAR_3);
 VAR_7->thread.fir = FUNC_0(VAR_5);
 VAR_7->thread.fdr = FUNC_0(VAR_4);
 FUNC_1(VAR_0, VAR_7->thread.old_iob);
 FUNC_1(VAR_1, VAR_7->thread.old_k1);
}
