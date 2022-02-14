
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {void* module_core; int core_size; } ;



__attribute__((used)) static inline int FUNC_0(struct module *VAR_0, void *VAR_1)
{
 return (VAR_1 >= VAR_0->module_core &&
  VAR_1 <= (VAR_0->module_core + VAR_0->core_size));
}
