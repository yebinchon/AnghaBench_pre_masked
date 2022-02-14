
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct drm_device {scalar_t__ agp_buffer_token; TYPE_1__* dma; TYPE_9__* agp_buffer_map; TYPE_4__* dev_private; } ;
typedef int drm_savage_sarea_t ;
struct TYPE_16__ {scalar_t__ type; int handle; int size; scalar_t__ offset; } ;
struct TYPE_13__ {int fb_bpp; int front_pitch; int back_pitch; int depth_bpp; int depth_pitch; scalar_t__ chipset; unsigned int front_bd; unsigned int back_bd; unsigned int depth_bd; int emit_clip_rect; int wait_evnt; int wait_fifo; scalar_t__ volatile* status_ptr; scalar_t__ volatile event_counter; TYPE_3__* status; int status_used_mask; TYPE_2__* mmio; scalar_t__ volatile* bci_ptr; scalar_t__ event_wrap; TYPE_8__* sarea; int * sarea_priv; int dma_flush; TYPE_9__ fake_dma; TYPE_9__* cmd_dma; int dma_type; int * agp_textures; int texture_size; int texture_offset; int depth_offset; int back_offset; int front_offset; int bci_threshold_hi; int bci_threshold_lo; int cob_size; } ;
typedef TYPE_4__ drm_savage_private_t ;
struct TYPE_14__ {int fb_bpp; int depth_bpp; int front_pitch; int back_pitch; int depth_pitch; scalar_t__ status_offset; scalar_t__ buffers_offset; scalar_t__ agp_textures_offset; scalar_t__ cmd_dma_offset; int sarea_priv_offset; int texture_size; int texture_offset; int depth_offset; int back_offset; int front_offset; int dma_type; int bci_threshold_hi; int bci_threshold_lo; int cob_size; } ;
typedef TYPE_5__ drm_savage_init_t ;
struct TYPE_15__ {scalar_t__ handle; } ;
struct TYPE_12__ {scalar_t__ handle; } ;
struct TYPE_11__ {scalar_t__ handle; } ;
struct TYPE_10__ {scalar_t__ buflist; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 void* FUNC_3 (struct drm_device*,scalar_t__) ;
 int FUNC_4 (TYPE_9__*,struct drm_device*) ;
 TYPE_8__* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct drm_device*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_9 (struct drm_device*) ;

__attribute__((used)) static int FUNC_10(struct drm_device * VAR_28, drm_savage_init_t * VAR_29)
{
 drm_savage_private_t *VAR_30 = VAR_28->dev_private;

 if (VAR_29->fb_bpp != 16 && VAR_29->fb_bpp != 32) {
  FUNC_1("invalid frame buffer bpp %d!\n", VAR_29->fb_bpp);
  return -VAR_0;
 }
 if (VAR_29->depth_bpp != 16 && VAR_29->depth_bpp != 32) {
  FUNC_1("invalid depth buffer bpp %d!\n", VAR_29->fb_bpp);
  return -VAR_0;
 }
 if (VAR_29->dma_type != VAR_11 &&
     VAR_29->dma_type != VAR_12) {
  FUNC_1("invalid dma memory type %d!\n", VAR_29->dma_type);
  return -VAR_0;
 }

 VAR_30->cob_size = VAR_29->cob_size;
 VAR_30->bci_threshold_lo = VAR_29->bci_threshold_lo;
 VAR_30->bci_threshold_hi = VAR_29->bci_threshold_hi;
 VAR_30->dma_type = VAR_29->dma_type;

 VAR_30->fb_bpp = VAR_29->fb_bpp;
 VAR_30->front_offset = VAR_29->front_offset;
 VAR_30->front_pitch = VAR_29->front_pitch;
 VAR_30->back_offset = VAR_29->back_offset;
 VAR_30->back_pitch = VAR_29->back_pitch;
 VAR_30->depth_bpp = VAR_29->depth_bpp;
 VAR_30->depth_offset = VAR_29->depth_offset;
 VAR_30->depth_pitch = VAR_29->depth_pitch;

 VAR_30->texture_offset = VAR_29->texture_offset;
 VAR_30->texture_size = VAR_29->texture_size;

 VAR_30->sarea = FUNC_5(VAR_28);
 if (!VAR_30->sarea) {
  FUNC_1("could not find sarea!\n");
  FUNC_8(VAR_28);
  return -VAR_0;
 }
 if (VAR_29->status_offset != 0) {
  VAR_30->status = FUNC_3(VAR_28, VAR_29->status_offset);
  if (!VAR_30->status) {
   FUNC_1("could not find shadow status region!\n");
   FUNC_8(VAR_28);
   return -VAR_0;
  }
 } else {
  VAR_30->status = ((void*)0);
 }
 if (VAR_30->dma_type == VAR_11 && VAR_29->buffers_offset) {
  VAR_28->agp_buffer_token = VAR_29->buffers_offset;
  VAR_28->agp_buffer_map = FUNC_3(VAR_28,
             VAR_29->buffers_offset);
  if (!VAR_28->agp_buffer_map) {
   FUNC_1("could not find DMA buffer region!\n");
   FUNC_8(VAR_28);
   return -VAR_0;
  }
  FUNC_4(VAR_28->agp_buffer_map, VAR_28);
  if (!VAR_28->agp_buffer_map->handle) {
   FUNC_1("failed to ioremap DMA buffer region!\n");
   FUNC_8(VAR_28);
   return -VAR_1;
  }
 }
 if (VAR_29->agp_textures_offset) {
  VAR_30->agp_textures =
      FUNC_3(VAR_28, VAR_29->agp_textures_offset);
  if (!VAR_30->agp_textures) {
   FUNC_1("could not find agp texture region!\n");
   FUNC_8(VAR_28);
   return -VAR_0;
  }
 } else {
  VAR_30->agp_textures = ((void*)0);
 }

 if (VAR_29->cmd_dma_offset) {
  if (FUNC_2(VAR_30->chipset)) {
   FUNC_1("command DMA not supported on "
      "Savage3D/MX/IX.\n");
   FUNC_8(VAR_28);
   return -VAR_0;
  }
  if (VAR_28->dma && VAR_28->dma->buflist) {
   FUNC_1("command and vertex DMA not supported "
      "at the same time.\n");
   FUNC_8(VAR_28);
   return -VAR_0;
  }
  VAR_30->cmd_dma = FUNC_3(VAR_28, VAR_29->cmd_dma_offset);
  if (!VAR_30->cmd_dma) {
   FUNC_1("could not find command DMA region!\n");
   FUNC_8(VAR_28);
   return -VAR_0;
  }
  if (VAR_30->dma_type == VAR_11) {
   if (VAR_30->cmd_dma->type != VAR_16) {
    FUNC_1("AGP command DMA region is not a "
       "_DRM_AGP map!\n");
    FUNC_8(VAR_28);
    return -VAR_0;
   }
   FUNC_4(VAR_30->cmd_dma, VAR_28);
   if (!VAR_30->cmd_dma->handle) {
    FUNC_1("failed to ioremap command "
       "DMA region!\n");
    FUNC_8(VAR_28);
    return -VAR_1;
   }
  } else if (VAR_30->cmd_dma->type != VAR_17) {
   FUNC_1("PCI command DMA region is not a "
      "_DRM_CONSISTENT map!\n");
   FUNC_8(VAR_28);
   return -VAR_0;
  }
 } else {
  VAR_30->cmd_dma = ((void*)0);
 }

 VAR_30->dma_flush = VAR_24;
 if (!VAR_30->cmd_dma) {
  FUNC_0("falling back to faked command DMA.\n");
  VAR_30->fake_dma.offset = 0;
  VAR_30->fake_dma.size = VAR_13;
  VAR_30->fake_dma.type = VAR_18;
  VAR_30->fake_dma.handle = FUNC_6(VAR_13,
          VAR_2);
  if (!VAR_30->fake_dma.handle) {
   FUNC_1("could not allocate faked DMA buffer!\n");
   FUNC_8(VAR_28);
   return -VAR_1;
  }
  VAR_30->cmd_dma = &VAR_30->fake_dma;
  VAR_30->dma_flush = VAR_27;
 }

 VAR_30->sarea_priv =
     (drm_savage_sarea_t *) ((uint8_t *) VAR_30->sarea->handle +
        VAR_29->sarea_priv_offset);


 {
  unsigned int VAR_31;
  unsigned int VAR_32;
  unsigned int VAR_33, VAR_34, VAR_35;
  if (VAR_30->chipset <= VAR_3) {
   VAR_31 = VAR_30->fb_bpp == 16 ?
       VAR_7 : VAR_8;
   VAR_32 = VAR_30->depth_bpp == 16 ?
       VAR_7 : VAR_8;
  } else {
   VAR_31 = VAR_9;
   VAR_32 = VAR_9;
  }
  VAR_33 = VAR_30->front_pitch / (VAR_30->fb_bpp / 8);
  VAR_34 = VAR_30->back_pitch / (VAR_30->fb_bpp / 8);
  VAR_35 =
      VAR_30->depth_pitch / (VAR_30->depth_bpp / 8);

  VAR_30->front_bd = VAR_33 | VAR_6 |
      (VAR_30->fb_bpp << VAR_5) |
      (VAR_31 << VAR_10);

  VAR_30->back_bd = VAR_34 | VAR_6 |
      (VAR_30->fb_bpp << VAR_5) |
      (VAR_31 << VAR_10);

  VAR_30->depth_bd = VAR_35 | VAR_6 |
      (VAR_30->depth_bpp << VAR_5) |
      (VAR_32 << VAR_10);
 }


 VAR_30->event_counter = 0;
 VAR_30->event_wrap = 0;
 VAR_30->bci_ptr = (volatile uint32_t *)
     ((uint8_t *) VAR_30->mmio->handle + VAR_4);
 if (FUNC_2(VAR_30->chipset)) {
  VAR_30->status_used_mask = VAR_14;
 } else {
  VAR_30->status_used_mask = VAR_15;
 }
 if (VAR_30->status != ((void*)0)) {
  VAR_30->status_ptr =
      (volatile uint32_t *)VAR_30->status->handle;
  VAR_30->wait_fifo = VAR_23;
  VAR_30->wait_evnt = VAR_20;
  VAR_30->status_ptr[1023] = VAR_30->event_counter;
 } else {
  VAR_30->status_ptr = ((void*)0);
  if (FUNC_2(VAR_30->chipset)) {
   VAR_30->wait_fifo = VAR_21;
  } else {
   VAR_30->wait_fifo = VAR_22;
  }
  VAR_30->wait_evnt = VAR_19;
 }


 if (FUNC_2(VAR_30->chipset))
  VAR_30->emit_clip_rect = VAR_25;
 else
  VAR_30->emit_clip_rect = VAR_26;

 if (FUNC_9(VAR_28) < 0) {
  FUNC_1("could not initialize freelist\n");
  FUNC_8(VAR_28);
  return -VAR_1;
 }

 if (FUNC_7(VAR_30) < 0) {
  FUNC_1("could not initialize command DMA\n");
  FUNC_8(VAR_28);
  return -VAR_1;
 }

 return 0;
}
