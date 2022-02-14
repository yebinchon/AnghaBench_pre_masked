
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_ops_domain {struct dma_ops_domain** aperture; scalar_t__ bitmap; int domain; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dma_ops_domain*) ;

__attribute__((used)) static void FUNC_3(struct dma_ops_domain *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->domain);

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (!VAR_1->aperture[VAR_2])
   continue;
  FUNC_0((unsigned long)VAR_1->aperture[VAR_2]->bitmap);
  FUNC_2(VAR_1->aperture[VAR_2]);
 }

 FUNC_2(VAR_1);
}
