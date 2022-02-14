
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iounit_struct {int lock; int bmap; } ;
struct TYPE_2__ {struct iounit_struct* iommu; } ;
struct device {TYPE_1__ archdata; } ;
typedef unsigned long __u32 ;


 int FUNC_0 (char*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_4, __u32 VAR_5, unsigned long VAR_6)
{
 struct iounit_struct *VAR_7 = VAR_4->archdata.iommu;
 unsigned long VAR_8;

 FUNC_2(&VAR_7->lock, VAR_8);
 VAR_6 = ((VAR_5 & ~VAR_1) + VAR_6 + (VAR_3-1)) >> VAR_2;
 VAR_5 = (VAR_5 - VAR_0) >> VAR_2;
 FUNC_0(("iounit_release %08lx-%08lx\n", (long)VAR_5, (long)VAR_6+VAR_5));
 for (VAR_6 += VAR_5; VAR_5 < VAR_6; VAR_5++)
  FUNC_1(VAR_5, VAR_7->bmap);
 FUNC_3(&VAR_7->lock, VAR_8);
}
