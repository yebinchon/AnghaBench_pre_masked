
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_mode_state {TYPE_1__* crtc_reg; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int * DAC; } ;


 int FUNC_0 (struct drm_device*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct nouveau_device* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nouveau_device*,scalar_t__) ;
 int FUNC_3 (struct nouveau_device*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_5, int VAR_6,
        struct nv04_mode_state *VAR_7)
{
 struct nouveau_device *VAR_8 = FUNC_1(VAR_5);
 int VAR_9 = VAR_6 * VAR_4, VAR_10;

 FUNC_3(VAR_8, VAR_1 + VAR_9,
    VAR_2);
 FUNC_3(VAR_8, VAR_3 + VAR_9, 0x0);

 for (VAR_10 = 0; VAR_10 < 768; VAR_10++) {
  VAR_7->crtc_reg[VAR_6].DAC[VAR_10] = FUNC_2(VAR_8,
    VAR_0 + VAR_9);
 }

 FUNC_0(VAR_5, VAR_6, 0);
}
