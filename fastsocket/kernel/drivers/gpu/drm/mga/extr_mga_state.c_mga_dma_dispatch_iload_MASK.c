
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {int bus_address; scalar_t__ used; scalar_t__ pending; int idx; TYPE_4__* dev_private; } ;
struct TYPE_7__ {int dma_access; int front_offset; int front_pitch; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_8__ {int plnwt; } ;
typedef TYPE_3__ drm_mga_context_regs_t ;
struct TYPE_9__ {scalar_t__ dispatched; } ;
typedef TYPE_4__ drm_mga_buf_priv_t ;
struct TYPE_6__ {TYPE_3__ context_state; } ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int,scalar_t__,int,scalar_t__,int,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 () ;
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
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (struct drm_device*,struct drm_buf*) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_17, struct drm_buf *VAR_18,
       unsigned int VAR_19, unsigned int VAR_20)
{
 drm_mga_private_t *VAR_21 = VAR_17->dev_private;
 drm_mga_buf_priv_t *VAR_22 = VAR_18->dev_private;
 drm_mga_context_regs_t *VAR_23 = &VAR_21->sarea_priv->context_state;
 u32 VAR_24 =
     VAR_18->bus_address | VAR_21->dma_access | VAR_14;
 u32 VAR_25;
 VAR_0;
 FUNC_4("buf=%d used=%d\n", VAR_18->idx, VAR_18->used);

 VAR_25 = VAR_20 / 64;

 FUNC_2(5);

 FUNC_3(VAR_4, 0x00000000,
    VAR_4, 0x00000000,
    VAR_8, 0x00007100, VAR_8, 0x00007000);

 FUNC_3(VAR_5, VAR_19,
    VAR_11, 0x00000000, VAR_15, VAR_24, VAR_3, 64);

 FUNC_3(VAR_12, 64,
    VAR_13, 0xffffffff,
    VAR_4, 0x00000000, VAR_6, VAR_7);

 FUNC_3(VAR_1, 63,
    VAR_2, 0,
    VAR_10, (63 << 16) | 0, VAR_16 + VAR_9, VAR_25);

 FUNC_3(VAR_13, VAR_23->plnwt,
    VAR_15, VAR_21->front_offset,
    VAR_12, VAR_21->front_pitch, VAR_8, 0x00007000);

 FUNC_0();

 FUNC_1(VAR_22);

 VAR_18->pending = 0;
 VAR_18->used = 0;
 VAR_22->dispatched = 0;

 FUNC_6(VAR_17, VAR_18);

 FUNC_5();
}
