
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gs; int fs; int es; int ds; int ss; int cs; int eip; int eflags; int esp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
typedef TYPE_1__ x86_thread_state32_t ;
struct TYPE_6__ {int gs; int fs; int es; int ds; int ss; int cs; int eip; int efl; int uesp; int ebp; int esi; int edi; int edx; int ecx; int ebx; int eax; } ;
typedef TYPE_2__ x86_saved_state32_t ;
typedef int thread_t ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(thread_t VAR_1, x86_thread_state32_t *VAR_2)
{
        x86_saved_state32_t *VAR_3;

 FUNC_1(VAR_1, VAR_0);

 VAR_3 = FUNC_0(VAR_1);

 VAR_2->eax = VAR_3->eax;
 VAR_2->ebx = VAR_3->ebx;
 VAR_2->ecx = VAR_3->ecx;
 VAR_2->edx = VAR_3->edx;
 VAR_2->edi = VAR_3->edi;
 VAR_2->esi = VAR_3->esi;
 VAR_2->ebp = VAR_3->ebp;
 VAR_2->esp = VAR_3->uesp;
 VAR_2->eflags = VAR_3->efl;
 VAR_2->eip = VAR_3->eip;
 VAR_2->cs = VAR_3->cs;
 VAR_2->ss = VAR_3->ss;
 VAR_2->ds = VAR_3->ds;
 VAR_2->es = VAR_3->es;
 VAR_2->fs = VAR_3->fs;
 VAR_2->gs = VAR_3->gs;
}
