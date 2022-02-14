
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_virt_surface {int surface_index; int lower; int upper; scalar_t__ flags; struct drm_file* file_priv; } ;
struct drm_file {int dummy; } ;
struct TYPE_8__ {int address; int size; scalar_t__ flags; } ;
typedef TYPE_2__ drm_radeon_surface_alloc_t ;
struct TYPE_9__ {TYPE_1__* surfaces; struct radeon_virt_surface* virt_surfaces; } ;
typedef TYPE_3__ drm_radeon_private_t ;
struct TYPE_7__ {int refcount; int lower; int upper; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(drm_radeon_surface_alloc_t *VAR_2,
    drm_radeon_private_t *VAR_3,
    struct drm_file *VAR_4)
{
 struct radeon_virt_surface *VAR_5;
 int VAR_6;
 int VAR_7;
 uint32_t VAR_8, VAR_9;

 VAR_9 = VAR_2->address;
 VAR_8 = VAR_9 + VAR_2->size - 1;


 if ((VAR_9 >= VAR_8) || (VAR_2->flags == 0) || (VAR_2->size == 0) ||
     ((VAR_8 & VAR_1) !=
      VAR_1)
     || ((VAR_9 & VAR_1) != 0))
  return -1;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if ((VAR_3->surfaces[VAR_6].refcount != 0) &&
      (((VAR_9 >= VAR_3->surfaces[VAR_6].lower) &&
        (VAR_9 < VAR_3->surfaces[VAR_6].upper)) ||
       ((VAR_9 < VAR_3->surfaces[VAR_6].lower) &&
        (VAR_8 > VAR_3->surfaces[VAR_6].lower)))) {
   return -1;
  }
 }


 for (VAR_6 = 0; VAR_6 < 2 * VAR_0; VAR_6++)
  if (VAR_3->virt_surfaces[VAR_6].file_priv == ((void*)0))
   break;
 if (VAR_6 == 2 * VAR_0) {
  return -1;
 }
 VAR_7 = VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  if ((VAR_3->surfaces[VAR_6].refcount == 1) &&
      (VAR_2->flags == VAR_3->surfaces[VAR_6].flags) &&
      (VAR_8 + 1 == VAR_3->surfaces[VAR_6].lower)) {
   VAR_5 = &(VAR_3->virt_surfaces[VAR_7]);
   VAR_5->surface_index = VAR_6;
   VAR_5->lower = VAR_9;
   VAR_5->upper = VAR_8;
   VAR_5->flags = VAR_2->flags;
   VAR_5->file_priv = VAR_4;
   VAR_3->surfaces[VAR_6].refcount++;
   VAR_3->surfaces[VAR_6].lower = VAR_5->lower;
   FUNC_0(VAR_5->surface_index, VAR_3);
   return VAR_7;
  }


  if ((VAR_3->surfaces[VAR_6].refcount == 1) &&
      (VAR_2->flags == VAR_3->surfaces[VAR_6].flags) &&
      (VAR_9 == VAR_3->surfaces[VAR_6].upper + 1)) {
   VAR_5 = &(VAR_3->virt_surfaces[VAR_7]);
   VAR_5->surface_index = VAR_6;
   VAR_5->lower = VAR_9;
   VAR_5->upper = VAR_8;
   VAR_5->flags = VAR_2->flags;
   VAR_5->file_priv = VAR_4;
   VAR_3->surfaces[VAR_6].refcount++;
   VAR_3->surfaces[VAR_6].upper = VAR_5->upper;
   FUNC_0(VAR_5->surface_index, VAR_3);
   return VAR_7;
  }
 }


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3->surfaces[VAR_6].refcount == 0) {
   VAR_5 = &(VAR_3->virt_surfaces[VAR_7]);
   VAR_5->surface_index = VAR_6;
   VAR_5->lower = VAR_9;
   VAR_5->upper = VAR_8;
   VAR_5->flags = VAR_2->flags;
   VAR_5->file_priv = VAR_4;
   VAR_3->surfaces[VAR_6].refcount = 1;
   VAR_3->surfaces[VAR_6].lower = VAR_5->lower;
   VAR_3->surfaces[VAR_6].upper = VAR_5->upper;
   VAR_3->surfaces[VAR_6].flags = VAR_5->flags;
   FUNC_0(VAR_5->surface_index, VAR_3);
   return VAR_7;
  }
 }


 return -1;
}
