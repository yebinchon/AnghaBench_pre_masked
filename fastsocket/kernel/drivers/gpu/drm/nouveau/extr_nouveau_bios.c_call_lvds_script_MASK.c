
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {size_t lvdsmanufacturerpointer; int last_script_invoc; int lvds_init_run; scalar_t__ power_off_for_reset; scalar_t__ reset_after_pclk_change; } ;
struct nvbios {int* data; TYPE_1__ fp; } ;
struct nouveau_drm {struct nvbios vbios; int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct dcb_output {int dummy; } ;
typedef enum LVDS_script { ____Placeholder_LVDS_script } LVDS_script ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (struct drm_device*,int ,int ,int) ;
 int FUNC_2 (struct nouveau_drm*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct drm_device*,struct dcb_output*,int,int) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 struct nouveau_device* FUNC_5 (int ) ;
 int FUNC_6 (struct nouveau_device*,int ) ;
 int FUNC_7 (struct nouveau_device*,int ,int ) ;
 int FUNC_8 (struct drm_device*,struct dcb_output*,int,int,int) ;

int FUNC_9(struct drm_device *VAR_6, struct dcb_output *VAR_7, int VAR_8, enum LVDS_script VAR_9, int VAR_10)
{






 struct nouveau_drm *VAR_11 = FUNC_4(VAR_6);
 struct nouveau_device *VAR_12 = FUNC_5(VAR_11->device);
 struct nvbios *VAR_13 = &VAR_11->vbios;
 uint8_t VAR_14 = VAR_13->data[VAR_13->fp.lvdsmanufacturerpointer];
 uint32_t VAR_15, VAR_16;
 int VAR_17;

 if (VAR_13->fp.last_script_invoc == (VAR_9 << 1 | VAR_8) || !VAR_14 ||
     (VAR_14 >= 0x30 && VAR_9 == VAR_0))
  return 0;

 if (!VAR_13->fp.lvds_init_run) {
  VAR_13->fp.lvds_init_run = 1;
  FUNC_9(VAR_6, VAR_7, VAR_8, VAR_0, VAR_10);
 }

 if (VAR_9 == VAR_2 && VAR_13->fp.reset_after_pclk_change)
  FUNC_9(VAR_6, VAR_7, VAR_8, VAR_3, VAR_10);
 if (VAR_9 == VAR_3 && VAR_13->fp.power_off_for_reset)
  FUNC_9(VAR_6, VAR_7, VAR_8, VAR_1, VAR_10);

 FUNC_2(VAR_11, "Calling LVDS script %d:\n", VAR_9);


 VAR_15 = FUNC_6(VAR_12, VAR_5) & 0x50000;

 if (VAR_14 < 0x30)
  VAR_17 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9);
 else
  VAR_17 = FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);

 VAR_13->fp.last_script_invoc = (VAR_9 << 1 | VAR_8);

 VAR_16 = FUNC_0(VAR_6, 0, VAR_5) & ~0x50000;
 FUNC_1(VAR_6, 0, VAR_5, VAR_16 | VAR_15);

 FUNC_7(VAR_12, VAR_4, 0);

 return VAR_17;
}
