
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int u32 ;
struct drm_radeon_master_private {int sarea; } ;
struct drm_file {TYPE_1__* master; } ;
struct drm_device {TYPE_3__* sg; TYPE_15__* agp_buffer_map; TYPE_2__* agp; int agp_buffer_token; TYPE_6__* dev_private; } ;
struct TYPE_16__ {unsigned int handle; unsigned long offset; int size; } ;
struct TYPE_21__ {unsigned int bus_addr; unsigned int addr; TYPE_15__ mapping; int table_size; int table_mask; } ;
struct TYPE_20__ {int* start; int* end; int size; int rptr_update; int fetch_size; int tail_mask; int high_mark; void* fetch_size_l2ow; void* rptr_update_l2qw; void* size_l2qw; } ;
struct TYPE_22__ {int flags; int usec_timeout; scalar_t__ cp_mode; int front_offset; int front_pitch; int back_offset; int back_pitch; int fb_location; int fb_size; int front_pitch_offset; int back_pitch_offset; int depth_pitch_offset; int depth_pitch; int depth_offset; int gart_size; int gart_vm_start; unsigned long gart_buffers_offset; unsigned int pcigart_offset; int fb_aper_offset; scalar_t__ last_buf; int pfp_fw; int me_fw; TYPE_5__ gart_info; int pcigart_offset_set; TYPE_4__ ring; TYPE_15__* cp_ring; scalar_t__ new_memmap; TYPE_15__* ring_rptr; void* gart_textures; int gart_textures_offset; int buffers_offset; int ring_rptr_offset; int ring_offset; int color_fmt; scalar_t__ do_boxes; int vblank_crtc; int cs_mutex; } ;
typedef TYPE_6__ drm_radeon_private_t ;
struct TYPE_23__ {int usec_timeout; scalar_t__ cp_mode; int fb_bpp; int front_offset; int front_pitch; int back_offset; int back_pitch; int gart_size; int ring_size; int gart_textures_offset; int buffers_offset; int ring_rptr_offset; int ring_offset; scalar_t__ is_pci; } ;
typedef TYPE_7__ drm_radeon_init_t ;
struct TYPE_19__ {scalar_t__ virtual; } ;
struct TYPE_18__ {int base; } ;
struct TYPE_17__ {struct drm_radeon_master_private* driver_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (TYPE_15__*,struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (struct drm_device*,TYPE_6__*,struct drm_file*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (struct drm_device*) ;
 int FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (struct drm_device*) ;
 int VAR_14 ;
 int FUNC_20 (TYPE_6__*) ;

int FUNC_21(struct drm_device *VAR_15, drm_radeon_init_t *VAR_16,
      struct drm_file *VAR_17)
{
 drm_radeon_private_t *VAR_18 = VAR_15->dev_private;
 struct drm_radeon_master_private *VAR_19 = VAR_17->master->driver_priv;

 FUNC_1("\n");

 FUNC_8(&VAR_18->cs_mutex);
 FUNC_12();

 if ((VAR_18->flags & VAR_12) && !VAR_18->new_memmap) {
  FUNC_2("Cannot initialise DRM on this card\nThis card requires a new X.org DDX for 3D\n");
  FUNC_13(VAR_15);
  return -VAR_2;
 }

 if (VAR_16->is_pci && (VAR_18->flags & VAR_8)) {
  FUNC_1("Forcing AGP card to PCI mode\n");
  VAR_18->flags &= ~VAR_8;



  VAR_14 = 1;
 } else if (!(VAR_18->flags & (VAR_8 | VAR_9 | VAR_10))
   && !VAR_16->is_pci) {
  FUNC_1("Restoring AGP flag\n");
  VAR_18->flags |= VAR_8;
 }

 VAR_18->usec_timeout = VAR_16->usec_timeout;
 if (VAR_18->usec_timeout < 1 ||
     VAR_18->usec_timeout > VAR_11) {
  FUNC_1("TIMEOUT problem!\n");
  FUNC_13(VAR_15);
  return -VAR_2;
 }



 VAR_18->vblank_crtc = VAR_1;
 VAR_18->do_boxes = 0;
 VAR_18->cp_mode = VAR_16->cp_mode;





 if ((VAR_16->cp_mode != VAR_6) &&
     (VAR_16->cp_mode != VAR_5)) {
  FUNC_1("BAD cp_mode (%x)!\n", VAR_16->cp_mode);
  FUNC_13(VAR_15);
  return -VAR_2;
 }

 switch (VAR_16->fb_bpp) {
 case 16:
  VAR_18->color_fmt = VAR_4;
  break;
 case 32:
 default:
  VAR_18->color_fmt = VAR_3;
  break;
 }
 VAR_18->front_offset = VAR_16->front_offset;
 VAR_18->front_pitch = VAR_16->front_pitch;
 VAR_18->back_offset = VAR_16->back_offset;
 VAR_18->back_pitch = VAR_16->back_pitch;

 VAR_18->ring_offset = VAR_16->ring_offset;
 VAR_18->ring_rptr_offset = VAR_16->ring_rptr_offset;
 VAR_18->buffers_offset = VAR_16->buffers_offset;
 VAR_18->gart_textures_offset = VAR_16->gart_textures_offset;

 VAR_19->sarea = FUNC_6(VAR_15);
 if (!VAR_19->sarea) {
  FUNC_2("could not find sarea!\n");
  FUNC_13(VAR_15);
  return -VAR_2;
 }

 VAR_18->cp_ring = FUNC_4(VAR_15, VAR_16->ring_offset);
 if (!VAR_18->cp_ring) {
  FUNC_2("could not find cp ring region!\n");
  FUNC_13(VAR_15);
  return -VAR_2;
 }
 VAR_18->ring_rptr = FUNC_4(VAR_15, VAR_16->ring_rptr_offset);
 if (!VAR_18->ring_rptr) {
  FUNC_2("could not find ring read pointer!\n");
  FUNC_13(VAR_15);
  return -VAR_2;
 }
 VAR_15->agp_buffer_token = VAR_16->buffers_offset;
 VAR_15->agp_buffer_map = FUNC_4(VAR_15, VAR_16->buffers_offset);
 if (!VAR_15->agp_buffer_map) {
  FUNC_2("could not find dma buffer region!\n");
  FUNC_13(VAR_15);
  return -VAR_2;
 }

 if (VAR_16->gart_textures_offset) {
  VAR_18->gart_textures =
      FUNC_4(VAR_15, VAR_16->gart_textures_offset);
  if (!VAR_18->gart_textures) {
   FUNC_2("could not find GART texture region!\n");
   FUNC_13(VAR_15);
   return -VAR_2;
  }
 }
 {
  VAR_18->cp_ring->handle = (void *)(unsigned long)VAR_18->cp_ring->offset;
  VAR_18->ring_rptr->handle =
   (void *)(unsigned long)VAR_18->ring_rptr->offset;
  VAR_15->agp_buffer_map->handle =
   (void *)(unsigned long)VAR_15->agp_buffer_map->offset;

  FUNC_1("dev_priv->cp_ring->handle %p\n",
     VAR_18->cp_ring->handle);
  FUNC_1("dev_priv->ring_rptr->handle %p\n",
     VAR_18->ring_rptr->handle);
  FUNC_1("dev->agp_buffer_map->handle %p\n",
     VAR_15->agp_buffer_map->handle);
 }

 VAR_18->fb_location = (FUNC_20(VAR_18) & 0xffff) << 24;
 VAR_18->fb_size =
  (((FUNC_20(VAR_18) & 0xffff0000u) << 8) + 0x1000000)
  - VAR_18->fb_location;

 VAR_18->front_pitch_offset = (((VAR_18->front_pitch / 64) << 22) |
     ((VAR_18->front_offset
       + VAR_18->fb_location) >> 10));

 VAR_18->back_pitch_offset = (((VAR_18->back_pitch / 64) << 22) |
           ((VAR_18->back_offset
      + VAR_18->fb_location) >> 10));

 VAR_18->depth_pitch_offset = (((VAR_18->depth_pitch / 64) << 22) |
     ((VAR_18->depth_offset
       + VAR_18->fb_location) >> 10));

 VAR_18->gart_size = VAR_16->gart_size;


 if (VAR_18->new_memmap) {
  u32 VAR_20 = 0;

  FUNC_3("Setting GART location based on new memory map\n");
  if (VAR_20 == 0) {
   VAR_20 = VAR_18->fb_location + VAR_18->fb_size;
   if (VAR_20 < VAR_18->fb_location ||
       ((VAR_20 + VAR_18->gart_size) & 0xfffffffful) < VAR_20)
    VAR_20 = VAR_18->fb_location
     - VAR_18->gart_size;
  }
  VAR_18->gart_vm_start = VAR_20 & 0xffc00000u;
  if (VAR_18->gart_vm_start != VAR_20)
   FUNC_3("GART aligned down from 0x%08x to 0x%08x\n",
     VAR_20, VAR_18->gart_vm_start);
 }
  VAR_18->gart_buffers_offset = (VAR_15->agp_buffer_map->offset
       - (unsigned long)VAR_15->sg->virtual
       + VAR_18->gart_vm_start);

 FUNC_1("fb 0x%08x size %d\n",
    (unsigned int) VAR_18->fb_location,
    (unsigned int) VAR_18->fb_size);
 FUNC_1("dev_priv->gart_size %d\n", VAR_18->gart_size);
 FUNC_1("dev_priv->gart_vm_start 0x%08x\n",
    (unsigned int) VAR_18->gart_vm_start);
 FUNC_1("dev_priv->gart_buffers_offset 0x%08lx\n",
    VAR_18->gart_buffers_offset);

 VAR_18->ring.start = (u32 *) VAR_18->cp_ring->handle;
 VAR_18->ring.end = ((u32 *) VAR_18->cp_ring->handle
         + VAR_16->ring_size / sizeof(u32));
 VAR_18->ring.size = VAR_16->ring_size;
 VAR_18->ring.size_l2qw = FUNC_7(VAR_16->ring_size / 8);

 VAR_18->ring.rptr_update = 4096;
 VAR_18->ring.rptr_update_l2qw = FUNC_7( 4096 / 8);

 VAR_18->ring.fetch_size = 32;
 VAR_18->ring.fetch_size_l2ow = FUNC_7( 32 / 16);

 VAR_18->ring.tail_mask = (VAR_18->ring.size / sizeof(u32)) - 1;

 VAR_18->ring.high_mark = VAR_13;






 {
  VAR_18->gart_info.table_mask = FUNC_0(32);

  if (!VAR_18->pcigart_offset_set) {
   FUNC_2("Need gart offset from userspace\n");
   FUNC_13(VAR_15);
   return -VAR_2;
  }

  FUNC_1("Using gart offset 0x%08lx\n", VAR_18->pcigart_offset);

  VAR_18->gart_info.bus_addr =
   VAR_18->pcigart_offset + VAR_18->fb_location;
  VAR_18->gart_info.mapping.offset =
   VAR_18->pcigart_offset + VAR_18->fb_aper_offset;
  VAR_18->gart_info.mapping.size =
   VAR_18->gart_info.table_size;

  FUNC_5(&VAR_18->gart_info.mapping, VAR_15);
  if (!VAR_18->gart_info.mapping.handle) {
   FUNC_2("ioremap failed.\n");
   FUNC_13(VAR_15);
   return -VAR_2;
  }

  VAR_18->gart_info.addr =
   VAR_18->gart_info.mapping.handle;

  FUNC_1("Setting phys_pci_gart to %p %08lX\n",
     VAR_18->gart_info.addr,
     VAR_18->pcigart_offset);

  if (!FUNC_15(VAR_15)) {
   FUNC_2("Failed to init GART table\n");
   FUNC_13(VAR_15);
   return -VAR_2;
  }

  if (((VAR_18->flags & VAR_7) >= VAR_0))
   FUNC_19(VAR_15);
  else
   FUNC_17(VAR_15);
 }

 if (!VAR_18->me_fw || !VAR_18->pfp_fw) {
  int VAR_21 = FUNC_9(VAR_18);
  if (VAR_21) {
   FUNC_2("Failed to load firmware!\n");
   FUNC_13(VAR_15);
   return VAR_21;
  }
 }
 if (((VAR_18->flags & VAR_7) >= VAR_0))
  FUNC_18(VAR_18);
 else
  FUNC_11(VAR_18);

 FUNC_10(VAR_15, VAR_18, VAR_17);

 VAR_18->last_buf = 0;

 FUNC_14(VAR_15);
 FUNC_16(VAR_18);

 return 0;
}
