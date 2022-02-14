
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int irq; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,int ,int ,struct intel_iommu*) ;
 int FUNC_5 (int,struct intel_iommu*) ;

int FUNC_6(struct intel_iommu *VAR_2)
{
 int VAR_3, VAR_4;




 if (VAR_2->irq)
  return 0;

 VAR_3 = FUNC_1();
 if (!VAR_3) {
  FUNC_3("IOMMU: no free vectors\n");
  return -VAR_0;
 }

 FUNC_5(VAR_3, VAR_2);
 VAR_2->irq = VAR_3;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4) {
  FUNC_5(VAR_3, ((void*)0));
  VAR_2->irq = 0;
  FUNC_2(VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3, VAR_1, 0, VAR_2->name, VAR_2);
 if (VAR_4)
  FUNC_3("IOMMU: can't request irq\n");
 return VAR_4;
}
