
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_crtc_reg {int * CRTC; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct drm_device *VAR_0, int VAR_1,
      struct nv04_crtc_reg *VAR_2, int VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2->CRTC[VAR_3]);
}
