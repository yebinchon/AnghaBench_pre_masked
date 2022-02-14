
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_cmd {int * data; } ;


 struct iommu_cmd* FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct iommu_cmd *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  FUNC_1("AMD-Vi: CMD[%d]: %08x\n", VAR_2, VAR_1->data[VAR_2]);
}
