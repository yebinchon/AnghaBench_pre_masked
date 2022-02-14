
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amd_iommu {int evt_buf_size; int lock; scalar_t__ mmio_base; scalar_t__ evt_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct amd_iommu*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct amd_iommu *VAR_3)
{
 u32 VAR_4, VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_3->lock, VAR_6);

 VAR_4 = FUNC_1(VAR_3->mmio_base + VAR_1);
 VAR_5 = FUNC_1(VAR_3->mmio_base + VAR_2);

 while (VAR_4 != VAR_5) {
  FUNC_0(VAR_3, VAR_3->evt_buf + VAR_4);
  VAR_4 = (VAR_4 + VAR_0) % VAR_3->evt_buf_size;
 }

 FUNC_4(VAR_4, VAR_3->mmio_base + VAR_1);

 FUNC_3(&VAR_3->lock, VAR_6);
}
