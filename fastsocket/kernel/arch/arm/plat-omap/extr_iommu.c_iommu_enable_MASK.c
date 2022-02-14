
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu {int clk; } ;
struct TYPE_2__ {int (* enable ) (struct iommu*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iommu*) ;

__attribute__((used)) static int FUNC_3(struct iommu *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 FUNC_1(VAR_2->clk);

 VAR_3 = VAR_1->enable(VAR_2);

 FUNC_0(VAR_2->clk);
 return VAR_3;
}
