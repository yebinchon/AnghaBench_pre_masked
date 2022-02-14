
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 void* FUNC_2 (unsigned long) ;

void *FUNC_3(unsigned long VAR_1)
{
 void *VAR_2;
 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) FUNC_0("out of memory");
 VAR_0 += FUNC_1(VAR_2);
 return VAR_2;
}
