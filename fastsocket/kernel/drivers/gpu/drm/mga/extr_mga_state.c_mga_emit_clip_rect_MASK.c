
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_clip_rect {int x2; int x1; unsigned int y1; int y2; } ;
struct TYPE_7__ {int dwgctl; } ;
struct TYPE_5__ {TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_6__ {unsigned int front_pitch; scalar_t__ chipset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,scalar_t__,int,int ,unsigned int,scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(drm_mga_private_t *VAR_9,
          struct drm_clip_rect *VAR_10)
{
 drm_mga_sarea_t *VAR_11 = VAR_9->sarea_priv;
 drm_mga_context_regs_t *VAR_12 = &VAR_11->context_state;
 unsigned int VAR_13 = VAR_9->front_pitch;
 VAR_0;

 FUNC_1(2);



 if (VAR_9->chipset >= VAR_1) {
  FUNC_2(VAR_4, VAR_12->dwgctl,
     VAR_6 + VAR_5, 0x80000000,
     VAR_4, VAR_12->dwgctl,
     VAR_6 + VAR_5, 0x80000000);
 }
 FUNC_2(VAR_3, 0x00000000,
    VAR_2, ((VAR_10->x2 - 1) << 16) | VAR_10->x1,
    VAR_8, VAR_10->y1 * VAR_13, VAR_7, (VAR_10->y2 - 1) * VAR_13);

 FUNC_0();
}
