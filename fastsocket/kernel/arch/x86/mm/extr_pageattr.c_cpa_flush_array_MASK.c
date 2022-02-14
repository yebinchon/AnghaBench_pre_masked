
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (unsigned long,unsigned int*) ;
 int FUNC_4 (int ,void*,int) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(unsigned long *VAR_4, int VAR_5, int VAR_6,
       int VAR_7, struct page **VAR_8)
{
 unsigned int VAR_9, VAR_10;
 unsigned long VAR_11 = VAR_6 && VAR_5 >= 1024;

 FUNC_0(FUNC_2());

 FUNC_4(VAR_3, (void *) VAR_11, 1);

 if (!VAR_6 || VAR_11)
  return;







 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  unsigned long VAR_12;
  pte_t *VAR_13;

  if (VAR_7 & VAR_0)
   VAR_12 = (unsigned long)FUNC_5(VAR_8[VAR_9]);
  else
   VAR_12 = VAR_4[VAR_9];

  VAR_13 = FUNC_3(VAR_12, &VAR_10);




  if (VAR_13 && (FUNC_6(*VAR_13) & VAR_2))
   FUNC_1((void *)VAR_12, VAR_1);
 }
}
