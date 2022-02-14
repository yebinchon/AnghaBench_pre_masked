
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int winding_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3 (winding_t *VAR_3)
{
 if (*(unsigned *)VAR_3 == 0xdeaddead)
  FUNC_0 ("FreeWinding: freed a freed winding");

 if (VAR_2 == 1)
 {
  VAR_0--;
  VAR_1 -= FUNC_2(VAR_3);
 }

 *(unsigned *)VAR_3 = 0xdeaddead;

 FUNC_1(VAR_3);
}
