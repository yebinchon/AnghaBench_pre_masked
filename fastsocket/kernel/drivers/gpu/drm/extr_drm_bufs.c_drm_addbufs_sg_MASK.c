
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device_dma {int buf_count; int page_count; int flags; scalar_t__ byte_count; int seg_count; struct drm_buf** buflist; struct drm_buf_entry* bufs; } ;
struct drm_device {int buf_alloc; int struct_mutex; TYPE_2__* driver; TYPE_1__* sg; int count_lock; scalar_t__ buf_use; struct drm_device_dma* dma; } ;
struct drm_buf_entry {int buf_count; int buf_size; int page_order; scalar_t__ seg_count; struct drm_buf* buflist; } ;
struct drm_buf_desc {int count; int size; int flags; unsigned long agp_start; } ;
struct drm_buf {int idx; int total; int order; unsigned long bus_address; int dev_priv_size; void* address; void* dev_private; int * file_priv; scalar_t__ pending; scalar_t__ waiting; int * next; scalar_t__ offset; scalar_t__ used; } ;
struct TYPE_4__ {int dev_priv_size; } ;
struct TYPE_3__ {scalar_t__ virtual; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct drm_device*,struct drm_buf_entry*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (int) ;
 struct drm_buf** FUNC_8 (struct drm_buf**,int,int ) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct drm_device * VAR_13, struct drm_buf_desc * VAR_14)
{
 struct drm_device_dma *VAR_15 = VAR_13->dma;
 struct drm_buf_entry *VAR_16;
 struct drm_buf *VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 struct drm_buf **VAR_28;

 if (!FUNC_6(VAR_13, VAR_1))
  return -VAR_5;

 if (!VAR_15)
  return -VAR_5;

 if (!FUNC_4(VAR_0))
  return -VAR_7;

 VAR_20 = VAR_14->count;
 VAR_21 = FUNC_7(VAR_14->size);
 VAR_22 = 1 << VAR_21;

 VAR_23 = (VAR_14->flags & VAR_12)
     ? FUNC_1(VAR_22) : VAR_22;
 VAR_24 = VAR_21 - VAR_9 > 0 ? VAR_21 - VAR_9 : 0;
 VAR_25 = VAR_10 << VAR_24;

 VAR_26 = 0;
 VAR_19 = VAR_14->agp_start;

 FUNC_0("count:      %d\n", VAR_20);
 FUNC_0("order:      %d\n", VAR_21);
 FUNC_0("size:       %d\n", VAR_22);
 FUNC_0("agp_offset: %lu\n", VAR_19);
 FUNC_0("alignment:  %d\n", VAR_23);
 FUNC_0("page_order: %d\n", VAR_24);
 FUNC_0("total:      %d\n", VAR_25);

 if (VAR_21 < VAR_3 || VAR_21 > VAR_2)
  return -VAR_5;

 FUNC_12(&VAR_13->count_lock);
 if (VAR_13->buf_use) {
  FUNC_13(&VAR_13->count_lock);
  return -VAR_4;
 }
 FUNC_3(&VAR_13->buf_alloc);
 FUNC_13(&VAR_13->count_lock);

 FUNC_10(&VAR_13->struct_mutex);
 VAR_16 = &VAR_15->bufs[VAR_21];
 if (VAR_16->buf_count) {
  FUNC_11(&VAR_13->struct_mutex);
  FUNC_2(&VAR_13->buf_alloc);
  return -VAR_6;
 }

 if (VAR_20 < 0 || VAR_20 > 4096) {
  FUNC_11(&VAR_13->struct_mutex);
  FUNC_2(&VAR_13->buf_alloc);
  return -VAR_5;
 }

 VAR_16->buflist = FUNC_9(VAR_20 * sizeof(*VAR_16->buflist),
    VAR_8);
 if (!VAR_16->buflist) {
  FUNC_11(&VAR_13->struct_mutex);
  FUNC_2(&VAR_13->buf_alloc);
  return -VAR_6;
 }

 VAR_16->buf_size = VAR_22;
 VAR_16->page_order = VAR_24;

 VAR_18 = 0;

 while (VAR_16->buf_count < VAR_20) {
  VAR_17 = &VAR_16->buflist[VAR_16->buf_count];
  VAR_17->idx = VAR_15->buf_count + VAR_16->buf_count;
  VAR_17->total = VAR_23;
  VAR_17->order = VAR_21;
  VAR_17->used = 0;

  VAR_17->offset = (VAR_15->byte_count + VAR_18);
  VAR_17->bus_address = VAR_19 + VAR_18;
  VAR_17->address = (void *)(VAR_19 + VAR_18
     + (unsigned long)VAR_13->sg->virtual);
  VAR_17->next = ((void*)0);
  VAR_17->waiting = 0;
  VAR_17->pending = 0;
  VAR_17->file_priv = ((void*)0);

  VAR_17->dev_priv_size = VAR_13->driver->dev_priv_size;
  VAR_17->dev_private = FUNC_9(VAR_17->dev_priv_size, VAR_8);
  if (!VAR_17->dev_private) {

   VAR_16->buf_count = VAR_20;
   FUNC_5(VAR_13, VAR_16);
   FUNC_11(&VAR_13->struct_mutex);
   FUNC_2(&VAR_13->buf_alloc);
   return -VAR_6;
  }

  FUNC_0("buffer %d @ %p\n", VAR_16->buf_count, VAR_17->address);

  VAR_18 += VAR_23;
  VAR_16->buf_count++;
  VAR_26 += VAR_10 << VAR_24;
 }

 FUNC_0("byte_count: %d\n", VAR_26);

 VAR_28 = FUNC_8(VAR_15->buflist,
    (VAR_15->buf_count + VAR_16->buf_count) *
    sizeof(*VAR_15->buflist), VAR_8);
 if (!VAR_28) {

  FUNC_5(VAR_13, VAR_16);
  FUNC_11(&VAR_13->struct_mutex);
  FUNC_2(&VAR_13->buf_alloc);
  return -VAR_6;
 }
 VAR_15->buflist = VAR_28;

 for (VAR_27 = 0; VAR_27 < VAR_16->buf_count; VAR_27++) {
  VAR_15->buflist[VAR_27 + VAR_15->buf_count] = &VAR_16->buflist[VAR_27];
 }

 VAR_15->buf_count += VAR_16->buf_count;
 VAR_15->seg_count += VAR_16->seg_count;
 VAR_15->page_count += VAR_26 >> VAR_9;
 VAR_15->byte_count += VAR_26;

 FUNC_0("dma->buf_count : %d\n", VAR_15->buf_count);
 FUNC_0("entry->buf_count : %d\n", VAR_16->buf_count);

 FUNC_11(&VAR_13->struct_mutex);

 VAR_14->count = VAR_16->buf_count;
 VAR_14->size = VAR_22;

 VAR_15->flags = VAR_11;

 FUNC_2(&VAR_13->buf_alloc);
 return 0;
}
