
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,int ,int ) ;
 int * FUNC_3 (unsigned long,unsigned int*) ;
 int FUNC_4 (int ) ;

void FUNC_5(void *VAR_0)
{
 pte_t *VAR_1, VAR_2;
 unsigned long VAR_3 = (unsigned long)VAR_0;
 unsigned int VAR_4;

 VAR_1 = FUNC_3(VAR_3, &VAR_4);
 FUNC_1(VAR_1 == ((void*)0));

 VAR_2 = FUNC_4(*VAR_1);

 if (FUNC_2(VAR_3, VAR_2, 0))
  FUNC_0();
}
