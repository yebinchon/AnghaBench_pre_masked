
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_device {void* dev_private; TYPE_3__* sg; TYPE_1__* agp; TYPE_12__* agp_buffer_map; int agp_buffer_token; } ;
struct TYPE_20__ {scalar_t__ last_dispatch; scalar_t__ last_frame; } ;
typedef TYPE_4__ drm_r128_sarea_t ;
struct TYPE_16__ {scalar_t__ bus_addr; int gart_reg_if; int * addr; int table_size; int gart_table_location; int table_mask; } ;
struct TYPE_18__ {int size; int tail_mask; int high_mark; int size_l2qw; int * end; int * start; } ;
struct TYPE_21__ {int usec_timeout; int cce_mode; int cce_fifo_size; int front_offset; int front_pitch; int back_offset; int back_pitch; int depth_offset; int depth_pitch; int span_offset; int front_pitch_offset_c; int back_pitch_offset_c; int depth_pitch_offset_c; int span_pitch_offset_c; unsigned long cce_buffers_offset; TYPE_13__ gart_info; scalar_t__ is_pci; TYPE_4__* sarea_priv; TYPE_2__ ring; TYPE_12__* cce_ring; TYPE_12__* ring_rptr; TYPE_11__* sarea; void* agp_textures; void* mmio; void* depth_fmt; void* color_fmt; int idle_count; } ;
typedef TYPE_5__ drm_r128_private_t ;
struct TYPE_22__ {int usec_timeout; int cce_mode; int fb_bpp; int front_offset; int front_pitch; int back_offset; int back_pitch; int depth_bpp; int depth_offset; int depth_pitch; int span_offset; int sarea_priv_offset; int ring_size; int agp_textures_offset; int buffers_offset; int ring_rptr_offset; int ring_offset; int mmio_offset; scalar_t__ is_pci; } ;
typedef TYPE_6__ drm_r128_init_t ;
struct TYPE_19__ {scalar_t__ virtual; } ;
struct TYPE_17__ {unsigned long base; } ;
struct TYPE_15__ {void* handle; scalar_t__ offset; } ;
struct TYPE_14__ {scalar_t__ handle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct drm_device*,TYPE_13__*) ;
 void* FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (TYPE_12__*,struct drm_device*) ;
 TYPE_11__* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int) ;
 TYPE_5__* FUNC_10 (int,int ) ;
 int FUNC_11 (struct drm_device*,TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;

__attribute__((used)) static int FUNC_15(struct drm_device *VAR_13, drm_r128_init_t *VAR_14)
{
 drm_r128_private_t *VAR_15;
 int VAR_16;

 FUNC_1("\n");

 if (VAR_13->dev_private) {
  FUNC_1("called when already initialized\n");
  return -VAR_2;
 }

 VAR_15 = FUNC_10(sizeof(drm_r128_private_t), VAR_4);
 if (VAR_15 == ((void*)0))
  return -VAR_3;

 VAR_15->is_pci = VAR_14->is_pci;

 if (VAR_15->is_pci && !VAR_13->sg) {
  FUNC_2("PCI GART memory not allocated!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }

 VAR_15->usec_timeout = VAR_14->usec_timeout;
 if (VAR_15->usec_timeout < 1 ||
     VAR_15->usec_timeout > VAR_10) {
  FUNC_1("TIMEOUT problem!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }

 VAR_15->cce_mode = VAR_14->cce_mode;



 FUNC_4(&VAR_15->idle_count, 0);





 if ((VAR_14->cce_mode != 135) &&
     (VAR_14->cce_mode != 137) &&
     (VAR_14->cce_mode != 133) &&
     (VAR_14->cce_mode != 132)) {
  FUNC_1("Bad cce_mode!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }

 switch (VAR_14->cce_mode) {
 case 128:
  VAR_15->cce_fifo_size = 0;
  break;
 case 134:
 case 135:
  VAR_15->cce_fifo_size = 192;
  break;
 case 136:
 case 137:
  VAR_15->cce_fifo_size = 128;
  break;
 case 131:
 case 133:
 case 130:
 case 132:
 case 129:
  VAR_15->cce_fifo_size = 64;
  break;
 }

 switch (VAR_14->fb_bpp) {
 case 16:
  VAR_15->color_fmt = VAR_6;
  break;
 case 32:
 default:
  VAR_15->color_fmt = VAR_5;
  break;
 }
 VAR_15->front_offset = VAR_14->front_offset;
 VAR_15->front_pitch = VAR_14->front_pitch;
 VAR_15->back_offset = VAR_14->back_offset;
 VAR_15->back_pitch = VAR_14->back_pitch;

 switch (VAR_14->depth_bpp) {
 case 16:
  VAR_15->depth_fmt = VAR_6;
  break;
 case 24:
 case 32:
 default:
  VAR_15->depth_fmt = VAR_5;
  break;
 }
 VAR_15->depth_offset = VAR_14->depth_offset;
 VAR_15->depth_pitch = VAR_14->depth_pitch;
 VAR_15->span_offset = VAR_14->span_offset;

 VAR_15->front_pitch_offset_c = (((VAR_15->front_pitch / 8) << 21) |
       (VAR_15->front_offset >> 5));
 VAR_15->back_pitch_offset_c = (((VAR_15->back_pitch / 8) << 21) |
      (VAR_15->back_offset >> 5));
 VAR_15->depth_pitch_offset_c = (((VAR_15->depth_pitch / 8) << 21) |
       (VAR_15->depth_offset >> 5) |
       VAR_7);
 VAR_15->span_pitch_offset_c = (((VAR_15->depth_pitch / 8) << 21) |
      (VAR_15->span_offset >> 5));

 VAR_15->sarea = FUNC_8(VAR_13);
 if (!VAR_15->sarea) {
  FUNC_2("could not find sarea!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }

 VAR_15->mmio = FUNC_6(VAR_13, VAR_14->mmio_offset);
 if (!VAR_15->mmio) {
  FUNC_2("could not find mmio region!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }
 VAR_15->cce_ring = FUNC_6(VAR_13, VAR_14->ring_offset);
 if (!VAR_15->cce_ring) {
  FUNC_2("could not find cce ring region!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }
 VAR_15->ring_rptr = FUNC_6(VAR_13, VAR_14->ring_rptr_offset);
 if (!VAR_15->ring_rptr) {
  FUNC_2("could not find ring read pointer!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }
 VAR_13->agp_buffer_token = VAR_14->buffers_offset;
 VAR_13->agp_buffer_map = FUNC_6(VAR_13, VAR_14->buffers_offset);
 if (!VAR_13->agp_buffer_map) {
  FUNC_2("could not find dma buffer region!\n");
  VAR_13->dev_private = (void *)VAR_15;
  FUNC_13(VAR_13);
  return -VAR_2;
 }

 if (!VAR_15->is_pci) {
  VAR_15->agp_textures =
      FUNC_6(VAR_13, VAR_14->agp_textures_offset);
  if (!VAR_15->agp_textures) {
   FUNC_2("could not find agp texture region!\n");
   VAR_13->dev_private = (void *)VAR_15;
   FUNC_13(VAR_13);
   return -VAR_2;
  }
 }

 VAR_15->sarea_priv =
     (drm_r128_sarea_t *) ((u8 *) VAR_15->sarea->handle +
      VAR_14->sarea_priv_offset);
 {
  VAR_15->cce_ring->handle =
   (void *)(unsigned long)VAR_15->cce_ring->offset;
  VAR_15->ring_rptr->handle =
   (void *)(unsigned long)VAR_15->ring_rptr->offset;
  VAR_13->agp_buffer_map->handle =
   (void *)(unsigned long)VAR_13->agp_buffer_map->offset;
 }






  VAR_15->cce_buffers_offset = (unsigned long)VAR_13->sg->virtual;

 VAR_15->ring.start = (u32 *) VAR_15->cce_ring->handle;
 VAR_15->ring.end = ((u32 *) VAR_15->cce_ring->handle
         + VAR_14->ring_size / sizeof(u32));
 VAR_15->ring.size = VAR_14->ring_size;
 VAR_15->ring.size_l2qw = FUNC_9(VAR_14->ring_size / 8);

 VAR_15->ring.tail_mask = (VAR_15->ring.size / sizeof(u32)) - 1;

 VAR_15->ring.high_mark = 128;

 VAR_15->sarea_priv->last_frame = 0;
 FUNC_3(VAR_9, VAR_15->sarea_priv->last_frame);

 VAR_15->sarea_priv->last_dispatch = 0;
 FUNC_3(VAR_8, VAR_15->sarea_priv->last_dispatch);




  VAR_15->gart_info.table_mask = FUNC_0(32);
  VAR_15->gart_info.gart_table_location = VAR_0;
  VAR_15->gart_info.table_size = VAR_11;
  VAR_15->gart_info.addr = ((void*)0);
  VAR_15->gart_info.bus_addr = 0;
  VAR_15->gart_info.gart_reg_if = VAR_1;
  if (!FUNC_5(VAR_13, &VAR_15->gart_info)) {
   FUNC_2("failed to init PCI GART!\n");
   VAR_13->dev_private = (void *)VAR_15;
   FUNC_13(VAR_13);
   return -VAR_3;
  }
  FUNC_3(VAR_12, VAR_15->gart_info.bus_addr);




 FUNC_11(VAR_13, VAR_15);
 VAR_16 = FUNC_12(VAR_15);

 VAR_13->dev_private = (void *)VAR_15;

 FUNC_14(VAR_13);

 if (VAR_16) {
  FUNC_2("Failed to load firmware!\n");
  FUNC_13(VAR_13);
 }

 return VAR_16;
}
