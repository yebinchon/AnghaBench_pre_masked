
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct exit_args {scalar_t__ rval; } ;
typedef TYPE_1__* proc_t ;
struct TYPE_4__ {int p_xhighbits; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((noreturn))
void
FUNC_4(proc_t VAR_2, struct exit_args *VAR_3, int *VAR_4)
{
 VAR_2->p_xhighbits = ((uint32_t)(VAR_3->rval) & 0xFF000000) >> 24;
 FUNC_1(VAR_2, FUNC_0(VAR_3->rval, 0), VAR_4);

 FUNC_3();

 while (VAR_1)
  FUNC_2(VAR_0);

}
