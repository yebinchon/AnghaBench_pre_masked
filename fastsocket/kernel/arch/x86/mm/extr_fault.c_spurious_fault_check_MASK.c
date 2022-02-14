
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2, pte_t *VAR_3)
{
 if ((VAR_2 & VAR_1) && !FUNC_1(*VAR_3))
  return 0;

 if ((VAR_2 & VAR_0) && !FUNC_0(*VAR_3))
  return 0;

 return 1;
}
