
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ stsy_underlying; } ;
typedef TYPE_1__ machtrace_sysent_t ;
struct TYPE_9__ {scalar_t__ mach_trap_function; } ;
typedef TYPE_2__ mach_trap_t ;
typedef scalar_t__ mach_call_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(const mach_trap_t *VAR_3, machtrace_sysent_t **VAR_4)
{
 machtrace_sysent_t *VAR_5 = *VAR_4;
 int VAR_6;

 if (VAR_5 == ((void*)0)) {
  *VAR_4 = VAR_5 = FUNC_2(sizeof (machtrace_sysent_t) *
    VAR_1, VAR_0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  const mach_trap_t *VAR_7 = &VAR_3[VAR_6];
  machtrace_sysent_t *VAR_8 = &VAR_5[VAR_6];

  if (FUNC_0(VAR_7) && !FUNC_1(VAR_7))
   continue;

  if (VAR_7->mach_trap_function == (mach_call_t)(VAR_2))
   continue;

  VAR_8->stsy_underlying = VAR_7->mach_trap_function;
 }
}
