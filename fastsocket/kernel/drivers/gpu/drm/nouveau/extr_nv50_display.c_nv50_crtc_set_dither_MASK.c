
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct TYPE_5__ {TYPE_1__* fb; int dev; } ;
struct nouveau_crtc {int index; TYPE_2__ base; } ;
struct TYPE_6__ {int bpc; } ;
struct drm_connector {TYPE_3__ display_info; } ;
struct nouveau_connector {scalar_t__ dithering_mode; int dithering_depth; struct drm_connector base; } ;
struct TYPE_4__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,struct nv50_mast*) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (struct nv50_mast*,int) ;
 struct nouveau_connector* FUNC_4 (struct nouveau_crtc*) ;
 struct nv50_mast* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct nv50_mast*) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_crtc *VAR_6, bool VAR_7)
{
 struct nv50_mast *VAR_8 = FUNC_5(VAR_6->base.dev);
 struct nouveau_connector *VAR_9;
 struct drm_connector *VAR_10;
 u32 *VAR_11, VAR_12 = 0x00;

 VAR_9 = FUNC_4(VAR_6);
 VAR_10 = &VAR_9->base;
 if (VAR_9->dithering_mode == VAR_2) {
  if (VAR_6->base.fb->depth > VAR_10->display_info.bpc * 3)
   VAR_12 = VAR_3;
 } else {
  VAR_12 = VAR_9->dithering_mode;
 }

 if (VAR_9->dithering_depth == VAR_1) {
  if (VAR_10->display_info.bpc >= 8)
   VAR_12 |= VAR_0;
 } else {
  VAR_12 |= VAR_9->dithering_depth;
 }

 VAR_11 = FUNC_3(VAR_8, 4);
 if (VAR_11) {
  if (FUNC_6(VAR_8) < VAR_4) {
   FUNC_2(VAR_11, 0x08a0 + (VAR_6->index * 0x0400), 1);
   FUNC_0(VAR_11, VAR_12);
  } else
  if (FUNC_6(VAR_8) < VAR_5) {
   FUNC_2(VAR_11, 0x0490 + (VAR_6->index * 0x0300), 1);
   FUNC_0(VAR_11, VAR_12);
  } else {
   FUNC_2(VAR_11, 0x04a0 + (VAR_6->index * 0x0300), 1);
   FUNC_0(VAR_11, VAR_12);
  }

  if (VAR_7) {
   FUNC_2(VAR_11, 0x0080, 1);
   FUNC_0(VAR_11, 0x00000000);
  }
  FUNC_1(VAR_11, VAR_8);
 }

 return 0;
}
