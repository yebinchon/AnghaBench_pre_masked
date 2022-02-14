
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct TYPE_6__ {TYPE_1__* virt_surfaces; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_5__ {int lower; struct drm_file* file_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_file*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(struct drm_file *VAR_1,
        drm_radeon_private_t * VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 2 * VAR_0; VAR_3++) {
  if (VAR_2->virt_surfaces[VAR_3].file_priv == VAR_1)
   FUNC_0(VAR_1, VAR_2,
         VAR_2->virt_surfaces[VAR_3].lower);
 }
}
