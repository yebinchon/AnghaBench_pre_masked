
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ldc_trans_cookie {int cookie_size; int cookie_addr; } ;
struct ldc_iommu {int lock; } ;
struct ldc_channel {int id; struct ldc_iommu iommu; } ;


 int FUNC_0 (int ,struct ldc_iommu*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ldc_channel *VAR_0, struct ldc_trans_cookie *VAR_1,
        int VAR_2)
{
 struct ldc_iommu *VAR_3 = &VAR_0->iommu;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  u64 VAR_6 = VAR_1[VAR_5].cookie_addr;
  u64 VAR_7 = VAR_1[VAR_5].cookie_size;

  FUNC_0(VAR_0->id, VAR_3, VAR_6, VAR_7);
 }
 FUNC_2(&VAR_3->lock, VAR_4);
}
