
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; int vm_flags; int * vm_ops; struct file* vm_file; struct vino_framebuffer* vm_private_data; int vm_page_prot; } ;
struct TYPE_2__ {unsigned long page_count; scalar_t__* virtual; } ;
struct vino_framebuffer {unsigned long offset; int map_count; TYPE_1__ desc_table; } ;
struct vino_channel_settings {int mutex; int fb_queue; scalar_t__ reading; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 struct vino_channel_settings* FUNC_4 (struct file*) ;
 struct vino_framebuffer* FUNC_5 (int *,unsigned int) ;
 unsigned int FUNC_6 (int *) ;
 int VAR_11 ;
 unsigned long FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_12, struct vm_area_struct *VAR_13)
{
 struct vino_channel_settings *VAR_14 = FUNC_4(VAR_12);

 unsigned long VAR_15 = VAR_13->vm_start;
 unsigned long VAR_16 = VAR_13->vm_end - VAR_13->vm_start;
 unsigned long VAR_17 = VAR_13->vm_pgoff << VAR_4;

 struct vino_framebuffer *VAR_18 = ((void*)0);
 unsigned int VAR_19, VAR_20;
 int VAR_21 = 0;

 FUNC_0("mmap():\n");



 if (FUNC_1(&VAR_14->mutex))
  return -VAR_2;

 if (VAR_14->reading) {
  VAR_21 = -VAR_1;
  goto out;
 }



 if (!(VAR_13->vm_flags & VAR_10)) {
  FUNC_0("mmap(): app bug: PROT_WRITE please\n");
  VAR_21 = -VAR_3;
  goto out;
 }
 if (!(VAR_13->vm_flags & VAR_9)) {
  FUNC_0("mmap(): app bug: MAP_SHARED please\n");
  VAR_21 = -VAR_3;
  goto out;
 }


 VAR_20 = FUNC_6(&VAR_14->fb_queue);
 if (VAR_20 == 0) {
  FUNC_0("mmap(): queue not initialized\n");
  VAR_21 = -VAR_3;
  goto out;
 }

 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
  VAR_18 = FUNC_5(&VAR_14->fb_queue, VAR_19);
  if (VAR_18 == ((void*)0)) {
   FUNC_0("mmap(): vino_queue_get_buffer() failed\n");
   VAR_21 = -VAR_3;
   goto out;
  }

  if (VAR_18->offset == VAR_17)
   goto found;
 }

 FUNC_0("mmap(): invalid offset = %lu\n", VAR_17);
 VAR_21 = -VAR_3;
 goto out;

found:
 FUNC_0("mmap(): buffer = %d\n", VAR_19);

 if (VAR_16 > (VAR_18->desc_table.page_count * VAR_5)) {
  FUNC_0("mmap(): failed: size = %lu > %lu\n",
   VAR_16, VAR_18->desc_table.page_count * VAR_5);
  VAR_21 = -VAR_3;
  goto out;
 }

 for (VAR_19 = 0; VAR_19 < VAR_18->desc_table.page_count; VAR_19++) {
  unsigned long VAR_22 =
   FUNC_7((void *)VAR_18->desc_table.virtual[VAR_19]) >>
   VAR_4;

  if (VAR_16 < VAR_5)
   break;


  if (FUNC_3(VAR_13, VAR_15, VAR_22, VAR_5,
        VAR_13->vm_page_prot)) {
   FUNC_0("mmap(): remap_pfn_range() failed\n");
   VAR_21 = -VAR_0;
   goto out;
  }

  VAR_15 += VAR_5;
  VAR_16 -= VAR_5;
 }

 VAR_18->map_count = 1;

 VAR_13->vm_flags |= VAR_6 | VAR_8;
 VAR_13->vm_flags &= ~VAR_7;
 VAR_13->vm_private_data = VAR_18;
 VAR_13->vm_file = VAR_12;
 VAR_13->vm_ops = &VAR_11;

out:
 FUNC_2(&VAR_14->mutex);

 return VAR_21;
}
