
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int gart_vm_start; int gart_size; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_3->dev_private;
 u32 VAR_5, VAR_6 = 1000;
 FUNC_2(VAR_1, VAR_4->gart_vm_start >> 12);
 FUNC_2(VAR_0, (VAR_4->gart_vm_start + VAR_4->gart_size - 1) >> 12);
 FUNC_2(VAR_2, 2);

 do {
  VAR_5 = FUNC_1(VAR_2);
  VAR_6--;
  FUNC_0(1);
 } while (((VAR_5 & 0xf0) == 0) && VAR_6);
}
