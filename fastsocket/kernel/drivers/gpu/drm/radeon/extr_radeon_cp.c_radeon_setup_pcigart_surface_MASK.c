
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_virt_surface {scalar_t__ file_priv; int surface_index; scalar_t__ upper; scalar_t__ lower; scalar_t__ flags; } ;
struct radeon_surface {int refcount; scalar_t__ upper; scalar_t__ lower; scalar_t__ flags; } ;
struct drm_ati_pcigart_info {scalar_t__ table_size; scalar_t__ bus_addr; } ;
struct TYPE_3__ {struct radeon_surface* surfaces; struct radeon_virt_surface* virt_surfaces; struct drm_ati_pcigart_info gart_info; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(drm_radeon_private_t *VAR_6)
{
 struct drm_ati_pcigart_info *VAR_7 = &VAR_6->gart_info;
 struct radeon_virt_surface *VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2 * 2; VAR_9++) {
  if (!VAR_6->virt_surfaces[VAR_9].file_priv ||
      VAR_6->virt_surfaces[VAR_9].file_priv == VAR_1)
   break;
 }
 if (VAR_9 >= 2 * VAR_2)
  return -VAR_0;
 VAR_8 = &VAR_6->virt_surfaces[VAR_9];

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  struct radeon_surface *VAR_10 = &VAR_6->surfaces[VAR_9];
  if (VAR_10->refcount)
   continue;

  VAR_8->surface_index = VAR_9;
  VAR_8->lower = VAR_7->bus_addr;
  VAR_8->upper = VAR_8->lower + VAR_7->table_size;
  VAR_8->flags = 0;
  VAR_8->file_priv = VAR_1;

  VAR_10->refcount = 1;
  VAR_10->lower = VAR_8->lower;
  VAR_10->upper = VAR_8->upper;
  VAR_10->flags = 0;

  FUNC_0(VAR_3 + 16 * VAR_9, VAR_10->flags);
  FUNC_0(VAR_4 + 16 * VAR_9, VAR_10->lower);
  FUNC_0(VAR_5 + 16 * VAR_9, VAR_10->upper);
  return 0;
 }

 return -VAR_0;
}
