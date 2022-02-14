
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fcr; int fsr; int fir; int fdr; } ;
struct task_struct {TYPE_1__ thread; } ;



__attribute__((used)) static void FUNC_0(struct task_struct *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_1 / sizeof(int)) {
 case 0:
  VAR_0->thread.fcr = (VAR_0->thread.fcr & (~0x1f3f))
   | (VAR_2 & 0x1f3f);
  break;
 case 1:
  VAR_0->thread.fsr = (VAR_0->thread.fsr & (~0xffff)) | VAR_2;
  break;
 case 2:
  VAR_0->thread.fsr = (VAR_0->thread.fsr & (~0xffff0000))
   | (VAR_2 << 16);
  break;
 case 3:
  VAR_0->thread.fir = (VAR_0->thread.fir & (~0xffffffff)) | VAR_2;
  break;
 case 5:
  VAR_0->thread.fdr = (VAR_0->thread.fdr & (~0xffffffff)) | VAR_2;
  break;
 }
}
