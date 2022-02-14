
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {scalar_t__ is_atom_bios; TYPE_1__ mode_info; } ;
struct TYPE_4__ {scalar_t__ num_connectors; struct drm_connector** connectors; int * crtc; } ;
struct radeon_crtc {int crtc_id; int* lut_r; int* lut_g; int* lut_b; TYPE_2__ mode_set; int base; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 struct radeon_crtc* FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_device*,struct radeon_crtc*) ;
 int VAR_2 ;
 int FUNC_5 (struct drm_device*,struct radeon_crtc*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_4, int VAR_5)
{
 struct radeon_device *VAR_6 = VAR_4->dev_private;
 struct radeon_crtc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(struct radeon_crtc) + (VAR_1 * sizeof(struct drm_connector *)), VAR_0);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_1(VAR_4, &VAR_7->base, &VAR_2);

 FUNC_2(&VAR_7->base, 256);
 VAR_7->crtc_id = VAR_5;
 VAR_6->mode_info.crtcs[VAR_5] = VAR_7;







 for (VAR_8 = 0; VAR_8 < 256; VAR_8++) {
  VAR_7->lut_r[VAR_8] = VAR_8 << 2;
  VAR_7->lut_g[VAR_8] = VAR_8 << 2;
  VAR_7->lut_b[VAR_8] = VAR_8 << 2;
 }

 if (VAR_6->is_atom_bios && (FUNC_0(VAR_6) || VAR_3))
  FUNC_4(VAR_4, VAR_7);
 else
  FUNC_5(VAR_4, VAR_7);
}
