
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_2__* sarea_priv; } ;
struct drm_radeon_driver_file_fields {int radeon_fb_delta; } ;
struct drm_file {struct drm_radeon_driver_file_fields* driver_priv; TYPE_1__* master; } ;
struct drm_device {TYPE_5__* dev_private; } ;
struct TYPE_9__ {int param; int value; } ;
typedef TYPE_4__ drm_radeon_setparam_t ;
struct TYPE_8__ {int table_size; } ;
struct TYPE_10__ {int fb_location; int pcigart_offset; int pcigart_offset_set; int new_memmap; TYPE_3__ gart_info; int back_pitch_offset; int front_pitch_offset; } ;
typedef TYPE_5__ drm_radeon_private_t ;
struct TYPE_7__ {int tiling_enabled; } ;
struct TYPE_6__ {struct drm_radeon_master_private* driver_priv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_1 (struct drm_device*,int) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_3->dev_private;
 struct drm_radeon_master_private *VAR_7 = VAR_5->master->driver_priv;
 drm_radeon_setparam_t *VAR_8 = VAR_4;
 struct drm_radeon_driver_file_fields *VAR_9;

 switch (VAR_8->param) {
 case 133:
  VAR_9 = VAR_5->driver_priv;
  VAR_9->radeon_fb_delta = VAR_6->fb_location -
      VAR_8->value;
  break;
 case 129:
  if (VAR_8->value == 0) {
   FUNC_0("color tiling disabled\n");
   VAR_6->front_pitch_offset &= ~VAR_1;
   VAR_6->back_pitch_offset &= ~VAR_1;
   if (VAR_7->sarea_priv)
    VAR_7->sarea_priv->tiling_enabled = 0;
  } else if (VAR_8->value == 1) {
   FUNC_0("color tiling enabled\n");
   VAR_6->front_pitch_offset |= VAR_1;
   VAR_6->back_pitch_offset |= VAR_1;
   if (VAR_7->sarea_priv)
    VAR_7->sarea_priv->tiling_enabled = 1;
  }
  break;
 case 131:
  VAR_6->pcigart_offset = VAR_8->value;
  VAR_6->pcigart_offset_set = 1;
  break;
 case 132:
  VAR_6->new_memmap = VAR_8->value;
  break;
 case 130:
  VAR_6->gart_info.table_size = VAR_8->value;
  if (VAR_6->gart_info.table_size < VAR_2)
   VAR_6->gart_info.table_size = VAR_2;
  break;
 case 128:
  return FUNC_1(VAR_3, VAR_8->value);
  break;
 default:
  FUNC_0("Invalid parameter %d\n", VAR_8->param);
  return -VAR_0;
 }

 return 0;
}
