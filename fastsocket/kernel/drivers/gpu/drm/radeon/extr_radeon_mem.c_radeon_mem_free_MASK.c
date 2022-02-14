
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_block {struct drm_file* file_priv; } ;
struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_radeon_private_t ;
struct TYPE_2__ {int region_offset; int region; } ;
typedef TYPE_1__ drm_radeon_mem_free_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mem_block* FUNC_1 (struct mem_block*,int ) ;
 int FUNC_2 (struct mem_block*) ;
 struct mem_block** FUNC_3 (int *,int ) ;

int FUNC_4(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;
 drm_radeon_mem_free_t *VAR_7 = VAR_4;
 struct mem_block *VAR_8, **VAR_9;

 if (!VAR_6) {
  FUNC_0("called with no initialization\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_6, VAR_7->region);
 if (!VAR_9 || !*VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_1(*VAR_9, VAR_7->region_offset);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_8->file_priv != VAR_5)
  return -VAR_2;

 FUNC_2(VAR_8);
 return 0;
}
