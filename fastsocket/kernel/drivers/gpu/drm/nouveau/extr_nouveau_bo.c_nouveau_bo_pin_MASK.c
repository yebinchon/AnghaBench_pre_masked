
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int mem_type; int size; } ;
struct ttm_buffer_object {TYPE_2__ mem; int bdev; } ;
struct TYPE_3__ {int gart_available; int vram_available; } ;
struct nouveau_drm {TYPE_1__ gem; } ;
struct nouveau_bo {scalar_t__ pin_refcnt; struct ttm_buffer_object bo; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,struct ttm_buffer_object*,int,int) ;


 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct nouveau_bo*,int,int ) ;
 int FUNC_3 (struct nouveau_bo*,int,int) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int,int,int ) ;
 int FUNC_5 (struct ttm_buffer_object*) ;

int
FUNC_6(struct nouveau_bo *VAR_1, uint32_t VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_1(VAR_1->bo.bdev);
 struct ttm_buffer_object *VAR_4 = &VAR_1->bo;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4, 0, 0, 0, 0);
 if (VAR_5)
  goto out;

 if (VAR_1->pin_refcnt && !(VAR_2 & (1 << VAR_4->mem.mem_type))) {
  FUNC_0(VAR_3, "bo %p pinned elsewhere: 0x%08x vs 0x%08x\n", VAR_4,
    1 << VAR_4->mem.mem_type, VAR_2);
  VAR_5 = -VAR_0;
  goto out;
 }

 if (VAR_1->pin_refcnt++)
  goto out;

 FUNC_2(VAR_1, VAR_2, 0);

 VAR_5 = FUNC_3(VAR_1, 0, 0);
 if (VAR_5 == 0) {
  switch (VAR_4->mem.mem_type) {
  case 128:
   VAR_3->gem.vram_available -= VAR_4->mem.size;
   break;
  case 129:
   VAR_3->gem.gart_available -= VAR_4->mem.size;
   break;
  default:
   break;
  }
 }
out:
 FUNC_5(VAR_4);
 return VAR_5;
}
