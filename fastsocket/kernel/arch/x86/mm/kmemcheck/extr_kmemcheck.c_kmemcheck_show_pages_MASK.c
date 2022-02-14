
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (unsigned long,unsigned int*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct page *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  unsigned long VAR_6;
  pte_t *VAR_7;
  unsigned int VAR_8;

  VAR_6 = (unsigned long) FUNC_4(&VAR_3[VAR_5]);
  VAR_7 = FUNC_3(VAR_6, &VAR_8);
  FUNC_0(!VAR_7);
  FUNC_0(VAR_8 != VAR_0);

  FUNC_6(VAR_7, FUNC_2(FUNC_5(*VAR_7) | VAR_2));
  FUNC_6(VAR_7, FUNC_2(FUNC_5(*VAR_7) & ~VAR_1));
  FUNC_1(VAR_6);
 }
}
