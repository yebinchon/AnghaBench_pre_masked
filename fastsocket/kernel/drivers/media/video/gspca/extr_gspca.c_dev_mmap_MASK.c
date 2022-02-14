
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_pgoff; struct gspca_frame* vm_private_data; int * vm_ops; int vm_flags; } ;
struct page {int dummy; } ;
struct TYPE_3__ {int offset; } ;
struct TYPE_4__ {scalar_t__ memory; unsigned long length; TYPE_1__ m; } ;
struct gspca_frame {scalar_t__ data; TYPE_2__ v4l2_buf; } ;
struct gspca_dev {int nframes; int queue_lock; struct gspca_frame* frame; struct file* capt_file; int present; } ;
struct file {struct gspca_dev* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct vm_area_struct*) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long,struct page*) ;
 struct page* FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 struct gspca_dev *VAR_11 = VAR_9->private_data;
 struct gspca_frame *VAR_12;
 struct page *VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_15 = VAR_10->vm_start;
 VAR_16 = VAR_10->vm_end - VAR_10->vm_start;
 FUNC_0(VAR_0, "mmap start:%08x size:%d", (int) VAR_15, (int) VAR_16);

 if (FUNC_2(&VAR_11->queue_lock))
  return -VAR_3;
 if (!VAR_11->present) {
  VAR_18 = -VAR_2;
  goto out;
 }
 if (VAR_11->capt_file != VAR_9) {
  VAR_18 = -VAR_1;
  goto out;
 }

 VAR_12 = ((void*)0);
 for (VAR_17 = 0; VAR_17 < VAR_11->nframes; ++VAR_17) {
  if (VAR_11->frame[VAR_17].v4l2_buf.memory != VAR_6) {
   FUNC_0(VAR_0, "mmap bad memory type");
   break;
  }
  if ((VAR_11->frame[VAR_17].v4l2_buf.m.offset >> VAR_4)
      == VAR_10->vm_pgoff) {
   VAR_12 = &VAR_11->frame[VAR_17];
   break;
  }
 }
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_0, "mmap no frame buffer found");
  VAR_18 = -VAR_1;
  goto out;
 }
 if (VAR_16 != VAR_12->v4l2_buf.length) {
  FUNC_0(VAR_0, "mmap bad size");
  VAR_18 = -VAR_1;
  goto out;
 }





 VAR_10->vm_flags |= VAR_7;

 VAR_14 = (unsigned long) VAR_12->data;
 while (VAR_16 > 0) {
  VAR_13 = FUNC_5((void *) VAR_14);
  VAR_18 = FUNC_4(VAR_10, VAR_15, VAR_13);
  if (VAR_18 < 0)
   goto out;
  VAR_15 += VAR_5;
  VAR_14 += VAR_5;
  VAR_16 -= VAR_5;
 }

 VAR_10->vm_ops = &VAR_8;
 VAR_10->vm_private_data = VAR_12;
 FUNC_1(VAR_10);
 VAR_18 = 0;
out:
 FUNC_3(&VAR_11->queue_lock);
 return VAR_18;
}
