
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sa_state_record {int dummy; } ;
struct pd_uinfo {scalar_t__ sr_pa; void* sr_va; scalar_t__ sa_pa; void* sa_va; } ;
struct crypto4xx_device {scalar_t__ shadow_sr_pool_pa; void* shadow_sr_pool; scalar_t__ shadow_sa_pool_pa; void* shadow_sa_pool; scalar_t__ pdr_uinfo; TYPE_1__* core_dev; void* pdr; scalar_t__ pdr_pa; } ;
struct ce_pd {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int,scalar_t__*,int ) ;
 int FUNC_1 (int ,int,void*,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int ,int) ;

__attribute__((used)) static u32 FUNC_4(struct crypto4xx_device *VAR_4)
{
 int VAR_5;
 struct pd_uinfo *VAR_6;
 VAR_4->pdr = FUNC_0(VAR_4->core_dev->device,
          sizeof(struct ce_pd) * VAR_3,
          &VAR_4->pdr_pa, VAR_1);
 if (!VAR_4->pdr)
  return -VAR_0;

 VAR_4->pdr_uinfo = FUNC_2(sizeof(struct pd_uinfo) * VAR_3,
    VAR_2);
 if (!VAR_4->pdr_uinfo) {
  FUNC_1(VAR_4->core_dev->device,
      sizeof(struct ce_pd) * VAR_3,
      VAR_4->pdr,
      VAR_4->pdr_pa);
  return -VAR_0;
 }
 FUNC_3(VAR_4->pdr, 0, sizeof(struct ce_pd) * VAR_3);
 VAR_4->shadow_sa_pool = FUNC_0(VAR_4->core_dev->device,
       256 * VAR_3,
       &VAR_4->shadow_sa_pool_pa,
       VAR_1);
 if (!VAR_4->shadow_sa_pool)
  return -VAR_0;

 VAR_4->shadow_sr_pool = FUNC_0(VAR_4->core_dev->device,
    sizeof(struct sa_state_record) * VAR_3,
    &VAR_4->shadow_sr_pool_pa, VAR_1);
 if (!VAR_4->shadow_sr_pool)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = (struct pd_uinfo *) (VAR_4->pdr_uinfo +
      sizeof(struct pd_uinfo) * VAR_5);


  VAR_6->sa_va = VAR_4->shadow_sa_pool + 256 * VAR_5;
  VAR_6->sa_pa = VAR_4->shadow_sa_pool_pa + 256 * VAR_5;


  VAR_6->sr_va = VAR_4->shadow_sr_pool +
      sizeof(struct sa_state_record) * VAR_5;
  VAR_6->sr_pa = VAR_4->shadow_sr_pool_pa +
      sizeof(struct sa_state_record) * VAR_5;
 }

 return 0;
}
