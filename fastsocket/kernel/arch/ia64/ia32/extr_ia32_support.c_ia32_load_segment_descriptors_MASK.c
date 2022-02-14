
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int r16; int r17; void* ar_ssd; void* ar_csd; void* r29; void* r28; void* r27; void* r24; } ;


 void* FUNC_0 (int) ;
 struct pt_regs* FUNC_1 (struct task_struct*) ;

void
FUNC_2 (struct task_struct *VAR_0)
{
 struct pt_regs *VAR_1 = FUNC_1(VAR_0);


 VAR_1->r24 = FUNC_0(VAR_1->r16 >> 16);
 VAR_1->r27 = FUNC_0(VAR_1->r16 >> 0);
 VAR_1->r28 = FUNC_0(VAR_1->r16 >> 32);
 VAR_1->r29 = FUNC_0(VAR_1->r16 >> 48);
 VAR_1->ar_csd = FUNC_0(VAR_1->r17 >> 0);
 VAR_1->ar_ssd = FUNC_0(VAR_1->r17 >> 16);
}
