
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct nouveau_drm {int device; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {int persistent_swap_storage; TYPE_1__ mem; } ;
struct nouveau_bo {int valid_domains; TYPE_4__* gem; TYPE_2__ bo; } ;
struct drm_device {int dummy; } ;
struct TYPE_8__ {struct nouveau_bo* driver_private; int filp; } ;
struct TYPE_7__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,int,int,int ,int,int,int *,struct nouveau_bo**) ;
 int FUNC_2 (int *,struct nouveau_bo**) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 TYPE_3__* FUNC_4 (int ) ;

int
FUNC_5(struct drm_device *VAR_8, int VAR_9, int VAR_10, uint32_t VAR_11,
  uint32_t VAR_12, uint32_t VAR_13,
  struct nouveau_bo **VAR_14)
{
 struct nouveau_drm *VAR_15 = FUNC_3(VAR_8);
 struct nouveau_bo *VAR_16;
 u32 VAR_17 = 0;
 int VAR_18;

 if (VAR_11 & VAR_3)
  VAR_17 |= VAR_7;
 if (VAR_11 & VAR_2)
  VAR_17 |= VAR_6;
 if (!VAR_17 || VAR_11 & VAR_1)
  VAR_17 |= VAR_5;

 VAR_18 = FUNC_1(VAR_8, VAR_9, VAR_10, VAR_17, VAR_12,
        VAR_13, ((void*)0), VAR_14);
 if (VAR_18)
  return VAR_18;
 VAR_16 = *VAR_14;





 VAR_16->valid_domains = VAR_3 |
         VAR_2;
 if (FUNC_4(VAR_15->device)->card_type >= VAR_4)
  VAR_16->valid_domains &= VAR_11;

 VAR_16->gem = FUNC_0(VAR_8, VAR_16->bo.mem.size);
 if (!VAR_16->gem) {
  FUNC_2(((void*)0), VAR_14);
  return -VAR_0;
 }

 VAR_16->bo.persistent_swap_storage = VAR_16->gem->filp;
 VAR_16->gem->driver_private = VAR_16;
 return 0;
}
