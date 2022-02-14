
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_iommu {int lock; scalar_t__ mmio_base; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct amd_iommu*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct amd_iommu *VAR_4)
{
 int VAR_5 = 0;
 unsigned VAR_6 = 0;
 unsigned long VAR_7 = 0;

 FUNC_0(VAR_3);

 while (!VAR_5 && (VAR_7 < VAR_0)) {
  ++VAR_7;

  VAR_6 = FUNC_1(VAR_4->mmio_base + VAR_2);
  VAR_5 = VAR_6 & VAR_1;
 }


 VAR_6 &= ~VAR_1;
 FUNC_6(VAR_6, VAR_4->mmio_base + VAR_2);

 if (FUNC_5(VAR_7 == VAR_0)) {
  FUNC_4(&VAR_4->lock);
  FUNC_2(VAR_4);
  FUNC_3(&VAR_4->lock);
 }
}
