
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_global {int dummy; } ;
struct ttm_bo_global {int dummy; } ;
struct drm_global_reference {int size; int * release; int * init; int global_type; int object; } ;
struct TYPE_3__ {struct drm_global_reference ref; int mem_glob; } ;
struct TYPE_4__ {struct drm_global_reference mem_global_ref; TYPE_1__ bo_global_ref; } ;
struct nouveau_drm {TYPE_2__ ttm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_global_reference*) ;
 int FUNC_2 (struct drm_global_reference*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(struct nouveau_drm *VAR_6)
{
 struct drm_global_reference *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_6->ttm.mem_global_ref;
 VAR_7->global_type = VAR_1;
 VAR_7->size = sizeof(struct ttm_mem_global);
 VAR_7->init = &VAR_2;
 VAR_7->release = &VAR_3;

 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_3(VAR_8 != 0)) {
  FUNC_0("Failed setting up TTM memory accounting\n");
  VAR_6->ttm.mem_global_ref.release = ((void*)0);
  return VAR_8;
 }

 VAR_6->ttm.bo_global_ref.mem_glob = VAR_7->object;
 VAR_7 = &VAR_6->ttm.bo_global_ref.ref;
 VAR_7->global_type = VAR_0;
 VAR_7->size = sizeof(struct ttm_bo_global);
 VAR_7->init = &VAR_4;
 VAR_7->release = &VAR_5;

 VAR_8 = FUNC_1(VAR_7);
 if (FUNC_3(VAR_8 != 0)) {
  FUNC_0("Failed setting up TTM BO subsystem\n");
  FUNC_2(&VAR_6->ttm.mem_global_ref);
  VAR_6->ttm.mem_global_ref.release = ((void*)0);
  return VAR_8;
 }

 return 0;
}
