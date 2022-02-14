
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(unsigned long VAR_1)
{
 pte_t *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return 0;

 FUNC_4(VAR_2, FUNC_1(FUNC_3(*VAR_2) | VAR_0));
 FUNC_0(VAR_1);
 return 1;
}
