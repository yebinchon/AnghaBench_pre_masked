
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__** crtcs; } ;
struct radeon_device {int num_crtc; TYPE_2__ mode_info; } ;
struct radeon_crtc {int crtc_id; int pll_id; int * connector; int * encoder; scalar_t__ adjusted_clock; } ;
struct radeon_atom_ss {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_3__ {int pll_id; scalar_t__ enabled; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_crtc*,int ) ;
 int FUNC_3 (struct drm_crtc*,int,int,int ,int ,int ,int ,int ,int ,int ,int ,int,struct radeon_atom_ss*) ;
 int FUNC_4 (struct drm_crtc*,int ) ;
 struct radeon_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_4)
{
 struct radeon_crtc *VAR_5 = FUNC_5(VAR_4);
 struct drm_device *VAR_6 = VAR_4->dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 struct radeon_atom_ss VAR_8;
 int VAR_9;

 FUNC_2(VAR_4, VAR_3);
 if (FUNC_0(VAR_7))
  FUNC_4(VAR_4, VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_7->num_crtc; VAR_9++) {
  if (VAR_7->mode_info.crtcs[VAR_9] &&
      VAR_7->mode_info.crtcs[VAR_9]->enabled &&
      VAR_9 != VAR_5->crtc_id &&
      VAR_5->pll_id == VAR_7->mode_info.crtcs[VAR_9]->pll_id) {



   goto done;
  }
 }

 switch (VAR_5->pll_id) {
 case 129:
 case 128:

  FUNC_3(VAR_4, VAR_5->crtc_id, VAR_5->pll_id,
       0, 0, VAR_0, 0, 0, 0, 0, 0, 0, &VAR_8);
  break;
 case 130:

  if (FUNC_1(VAR_7))
   FUNC_3(VAR_4, VAR_5->crtc_id, VAR_5->pll_id,
        0, 0, VAR_0, 0, 0, 0, 0, 0, 0, &VAR_8);
  break;
 default:
  break;
 }
done:
 VAR_5->pll_id = VAR_2;
 VAR_5->adjusted_clock = 0;
 VAR_5->encoder = ((void*)0);
 VAR_5->connector = ((void*)0);
}
