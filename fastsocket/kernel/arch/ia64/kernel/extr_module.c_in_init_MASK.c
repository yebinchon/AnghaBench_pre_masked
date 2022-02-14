
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct module {scalar_t__ init_size; scalar_t__ module_init; } ;



__attribute__((used)) static inline int
FUNC_0 (const struct module *VAR_0, uint64_t VAR_1)
{
 return VAR_1 - (uint64_t) VAR_0->module_init < VAR_0->init_size;
}
