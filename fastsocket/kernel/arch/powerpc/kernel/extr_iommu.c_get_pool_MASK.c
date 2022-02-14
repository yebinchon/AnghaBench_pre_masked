
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_pool {unsigned long start; } ;
struct iommu_table {unsigned long poolsize; unsigned int nr_pools; struct iommu_pool* pools; struct iommu_pool large_pool; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct iommu_pool *FUNC_1(struct iommu_table *VAR_0,
       unsigned long VAR_1)
{
 struct iommu_pool *VAR_2;
 unsigned long VAR_3 = VAR_0->large_pool.start;


 if (VAR_1 >= VAR_3) {
  VAR_2 = &VAR_0->large_pool;
 } else {
  unsigned int VAR_4 = VAR_1 / VAR_0->poolsize;

  FUNC_0(VAR_4 > VAR_0->nr_pools);
  VAR_2 = &VAR_0->pools[VAR_4];
 }

 return VAR_2;
}
