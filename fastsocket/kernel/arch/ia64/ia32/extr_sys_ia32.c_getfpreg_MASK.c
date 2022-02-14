
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fcr; int fsr; int fir; int fdr; } ;
struct task_struct {TYPE_1__ thread; } ;



__attribute__((used)) static void FUNC_0(struct task_struct *VAR_0, int VAR_1, int *VAR_2)
{
 switch (VAR_1 / sizeof(int)) {
 case 0:
  *VAR_2 = VAR_0->thread.fcr & 0xffff;
  break;
 case 1:
  *VAR_2 = VAR_0->thread.fsr & 0xffff;
  break;
 case 2:
  *VAR_2 = (VAR_0->thread.fsr>>16) & 0xffff;
  break;
 case 3:
  *VAR_2 = VAR_0->thread.fir;
  break;
 case 4:
  *VAR_2 = (VAR_0->thread.fir>>32) & 0xffff;
  break;
 case 5:
  *VAR_2 = VAR_0->thread.fdr;
  break;
 case 6:
  *VAR_2 = (VAR_0->thread.fdr >> 32) & 0xffff;
  break;
 }
}
