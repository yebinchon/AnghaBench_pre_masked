
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ core_unw_table; scalar_t__ init_unw_table; } ;
struct module {TYPE_1__ arch; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1 (struct module *VAR_0)
{
 if (VAR_0->arch.init_unw_table)
  FUNC_0(VAR_0->arch.init_unw_table);
 if (VAR_0->arch.core_unw_table)
  FUNC_0(VAR_0->arch.core_unw_table);
}
