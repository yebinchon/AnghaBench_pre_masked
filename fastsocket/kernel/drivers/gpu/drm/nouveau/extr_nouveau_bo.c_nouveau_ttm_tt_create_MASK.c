
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_tt {int dummy; } ;
struct ttm_bo_device {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_3__ {scalar_t__ stat; } ;
struct nouveau_drm {TYPE_1__ agp; struct drm_device* dev; } ;
struct drm_device {TYPE_2__* agp; } ;
struct TYPE_4__ {int bridge; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_drm* FUNC_0 (struct ttm_bo_device*) ;
 struct ttm_tt* FUNC_1 (struct ttm_bo_device*,unsigned long,int ,struct page*) ;
 struct ttm_tt* FUNC_2 (struct ttm_bo_device*,int ,unsigned long,int ,struct page*) ;

__attribute__((used)) static struct ttm_tt *
FUNC_3(struct ttm_bo_device *VAR_1, unsigned long VAR_2,
        uint32_t VAR_3, struct page *VAR_4)
{
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
