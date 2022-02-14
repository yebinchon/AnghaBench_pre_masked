
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int * processor_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int,int ) ;
 int VAR_3 ;

processor_t
FUNC_2(boolean_t VAR_4)
{
 int VAR_5;
 processor_t VAR_6;

 if (VAR_4)
  return &VAR_3;

 VAR_5 = FUNC_1(VAR_2, (vm_offset_t *) &VAR_6, sizeof(*VAR_6), VAR_1);
 if (VAR_5 != VAR_0)
  return ((void*)0);

 FUNC_0((void *) VAR_6, sizeof(*VAR_6));
 return VAR_6;
}
