
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_block {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_radeon_private_t ;
struct TYPE_2__ {int size; int start; int region; } ;
typedef TYPE_1__ drm_radeon_mem_init_heap_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct mem_block** FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mem_block**,int ,int ) ;

int FUNC_3(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_2->dev_private;
 drm_radeon_mem_init_heap_t *VAR_6 = VAR_3;
 struct mem_block **VAR_7;

 if (!VAR_5) {
  FUNC_0("called with no initialization\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_1(VAR_5, VAR_6->region);
 if (!VAR_7)
  return -VAR_0;

 if (*VAR_7) {
  FUNC_0("heap already initialized?");
  return -VAR_0;
 }

 return FUNC_2(VAR_7, VAR_6->start, VAR_6->size);
}
