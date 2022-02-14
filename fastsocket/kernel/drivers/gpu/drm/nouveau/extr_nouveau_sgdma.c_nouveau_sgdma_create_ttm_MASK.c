
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_tt {int * func; } ;
struct ttm_bo_device {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_3__ {struct ttm_tt ttm; } ;
struct nouveau_sgdma_be {TYPE_1__ ttm; int dev; } ;
struct nouveau_drm {int device; int dev; } ;
struct TYPE_4__ {scalar_t__ card_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nouveau_sgdma_be*) ;
 struct nouveau_sgdma_be* FUNC_1 (int,int ) ;
 struct nouveau_drm* FUNC_2 (struct ttm_bo_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct ttm_bo_device*,unsigned long,int ,struct page*) ;

struct ttm_tt *
FUNC_5(struct ttm_bo_device *VAR_4,
    unsigned long VAR_5, uint32_t VAR_6,
    struct page *VAR_7)
{
 struct nouveau_drm *VAR_8 = FUNC_2(VAR_4);
 struct nouveau_sgdma_be *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->dev = VAR_8->dev;
 if (FUNC_3(VAR_8->device)->card_type < VAR_1)
  VAR_9->ttm.ttm.func = &VAR_2;
 else
  VAR_9->ttm.ttm.func = &VAR_3;

 if (FUNC_4(&VAR_9->ttm, VAR_4, VAR_5, VAR_6, VAR_7)) {
  FUNC_0(VAR_9);
  return ((void*)0);
 }
 return &VAR_9->ttm.ttm;
}
