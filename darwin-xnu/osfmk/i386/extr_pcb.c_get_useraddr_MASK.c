
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rip; } ;
struct TYPE_7__ {TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_8__ {int eip; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef int user_addr_t ;
typedef int thread_t ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

user_addr_t
FUNC_4(void)
{
        thread_t VAR_0 = FUNC_2();

        if (FUNC_3(VAR_0)) {
         x86_saved_state64_t *VAR_1;

  VAR_1 = FUNC_1(VAR_0);

          return(VAR_1->isf.rip);
 } else {
         x86_saved_state32_t *VAR_2;

  VAR_2 = FUNC_0(VAR_0);

          return(VAR_2->eip);
 }
}
