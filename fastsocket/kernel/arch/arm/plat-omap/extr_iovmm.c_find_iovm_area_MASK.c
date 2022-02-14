
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iovm_struct {int dummy; } ;
struct iommu {int mmap_lock; } ;


 struct iovm_struct* FUNC_0 (struct iommu*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct iovm_struct *FUNC_3(struct iommu *VAR_0, u32 VAR_1)
{
 struct iovm_struct *VAR_2;

 FUNC_1(&VAR_0->mmap_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->mmap_lock);

 return VAR_2;
}
