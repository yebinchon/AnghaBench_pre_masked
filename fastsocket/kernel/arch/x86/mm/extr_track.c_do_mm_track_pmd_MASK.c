
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(void *VAR_5)
{
 int VAR_6;
 pte_t *VAR_7;
 pmd_t *VAR_8 = (pmd_t *)VAR_5;

 if (!FUNC_3(*VAR_8))
  return;

 if (FUNC_7(FUNC_2(*VAR_8))) {
  unsigned long VAR_9, VAR_10;

  if (!(FUNC_6(*(pte_t *)VAR_5) & VAR_4))
   return;

  VAR_9 = FUNC_5(*(pte_t *)VAR_5) << VAR_1;
  VAR_10 = VAR_9 + VAR_0;

  while (VAR_9 < VAR_10) {
   FUNC_0((void *)VAR_9);
   VAR_9 += VAR_2;
  }
  return;
 }

 VAR_7 = FUNC_4(VAR_8, 0);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_7++)
  FUNC_1(VAR_7);
}
