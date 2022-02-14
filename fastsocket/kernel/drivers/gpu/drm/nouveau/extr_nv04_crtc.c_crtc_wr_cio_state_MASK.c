
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_crtc_reg {int * CRTC; } ;
struct drm_crtc {int dev; } ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 TYPE_1__* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_2(struct drm_crtc *VAR_0, struct nv04_crtc_reg *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->dev, FUNC_1(VAR_0)->index, VAR_2,
         VAR_1->CRTC[VAR_2]);
}
