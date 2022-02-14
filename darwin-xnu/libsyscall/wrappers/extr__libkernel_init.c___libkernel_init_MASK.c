
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ProgramVars {int dummy; } ;
typedef TYPE_1__* _libkernel_functions_t ;
struct TYPE_4__ {scalar_t__ dlsym; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;

void
FUNC_1(_libkernel_functions_t VAR_2,
  const char *VAR_3[] __attribute__((unused)),
  const char *VAR_4[] __attribute__((unused)),
  const struct ProgramVars *VAR_5 __attribute__((unused)))
{
 VAR_1 = VAR_2;
 if (VAR_2->dlsym) {
  VAR_0 = VAR_2->dlsym;
 }
 FUNC_0();
}
