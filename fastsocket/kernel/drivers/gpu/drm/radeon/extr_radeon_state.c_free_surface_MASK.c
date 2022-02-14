
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct radeon_virt_surface {int lower; size_t surface_index; int upper; struct drm_file* file_priv; } ;
struct drm_file {int dummy; } ;
struct TYPE_6__ {TYPE_1__* surfaces; struct radeon_virt_surface* virt_surfaces; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_5__ {int lower; int upper; scalar_t__ refcount; scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct drm_file *VAR_1,
   drm_radeon_private_t * VAR_2,
   int VAR_3)
{
 struct radeon_virt_surface *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2 * VAR_0; VAR_5++) {
  VAR_4 = &(VAR_2->virt_surfaces[VAR_5]);
  if (VAR_4->file_priv) {
   if ((VAR_3 == VAR_4->lower) && (VAR_1 == VAR_4->file_priv))
   {
    if (VAR_2->surfaces[VAR_4->surface_index].
        lower == VAR_4->lower)
     VAR_2->surfaces[VAR_4->surface_index].
         lower = VAR_4->upper;

    if (VAR_2->surfaces[VAR_4->surface_index].
        upper == VAR_4->upper)
     VAR_2->surfaces[VAR_4->surface_index].
         upper = VAR_4->lower;

    VAR_2->surfaces[VAR_4->surface_index].refcount--;
    if (VAR_2->surfaces[VAR_4->surface_index].
        refcount == 0)
     VAR_2->surfaces[VAR_4->surface_index].
         flags = 0;
    VAR_4->file_priv = ((void*)0);
    FUNC_0(VAR_4->surface_index,
         VAR_2);
    return 0;
   }
  }
 }
 return 1;
}
