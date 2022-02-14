
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rflags; } ;
struct TYPE_7__ {int rax; TYPE_1__ isf; scalar_t__ rdx; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_8__ {int eax; int efl; scalar_t__ edx; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef int thread_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(thread_t VAR_2, int VAR_3)
{
 FUNC_2(VAR_2, VAR_0);

 if (FUNC_3(VAR_2)) {
  x86_saved_state64_t *VAR_4;

  VAR_4 = FUNC_1(VAR_2);

  VAR_4->rax = VAR_3;
  VAR_4->rdx = 0;
  VAR_4->isf.rflags &= ~VAR_1;
 } else {
  x86_saved_state32_t *VAR_5;

  VAR_5 = FUNC_0(VAR_2);

  VAR_5->eax = VAR_3;
  VAR_5->edx = 0;
  VAR_5->efl &= ~VAR_1;
 }
}
