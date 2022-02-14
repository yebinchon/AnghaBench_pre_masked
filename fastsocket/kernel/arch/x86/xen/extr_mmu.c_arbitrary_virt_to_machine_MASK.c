
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmaddr_t ;
typedef int pte_t ;
typedef unsigned int phys_addr_t ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int * FUNC_2 (unsigned long,unsigned int*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;

xmaddr_t FUNC_6(void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;
 unsigned int VAR_4;
 pte_t *VAR_5;
 unsigned VAR_6;





 if (FUNC_4(VAR_2))
  return FUNC_5(VAR_2);



 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 FUNC_0(VAR_5 == ((void*)0));
 VAR_6 = VAR_3 & ~VAR_0;
 return FUNC_1(((phys_addr_t)FUNC_3(*VAR_5) << VAR_1) + VAR_6);
}
