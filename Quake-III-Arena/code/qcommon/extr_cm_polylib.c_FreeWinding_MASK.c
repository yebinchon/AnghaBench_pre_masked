
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int winding_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

void FUNC_2 (winding_t *VAR_2)
{
 if (*(unsigned *)VAR_2 == 0xdeaddead)
  FUNC_0 (VAR_0, "FreeWinding: freed a freed winding");
 *(unsigned *)VAR_2 = 0xdeaddead;

 VAR_1--;
 FUNC_1 (VAR_2);
}
