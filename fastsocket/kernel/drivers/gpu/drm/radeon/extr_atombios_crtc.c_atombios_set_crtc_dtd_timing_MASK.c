
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int atom_context; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct radeon_crtc {int h_border; int v_border; int crtc_id; } ;
struct drm_display_mode {int flags; scalar_t__ crtc_vsync_start; scalar_t__ crtc_vsync_end; scalar_t__ crtc_vdisplay; scalar_t__ crtc_hsync_start; scalar_t__ crtc_hsync_end; scalar_t__ crtc_hdisplay; scalar_t__ crtc_vblank_end; scalar_t__ crtc_hblank_end; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int args ;
struct TYPE_5__ {void* usAccess; } ;
struct TYPE_7__ {int ucH_Border; int ucV_Border; int ucCRTC; TYPE_1__ susModeMiscInfo; void* usV_SyncWidth; void* usV_SyncOffset; void* usH_SyncWidth; void* usH_SyncOffset; void* usV_Blanking_Time; void* usV_Size; void* usH_Blanking_Time; void* usH_Size; } ;
typedef TYPE_3__ SET_CRTC_USING_DTD_TIMING_PARAMETERS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int VAR_11 ;
 int FUNC_1 (int ,int,int *) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 struct radeon_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_5(struct drm_crtc *VAR_12,
        struct drm_display_mode *VAR_13)
{
 struct radeon_crtc *VAR_14 = FUNC_4(VAR_12);
 struct drm_device *VAR_15 = VAR_12->dev;
 struct radeon_device *VAR_16 = VAR_15->dev_private;
 SET_CRTC_USING_DTD_TIMING_PARAMETERS VAR_17;
 int VAR_18 = FUNC_0(VAR_5, VAR_11);
 u16 VAR_19 = 0;

 FUNC_3(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.usH_Size = FUNC_2(VAR_13->crtc_hdisplay - (VAR_14->h_border * 2));
 VAR_17.usH_Blanking_Time =
  FUNC_2(VAR_13->crtc_hblank_end - VAR_13->crtc_hdisplay + (VAR_14->h_border * 2));
 VAR_17.usV_Size = FUNC_2(VAR_13->crtc_vdisplay - (VAR_14->v_border * 2));
 VAR_17.usV_Blanking_Time =
  FUNC_2(VAR_13->crtc_vblank_end - VAR_13->crtc_vdisplay + (VAR_14->v_border * 2));
 VAR_17.usH_SyncOffset =
  FUNC_2(VAR_13->crtc_hsync_start - VAR_13->crtc_hdisplay + VAR_14->h_border);
 VAR_17.usH_SyncWidth =
  FUNC_2(VAR_13->crtc_hsync_end - VAR_13->crtc_hsync_start);
 VAR_17.usV_SyncOffset =
  FUNC_2(VAR_13->crtc_vsync_start - VAR_13->crtc_vdisplay + VAR_14->v_border);
 VAR_17.usV_SyncWidth =
  FUNC_2(VAR_13->crtc_vsync_end - VAR_13->crtc_vsync_start);
 VAR_17.ucH_Border = VAR_14->h_border;
 VAR_17.ucV_Border = VAR_14->v_border;

 if (VAR_13->flags & VAR_10)
  VAR_19 |= VAR_4;
 if (VAR_13->flags & VAR_9)
  VAR_19 |= VAR_2;
 if (VAR_13->flags & VAR_6)
  VAR_19 |= VAR_0;
 if (VAR_13->flags & VAR_8)
  VAR_19 |= VAR_3;
 if (VAR_13->flags & VAR_7)
  VAR_19 |= VAR_1;

 VAR_17.susModeMiscInfo.usAccess = FUNC_2(VAR_19);
 VAR_17.ucCRTC = VAR_14->crtc_id;

 FUNC_1(VAR_16->mode_info.atom_context, VAR_18, (uint32_t *)&VAR_17);
}
