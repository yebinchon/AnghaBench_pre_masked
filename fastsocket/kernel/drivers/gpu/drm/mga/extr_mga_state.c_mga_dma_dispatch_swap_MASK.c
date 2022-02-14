
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_4__* dev_private; } ;
struct drm_clip_rect {int y2; int y1; int x1; int x2; } ;
struct TYPE_6__ {int wrap; int head; } ;
struct TYPE_10__ {int plnwt; int dwgctl; } ;
struct TYPE_8__ {int nbox; TYPE_1__ last_frame; struct drm_clip_rect* boxes; TYPE_5__ context_state; } ;
typedef TYPE_3__ drm_mga_sarea_t ;
struct TYPE_7__ {int last_wrap; int tail; } ;
struct TYPE_9__ {int front_offset; int maccess; int back_offset; int front_pitch; TYPE_2__ prim; TYPE_3__* sarea_priv; } ;
typedef TYPE_4__ drm_mga_private_t ;
typedef TYPE_5__ drm_mga_context_regs_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,scalar_t__,int,scalar_t__,int,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_15)
{
 drm_mga_private_t *VAR_16 = VAR_15->dev_private;
 drm_mga_sarea_t *VAR_17 = VAR_16->sarea_priv;
 drm_mga_context_regs_t *VAR_18 = &VAR_17->context_state;
 struct drm_clip_rect *VAR_19 = VAR_17->boxes;
 int VAR_20 = VAR_17->nbox;
 int VAR_21;
 VAR_0;
 FUNC_3("\n");

 VAR_17->last_frame.head = VAR_16->prim.tail;
 VAR_17->last_frame.wrap = VAR_16->prim.last_wrap;

 FUNC_1(4 + VAR_20);

 FUNC_2(VAR_4, 0x00000000,
    VAR_4, 0x00000000,
    VAR_8, 0x00007100, VAR_8, 0x00007000);

 FUNC_2(VAR_5, VAR_16->front_offset,
    VAR_11, VAR_16->maccess,
    VAR_13, VAR_16->back_offset,
    VAR_3, VAR_16->front_pitch);

 FUNC_2(VAR_4, 0x00000000,
    VAR_4, 0x00000000,
    VAR_12, 0xffffffff, VAR_6, VAR_7);

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  struct drm_clip_rect *VAR_22 = &VAR_19[VAR_21];
  u32 VAR_23 = VAR_22->y2 - VAR_22->y1;
  u32 VAR_24 = VAR_22->y1 * VAR_16->front_pitch;

  FUNC_3("   from=%d,%d to=%d,%d\n",
     VAR_22->x1, VAR_22->y1, VAR_22->x2, VAR_22->y2);

  FUNC_2(VAR_1, VAR_24 + VAR_22->x2 - 1,
     VAR_2, VAR_24 + VAR_22->x1,
     VAR_10, ((VAR_22->x2 - 1) << 16) | VAR_22->x1,
     VAR_14 + VAR_9, (VAR_22->y1 << 16) | VAR_23);
 }

 FUNC_2(VAR_4, 0x00000000,
    VAR_12, VAR_18->plnwt,
    VAR_13, VAR_16->front_offset, VAR_6, VAR_18->dwgctl);

 FUNC_0();

 FUNC_4();

 FUNC_3("... done.\n");
}
