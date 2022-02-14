
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int * FUNC_1 (unsigned long) ;

void *FUNC_2(unsigned long VAR_0)
{
 void *VAR_1;
 VAR_1 = (VAR_0 == 0) ? ((void*)0) : FUNC_1(VAR_0);
 FUNC_0("module_alloc (%08lx@%08lx)\n", VAR_0, (unsigned long int)VAR_1);
 return VAR_1;
}
