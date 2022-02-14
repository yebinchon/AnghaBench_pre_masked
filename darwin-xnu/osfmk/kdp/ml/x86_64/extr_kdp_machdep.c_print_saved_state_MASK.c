
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* rip; } ;
struct TYPE_4__ {struct TYPE_4__* cr2; TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;


 int FUNC_0 (char*,...) ;

void FUNC_1(void *VAR_0)
{
    x86_saved_state64_t *VAR_1;

    VAR_1 = VAR_0;

 FUNC_0("pc = 0x%llx\n", VAR_1->isf.rip);
 FUNC_0("cr2= 0x%llx\n", VAR_1->cr2);
 FUNC_0("rp = TODO FIXME\n");
 FUNC_0("sp = %p\n", VAR_1);

}
