
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int agaw; } ;
struct dma_pte {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 int FUNC_3 (struct dma_pte*) ;
 struct dma_pte* FUNC_4 (struct dmar_domain*,unsigned long,int) ;
 int FUNC_5 (struct dmar_domain*,struct dma_pte*,int) ;
 int FUNC_6 (struct dma_pte*) ;

__attribute__((used)) static void FUNC_7(struct dmar_domain *VAR_2,
    unsigned long VAR_3,
    unsigned long VAR_4)
{
 int VAR_5 = FUNC_1(VAR_2->agaw) - VAR_1;
 struct dma_pte *VAR_6, *VAR_7;

 FUNC_0(VAR_5 < VAR_0 && VAR_3 >> VAR_5);
 FUNC_0(VAR_5 < VAR_0 && VAR_4 >> VAR_5);
 FUNC_0(VAR_3 > VAR_4);


 do {
  VAR_6 = VAR_7 = FUNC_4(VAR_2, VAR_3, 1);
  if (!VAR_7) {
   VAR_3 = FUNC_2(VAR_3 + 1, 2);
   continue;
  }
  do {
   FUNC_3(VAR_7);
   VAR_3++;
   VAR_7++;
  } while (VAR_3 <= VAR_4 && !FUNC_6(VAR_7));

  FUNC_5(VAR_2, VAR_6,
       (void *)VAR_7 - (void *)VAR_6);

 } while (VAR_3 && VAR_3 <= VAR_4);
}
