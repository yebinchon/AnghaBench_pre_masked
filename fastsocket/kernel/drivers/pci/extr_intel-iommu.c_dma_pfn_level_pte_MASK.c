
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {struct dma_pte* pgd; int agaw; } ;
struct dma_pte {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dma_pte*) ;
 int FUNC_2 (struct dma_pte*) ;
 int FUNC_3 (unsigned long,int) ;
 struct dma_pte* FUNC_4 (int ) ;

__attribute__((used)) static struct dma_pte *FUNC_5(struct dmar_domain *VAR_0,
      unsigned long VAR_1,
      int VAR_2)
{
 struct dma_pte *VAR_3, *VAR_4 = ((void*)0);
 int VAR_5 = FUNC_0(VAR_0->agaw);
 int VAR_6;

 VAR_3 = VAR_0->pgd;
 while (VAR_2 <= VAR_5) {
  VAR_6 = FUNC_3(VAR_1, VAR_5);
  VAR_4 = &VAR_3[VAR_6];
  if (VAR_2 == VAR_5)
   return VAR_4;

  if (!FUNC_2(VAR_4))
   break;
  VAR_3 = FUNC_4(FUNC_1(VAR_4));
  VAR_5--;
 }
 return ((void*)0);
}
