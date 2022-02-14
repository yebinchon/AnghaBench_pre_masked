
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct drm_radeon_driver_file_fields {scalar_t__ radeon_fb_delta; } ;
struct drm_file {struct drm_radeon_driver_file_fields* driver_priv; } ;
struct TYPE_4__ {scalar_t__ fb_location; scalar_t__ fb_size; scalar_t__ gart_size; scalar_t__ gart_vm_start; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static __inline__ int FUNC_2(drm_radeon_private_t *
          VAR_1,
          struct drm_file * VAR_2,
          u32 *VAR_3)
{
 u64 VAR_4 = *VAR_3;
 u32 VAR_5 = VAR_1->fb_location + VAR_1->fb_size - 1;
 struct drm_radeon_driver_file_fields *VAR_6;
 if (FUNC_1(VAR_1, VAR_4))
  return 0;





 if (VAR_4 < (VAR_1->fb_size + VAR_1->gart_size)) {
  VAR_6 = VAR_2->driver_priv;
  VAR_4 += VAR_6->radeon_fb_delta;
 }


 if (VAR_4 > VAR_5)
  VAR_4 = VAR_4 - VAR_5 - 1 + VAR_1->gart_vm_start;


 if (FUNC_1(VAR_1, VAR_4)) {
  FUNC_0("offset fixed up to 0x%x\n", (unsigned int)VAR_4);
  *VAR_3 = VAR_4;
  return 0;
 }
 return -VAR_0;
}
