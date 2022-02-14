
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int name; } ;


 int FUNC_0 (char*,int ,unsigned long) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct module *VAR_0, void *VAR_1)
{
 FUNC_0("module_free(%s,%08lx)\n", VAR_0->name,
     (unsigned long)VAR_1);
 FUNC_1(VAR_1);
}
