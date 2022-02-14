
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iounit_struct {int lock; } ;
struct TYPE_2__ {struct iounit_struct* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef unsigned long __u32 ;


 unsigned long FUNC_0 (struct iounit_struct*,unsigned long,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static __u32 FUNC_3(struct device *VAR_0, char *VAR_1, unsigned long VAR_2)
{
 struct iounit_struct *VAR_3 = VAR_0->archdata.iommu;
 unsigned long VAR_4, VAR_5;

 FUNC_1(&VAR_3->lock, VAR_5);
 VAR_4 = FUNC_0(VAR_3, (unsigned long)VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock, VAR_5);
 return VAR_4;
}
