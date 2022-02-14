
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned int VAR_0 ;
 int * FUNC_0 (unsigned long,unsigned int*) ;
 int FUNC_1 (int ) ;

pte_t *FUNC_2(unsigned long VAR_1)
{
 pte_t *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_1, &VAR_3);
 if (!VAR_2)
  return ((void*)0);
 if (VAR_3 != VAR_0)
  return ((void*)0);
 if (!FUNC_1(*VAR_2))
  return ((void*)0);

 return VAR_2;
}
