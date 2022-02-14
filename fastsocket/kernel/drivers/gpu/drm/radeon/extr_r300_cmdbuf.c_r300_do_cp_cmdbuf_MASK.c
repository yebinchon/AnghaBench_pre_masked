
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_30__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_27__ ;
typedef struct TYPE_34__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_4__* sarea_priv; } ;
struct drm_file {TYPE_27__* master; } ;
struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; TYPE_5__* dev_private; } ;
struct drm_buf {int pending; struct drm_file* file_priv; } ;
typedef int stack_header ;
struct TYPE_40__ {int flags; } ;
typedef TYPE_5__ drm_radeon_private_t ;
struct TYPE_41__ {scalar_t__ nbox; TYPE_30__* buffer; } ;
typedef TYPE_6__ drm_radeon_kcmd_buffer_t ;
struct TYPE_38__ {int cmd_type; } ;
struct TYPE_36__ {int buf_idx; } ;
struct TYPE_34__ {int count; } ;
struct TYPE_42__ {TYPE_3__ header; TYPE_2__ dma; TYPE_1__ delay; } ;
typedef TYPE_7__ drm_r300_cmd_header_t ;
struct TYPE_39__ {int last_dispatch; } ;
struct TYPE_37__ {int iterator; } ;
struct TYPE_35__ {struct drm_radeon_master_private* driver_priv; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* FUNC_7 (TYPE_30__*,int,TYPE_7__*) ;
 int FUNC_8 (TYPE_30__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_7__) ;
 int FUNC_10 (struct drm_device*,TYPE_27__*,struct drm_buf*) ;
 int FUNC_11 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_12 (TYPE_5__*,TYPE_6__*,TYPE_7__) ;
 int FUNC_13 (TYPE_5__*,TYPE_6__*,TYPE_7__) ;
 int FUNC_14 (TYPE_5__*,TYPE_6__*,TYPE_7__) ;
 int FUNC_15 (TYPE_5__*,TYPE_6__*,TYPE_7__) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*,TYPE_6__*,TYPE_7__) ;

int FUNC_18(struct drm_device *VAR_6,
        struct drm_file *VAR_7,
        drm_radeon_kcmd_buffer_t *VAR_8)
{
 drm_radeon_private_t *VAR_9 = VAR_6->dev_private;
 struct drm_radeon_master_private *VAR_10 = VAR_7->master->driver_priv;
 struct drm_device_dma *VAR_11 = VAR_6->dma;
 struct drm_buf *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14 = 0;

 FUNC_3("\n");


 FUNC_16(VAR_9);

 if (VAR_8->nbox <= VAR_2) {
  VAR_14 = FUNC_11(VAR_9, VAR_8, 0);
  if (VAR_14)
   goto cleanup;
 }

 while (FUNC_8(VAR_8->buffer)
   >= sizeof(drm_r300_cmd_header_t)) {
  int VAR_15;
  drm_r300_cmd_header_t *VAR_16, VAR_17;

  VAR_16 = FUNC_7(VAR_8->buffer,
    sizeof(VAR_17), &VAR_17);

  switch (VAR_16->header.cmd_type) {
  case 133:
   FUNC_3("R300_CMD_PACKET0\n");
   VAR_14 = FUNC_12(VAR_9, VAR_8, *VAR_16);
   if (VAR_14) {
    FUNC_4("r300_emit_packet0 failed\n");
    goto cleanup;
   }
   break;

  case 129:
   FUNC_3("R300_CMD_VPU\n");
   VAR_14 = FUNC_15(VAR_9, VAR_8, *VAR_16);
   if (VAR_14) {
    FUNC_4("r300_emit_vpu failed\n");
    goto cleanup;
   }
   break;

  case 132:
   FUNC_3("R300_CMD_PACKET3\n");
   VAR_14 = FUNC_13(VAR_9, VAR_8, *VAR_16);
   if (VAR_14) {
    FUNC_4("r300_emit_packet3 failed\n");
    goto cleanup;
   }
   break;

  case 134:
   FUNC_3("R300_CMD_END3D\n");
   FUNC_16(VAR_9);
   break;

  case 136:

   FUNC_3("R300_CMD_CP_DELAY\n");
   {
    int VAR_18;
    VAR_5;

    FUNC_1(VAR_16->delay.count);
    for (VAR_18 = 0; VAR_18 < VAR_16->delay.count; VAR_18++)
     FUNC_5(VAR_3);
    FUNC_0();
   }
   break;

  case 135:
   FUNC_3("RADEON_CMD_DMA_DISCARD\n");
   VAR_15 = VAR_16->dma.buf_idx;
   if (VAR_15 < 0 || VAR_15 >= VAR_11->buf_count) {
    FUNC_4("buffer index %d (of %d max)\n",
       VAR_15, VAR_11->buf_count - 1);
    VAR_14 = -VAR_1;
    goto cleanup;
   }

   VAR_12 = VAR_11->buflist[VAR_15];
   if (VAR_12->file_priv != VAR_7 || VAR_12->pending) {
    FUNC_4("bad buffer %p %p %d\n",
       VAR_12->file_priv, VAR_7,
       VAR_12->pending);
    VAR_14 = -VAR_1;
    goto cleanup;
   }

   VAR_13 = 1;
   FUNC_10(VAR_6, VAR_7->master, VAR_12);
   break;

  case 128:
   FUNC_3("R300_CMD_WAIT\n");
   FUNC_9(VAR_9, *VAR_16);
   break;

  case 130:
   FUNC_3("R300_CMD_SCRATCH\n");
   VAR_14 = FUNC_17(VAR_9, VAR_8, *VAR_16);
   if (VAR_14) {
    FUNC_4("r300_scratch failed\n");
    goto cleanup;
   }
   break;

  case 131:
   if ((VAR_9->flags & VAR_4) < VAR_0) {
    FUNC_4("Calling r500 command on r300 card\n");
    VAR_14 = -VAR_1;
    goto cleanup;
   }
   FUNC_3("R300_CMD_R500FP\n");
   VAR_14 = FUNC_14(VAR_9, VAR_8, *VAR_16);
   if (VAR_14) {
    FUNC_4("r300_emit_r500fp failed\n");
    goto cleanup;
   }
   break;
  default:
   FUNC_4("bad cmd_type %i at byte %d\n",
      VAR_16->header.cmd_type,
      VAR_8->buffer->iterator - (int)sizeof(*VAR_16));
   VAR_14 = -VAR_1;
   goto cleanup;
  }
 }

 FUNC_3("END\n");

      cleanup:
 FUNC_16(VAR_9);







 if (VAR_13) {
  VAR_5;


  FUNC_1(2);
  FUNC_6(VAR_10->sarea_priv->last_dispatch);
  FUNC_0();
 }

 FUNC_2();

 return VAR_14;
}
