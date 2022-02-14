
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_page_flip_state {int y; int pitch; int x; int bpp; scalar_t__ offset; int crtc; } ;
struct nouveau_drm {int dev; int device; } ;
struct nouveau_channel {struct nouveau_drm* drm; } ;
struct TYPE_2__ {scalar_t__ card_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nouveau_channel*,struct nouveau_page_flip_state*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

int
FUNC_3(void *VAR_1)
{
 struct nouveau_channel *VAR_2 = VAR_1;
 struct nouveau_drm *VAR_3 = VAR_2->drm;
 struct nouveau_page_flip_state VAR_4;

 if (!FUNC_0(VAR_2, &VAR_4)) {
  if (FUNC_1(VAR_3->device)->card_type < VAR_0) {
   FUNC_2(VAR_3->dev, VAR_4.crtc, VAR_4.offset +
      VAR_4.y * VAR_4.pitch +
      VAR_4.x * VAR_4.bpp / 8);
  }
 }

 return 0;
}
