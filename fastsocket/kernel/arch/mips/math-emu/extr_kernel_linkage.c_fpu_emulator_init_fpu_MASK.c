
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fpr; scalar_t__ fcr31; } ;
struct TYPE_5__ {TYPE_1__ fpu; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char*) ;

void FUNC_1(void)
{
 static int VAR_2 = 1;
 int VAR_3;

 if (VAR_2) {
  VAR_2 = 0;
  FUNC_0("Algorithmics/MIPS FPU Emulator v1.5\n");
 }

 VAR_1->thread.fpu.fcr31 = 0;
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
  VAR_1->thread.fpu.fpr[VAR_3] = VAR_0;
 }
}
