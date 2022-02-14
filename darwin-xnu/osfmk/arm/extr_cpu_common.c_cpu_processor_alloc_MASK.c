
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * processor_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int * FUNC_1 (int) ;

processor_t
FUNC_2(boolean_t VAR_1)
{
 processor_t VAR_2;

 if (VAR_1)
  return &VAR_0;

 VAR_2 = FUNC_1(sizeof(*VAR_2));
 if (!VAR_2)
  return ((void*)0);

 FUNC_0((void *) VAR_2, sizeof(*VAR_2));
 return VAR_2;
}
