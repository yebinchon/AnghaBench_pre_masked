
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct modctl {char* mod_modname; TYPE_2__* mod_user_symbols; } ;
typedef int machine_inst_t ;
struct TYPE_3__ {char* dtsym_name; scalar_t__ dtsym_size; scalar_t__ dtsym_addr; } ;
typedef TYPE_1__ dtrace_symbol_t ;
struct TYPE_4__ {unsigned int dtmodsyms_count; TYPE_1__* dtmodsyms_symbols; } ;
typedef TYPE_2__ dtrace_module_symbols_t ;


 scalar_t__ FUNC_0 (struct modctl*) ;
 int FUNC_1 (void*,struct modctl*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (struct modctl*,char*,char*,int *,int *) ;

__attribute__((used)) static void
FUNC_4(struct modctl *VAR_0)
{
 unsigned int VAR_1;
 char *VAR_2 = VAR_0->mod_modname;

 dtrace_module_symbols_t* VAR_3 = VAR_0->mod_user_symbols;
 if (VAR_3) {
  for (VAR_1=0; VAR_1<VAR_3->dtmodsyms_count; VAR_1++) {





   dtrace_symbol_t* VAR_4 = &VAR_3->dtmodsyms_symbols[VAR_1];

   char* VAR_5 = VAR_4->dtsym_name;


   if (*VAR_5 == '_')
    VAR_5 += 1;

   if (FUNC_0(VAR_0) && FUNC_2(VAR_5))
    continue;




   if (!VAR_4->dtsym_addr)
    continue;




   if (!FUNC_1((void*)VAR_4->dtsym_addr, VAR_0))
    continue;

   FUNC_3(VAR_0, VAR_2, VAR_5, (machine_inst_t*)(uintptr_t)VAR_4->dtsym_addr, (machine_inst_t*)(uintptr_t)(VAR_4->dtsym_addr + VAR_4->dtsym_size));
  }
 }
}
