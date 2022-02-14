
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_drm {int device; } ;
struct nouveau_device {scalar_t__ card_type; int chipset; } ;
struct TYPE_2__ {int bdev; } ;
struct nouveau_bo {int tile_mode; int page_shift; TYPE_1__ bo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 struct nouveau_device* FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_bo *VAR_2, u32 VAR_3,
         int *VAR_4, int *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_1(VAR_2->bo.bdev);
 struct nouveau_device *VAR_7 = FUNC_2(VAR_6->device);

 if (VAR_7->card_type < VAR_0) {
  if (VAR_2->tile_mode) {
   if (VAR_7->chipset >= 0x40) {
    *VAR_4 = 65536;
    *VAR_5 = FUNC_3(*VAR_5, 64 * VAR_2->tile_mode);

   } else if (VAR_7->chipset >= 0x30) {
    *VAR_4 = 32768;
    *VAR_5 = FUNC_3(*VAR_5, 64 * VAR_2->tile_mode);

   } else if (VAR_7->chipset >= 0x20) {
    *VAR_4 = 16384;
    *VAR_5 = FUNC_3(*VAR_5, 64 * VAR_2->tile_mode);

   } else if (VAR_7->chipset >= 0x10) {
    *VAR_4 = 16384;
    *VAR_5 = FUNC_3(*VAR_5, 32 * VAR_2->tile_mode);
   }
  }
 } else {
  *VAR_5 = FUNC_3(*VAR_5, (1 << VAR_2->page_shift));
  *VAR_4 = FUNC_0((1 << VAR_2->page_shift), *VAR_4);
 }

 *VAR_5 = FUNC_3(*VAR_5, VAR_1);
}
