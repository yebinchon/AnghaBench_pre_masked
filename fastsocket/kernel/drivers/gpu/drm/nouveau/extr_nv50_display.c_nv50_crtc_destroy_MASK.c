
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int base; } ;
struct TYPE_11__ {int base; } ;
struct TYPE_10__ {int base; } ;
struct TYPE_9__ {int base; } ;
struct nv50_head {TYPE_4__ curs; TYPE_3__ sync; TYPE_2__ oimm; TYPE_1__ ovly; } ;
struct nv50_disp {int core; } ;
struct nouveau_event {int lock; } ;
struct TYPE_15__ {scalar_t__ nvbo; } ;
struct TYPE_14__ {scalar_t__ nvbo; } ;
struct TYPE_13__ {int head; } ;
struct nouveau_crtc {TYPE_7__ lut; TYPE_6__ cursor; TYPE_5__ vblank; } ;
struct drm_crtc {int dev; } ;
struct TYPE_16__ {struct nouveau_event* vblank; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 struct nouveau_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int ) ;
 TYPE_8__* FUNC_8 (int ) ;
 struct nv50_disp* FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 struct nv50_head* FUNC_11 (struct drm_crtc*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_15(struct drm_crtc *VAR_0)
{
 struct nouveau_event *VAR_1 = FUNC_8(FUNC_7(VAR_0->dev))->vblank;
 struct nouveau_crtc *VAR_2 = FUNC_6(VAR_0);
 struct nv50_disp *VAR_3 = FUNC_9(VAR_0->dev);
 struct nv50_head *VAR_4 = FUNC_11(VAR_0);
 unsigned long VAR_5;

 FUNC_10(VAR_3->core, &VAR_4->ovly.base);
 FUNC_12(VAR_3->core, &VAR_4->oimm.base);
 FUNC_10(VAR_3->core, &VAR_4->sync.base);
 FUNC_12(VAR_3->core, &VAR_4->curs.base);

 FUNC_13(&VAR_1->lock, VAR_5);
 FUNC_2(&VAR_2->vblank.head);
 FUNC_14(&VAR_1->lock, VAR_5);

 FUNC_4(VAR_2->cursor.nvbo);
 if (VAR_2->cursor.nvbo)
  FUNC_5(VAR_2->cursor.nvbo);
 FUNC_3(((void*)0), &VAR_2->cursor.nvbo);
 FUNC_4(VAR_2->lut.nvbo);
 if (VAR_2->lut.nvbo)
  FUNC_5(VAR_2->lut.nvbo);
 FUNC_3(((void*)0), &VAR_2->lut.nvbo);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
