
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int * pgd; int gaw; int agaw; } ;
struct dma_pte {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (unsigned long,int) ;
 int FUNC_5 (struct dma_pte*) ;
 struct dma_pte* FUNC_6 (struct dmar_domain*,unsigned long,int) ;
 int FUNC_7 (struct dma_pte*) ;
 scalar_t__ FUNC_8 (struct dma_pte*) ;
 int FUNC_9 (struct dmar_domain*,struct dma_pte*,int) ;
 int FUNC_10 (struct dma_pte*) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (int) ;
 int * FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct dmar_domain *VAR_2,
       unsigned long VAR_3,
       unsigned long VAR_4)
{
 int VAR_5 = FUNC_3(VAR_2->agaw) - VAR_1;
 struct dma_pte *VAR_6, *VAR_7;
 int VAR_8 = FUNC_2(VAR_2->agaw);
 int VAR_9;
 unsigned long VAR_10;

 FUNC_0(VAR_5 < VAR_0 && VAR_3 >> VAR_5);
 FUNC_0(VAR_5 < VAR_0 && VAR_4 >> VAR_5);
 FUNC_0(VAR_3 > VAR_4);


 VAR_9 = 2;
 while (VAR_9 <= VAR_8) {
  VAR_10 = FUNC_4(VAR_3, VAR_9);


  if (VAR_10 + FUNC_12(VAR_9) - 1 > VAR_4)
   return;

  do {
   VAR_6 = VAR_7 = FUNC_6(VAR_2, VAR_10, VAR_9);
   if (!VAR_7) {
    VAR_10 = FUNC_4(VAR_10 + 1, VAR_9 + 1);
    continue;
   }
   do {
    if (FUNC_8(VAR_7)) {
     FUNC_11(FUNC_13(FUNC_7(VAR_7)));
     FUNC_5(VAR_7);
    }
    VAR_7++;
    VAR_10 += FUNC_12(VAR_9);
   } while (!FUNC_10(VAR_7) &&
     VAR_10 + FUNC_12(VAR_9) - 1 <= VAR_4);

   FUNC_9(VAR_2, VAR_6,
        (void *)VAR_7 - (void *)VAR_6);

  } while (VAR_10 && VAR_10 + FUNC_12(VAR_9) - 1 <= VAR_4);
  VAR_9++;
 }

 if (VAR_3 == 0 && VAR_4 == FUNC_1(VAR_2->gaw)) {
  FUNC_11(VAR_2->pgd);
  VAR_2->pgd = ((void*)0);
 }
}
