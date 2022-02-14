
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_ops_domain {int domain; struct aperture_range** aperture; } ;
struct aperture_range {int ** pte_pages; } ;


 size_t FUNC_0 (unsigned long) ;
 size_t FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int ,unsigned long) ;
 int VAR_1 ;
 int * FUNC_3 (int *,unsigned long,int ,int **,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u64* FUNC_5(struct dma_ops_domain *VAR_2,
       unsigned long VAR_3)
{
 struct aperture_range *VAR_4;
 u64 *VAR_5, *VAR_6;

 VAR_4 = VAR_2->aperture[FUNC_1(VAR_3)];
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = VAR_4->pte_pages[FUNC_0(VAR_3)];
 if (!VAR_5) {
  VAR_5 = FUNC_3(&VAR_2->domain, VAR_3, VAR_1, &VAR_6,
    VAR_0);
  VAR_4->pte_pages[FUNC_0(VAR_3)] = VAR_6;
 } else
  VAR_5 += FUNC_2(0, VAR_3);

 FUNC_4(&VAR_2->domain);

 return VAR_5;
}
