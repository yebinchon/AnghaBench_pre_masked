
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * init_unw_table; } ;
struct module {void* module_init; TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;

void
FUNC_2 (struct module *VAR_0, void *VAR_1)
{
 if (VAR_0 && VAR_0->arch.init_unw_table &&
     VAR_1 == VAR_0->module_init) {
  FUNC_0(VAR_0->arch.init_unw_table);
  VAR_0->arch.init_unw_table = ((void*)0);
 }
 FUNC_1(VAR_1);
}
