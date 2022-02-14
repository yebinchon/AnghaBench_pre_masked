
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_block {int start; } ;
struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_radeon_private_t ;
struct TYPE_2__ {int alignment; int region_offset; int size; int region; } ;
typedef TYPE_1__ drm_radeon_mem_alloc_t ;


 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mem_block* FUNC_2 (struct mem_block*,int ,int,struct drm_file*) ;
 struct mem_block** FUNC_3 (int *,int ) ;

int FUNC_4(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;
 drm_radeon_mem_alloc_t *VAR_7 = VAR_4;
 struct mem_block *VAR_8, **VAR_9;

 if (!VAR_6) {
  FUNC_1("called with no initialization\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_6, VAR_7->region);
 if (!VAR_9 || !*VAR_9)
  return -VAR_0;




 if (VAR_7->alignment < 12)
  VAR_7->alignment = 12;

 VAR_8 = FUNC_2(*VAR_9, VAR_7->size, VAR_7->alignment, VAR_5);

 if (!VAR_8)
  return -VAR_2;

 if (FUNC_0(VAR_7->region_offset, &VAR_8->start,
        sizeof(int))) {
  FUNC_1("copy_to_user\n");
  return -VAR_0;
 }

 return 0;
}
