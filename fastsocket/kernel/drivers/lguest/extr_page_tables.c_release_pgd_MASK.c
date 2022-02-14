
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pgd_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(pgd_t *VAR_3)
{

 if (FUNC_3(*VAR_3) & VAR_2) {
  unsigned int VAR_4;





  pte_t *VAR_5 = FUNC_1(FUNC_4(*VAR_3) << VAR_0);

  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_5(VAR_5[VAR_4]);

  FUNC_2((long)VAR_5);

  *VAR_3 = FUNC_0(0);
 }
}
