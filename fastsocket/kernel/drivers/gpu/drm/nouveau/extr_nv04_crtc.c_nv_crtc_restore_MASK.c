
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct nouveau_crtc {int index; int last_dpms; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_6__ {TYPE_1__* crtc_reg; } ;
struct TYPE_5__ {TYPE_3__ saved_reg; } ;
struct TYPE_4__ {int * CRTC; } ;


 int FUNC_0 (struct drm_device*,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 struct nouveau_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_device*,int,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int,int ) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_2)
{
 struct nouveau_crtc *VAR_3 = FUNC_1(VAR_2);
 struct drm_device *VAR_4 = VAR_2->dev;
 int VAR_5 = VAR_3->index;
 uint8_t VAR_6 = FUNC_3(VAR_4)->saved_reg.crtc_reg[VAR_5].CRTC[VAR_0];

 if (FUNC_5(VAR_2->dev))
  FUNC_0(VAR_2->dev, VAR_5);

 FUNC_2(VAR_2->dev, VAR_5, &FUNC_3(VAR_4)->saved_reg);
 FUNC_4(VAR_2->dev, VAR_5, VAR_6);

 VAR_3->last_dpms = VAR_1;
}
