
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa_state_record {int dummy; } ;
struct crypto4xx_device {int pdr_uinfo; int shadow_sr_pool_pa; int * shadow_sr_pool; TYPE_1__* core_dev; int shadow_sa_pool_pa; int * shadow_sa_pool; int pdr_pa; int * pdr; } ;
struct ce_pd {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct crypto4xx_device *VAR_1)
{
 if (VAR_1->pdr != ((void*)0))
  FUNC_0(VAR_1->core_dev->device,
      sizeof(struct ce_pd) * VAR_0,
      VAR_1->pdr, VAR_1->pdr_pa);
 if (VAR_1->shadow_sa_pool)
  FUNC_0(VAR_1->core_dev->device, 256 * VAR_0,
      VAR_1->shadow_sa_pool, VAR_1->shadow_sa_pool_pa);
 if (VAR_1->shadow_sr_pool)
  FUNC_0(VAR_1->core_dev->device,
   sizeof(struct sa_state_record) * VAR_0,
   VAR_1->shadow_sr_pool, VAR_1->shadow_sr_pool_pa);

 FUNC_1(VAR_1->pdr_uinfo);
}
