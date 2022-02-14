
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ duallink_transition_clk; int strapless_is_24bit; scalar_t__ if_is_24bit; } ;
struct nvbios {TYPE_2__ fp; scalar_t__ fp_no_ddc; } ;
struct nouveau_encoder {TYPE_1__* dcb; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct nouveau_connector {scalar_t__ type; scalar_t__ edid; struct drm_display_mode* native_mode; struct nouveau_encoder* detected_encoder; } ;
struct drm_display_mode {scalar_t__ clock; } ;
struct TYPE_6__ {int bpc; } ;
struct drm_connector {TYPE_3__ display_info; int dev; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nouveau_connector* FUNC_0 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct drm_connector *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_3->dev);
 struct nouveau_connector *VAR_5 = FUNC_0(VAR_3);
 struct nouveau_encoder *VAR_6 = VAR_5->detected_encoder;
 struct nvbios *VAR_7 = &VAR_4->vbios;
 struct drm_display_mode *VAR_8 = VAR_5->native_mode;
 bool VAR_9;


 if (VAR_5->edid && VAR_3->display_info.bpc)
  return;


 if (VAR_5->type == VAR_1) {
  VAR_3->display_info.bpc = 6;
  return;
 }


 if (VAR_6->dcb->type != VAR_2) {
  VAR_3->display_info.bpc = 8;
  return;
 }

 VAR_3->display_info.bpc = 6;


 if (VAR_7->fp_no_ddc) {
  if (VAR_7->fp.if_is_24bit)
   VAR_3->display_info.bpc = 8;
  return;
 }




 if (VAR_5->edid &&
     VAR_5->type == VAR_0)
  VAR_9 = ((u8 *)VAR_5->edid)[121] == 2;
 else
  VAR_9 = VAR_8->clock >= VAR_7->fp.duallink_transition_clk;

 if ((!VAR_9 && (VAR_7->fp.strapless_is_24bit & 1)) ||
     ( VAR_9 && (VAR_7->fp.strapless_is_24bit & 2)))
  VAR_3->display_info.bpc = 8;
}
