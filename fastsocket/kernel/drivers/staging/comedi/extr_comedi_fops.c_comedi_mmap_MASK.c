
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; scalar_t__ vm_pgoff; unsigned long vm_end; struct comedi_async* vm_private_data; int * vm_ops; } ;
struct file {TYPE_1__* f_dentry; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device_file_info {struct comedi_device* device; } ;
struct comedi_device {int mutex; int minor; int attached; } ;
struct comedi_async {unsigned long prealloc_bufsz; int mmap_count; TYPE_2__* buf_page_list; } ;
struct TYPE_4__ {int virt_addr; } ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct comedi_device_file_info* FUNC_1 (unsigned int const) ;
 struct comedi_subdevice* FUNC_2 (struct comedi_device_file_info*) ;
 struct comedi_subdevice* FUNC_3 (struct comedi_device_file_info*) ;
 int VAR_9 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct vm_area_struct*,unsigned long,int ,scalar_t__,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_10, struct vm_area_struct *VAR_11)
{
 const unsigned VAR_12 = FUNC_4(VAR_10->f_dentry->d_inode);
 struct comedi_device_file_info *VAR_13 =
     FUNC_1(VAR_12);
 struct comedi_device *VAR_14 = VAR_13->device;
 struct comedi_async *VAR_15 = ((void*)0);
 unsigned long VAR_16 = VAR_11->vm_start;
 unsigned long VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 struct comedi_subdevice *VAR_21;

 FUNC_5(&VAR_14->mutex);
 if (!VAR_14->attached) {
  FUNC_0("no driver configured on comedi%i\n", VAR_14->minor);
  VAR_20 = -VAR_3;
  goto done;
 }
 if (VAR_11->vm_flags & VAR_8)
  VAR_21 = FUNC_3(VAR_13);
 else
  VAR_21 = FUNC_2(VAR_13);

 if (VAR_21 == ((void*)0)) {
  VAR_20 = -VAR_2;
  goto done;
 }
 VAR_15 = VAR_21->async;
 if (VAR_15 == ((void*)0)) {
  VAR_20 = -VAR_2;
  goto done;
 }

 if (VAR_11->vm_pgoff != 0) {
  FUNC_0("comedi: mmap() offset must be 0.\n");
  VAR_20 = -VAR_2;
  goto done;
 }

 VAR_17 = VAR_11->vm_end - VAR_11->vm_start;
 if (VAR_17 > VAR_15->prealloc_bufsz) {
  VAR_20 = -VAR_1;
  goto done;
 }
 if (VAR_17 & (~VAR_4)) {
  VAR_20 = -VAR_1;
  goto done;
 }

 VAR_18 = VAR_17 >> VAR_6;
 for (VAR_19 = 0; VAR_19 < VAR_18; ++VAR_19) {
  if (FUNC_8(VAR_11, VAR_16,
        FUNC_7(FUNC_9
      (VAR_15->buf_page_list
       [VAR_19].virt_addr)), VAR_7,
        VAR_5)) {
   VAR_20 = -VAR_0;
   goto done;
  }
  VAR_16 += VAR_7;
 }

 VAR_11->vm_ops = &VAR_9;
 VAR_11->vm_private_data = VAR_15;

 VAR_15->mmap_count++;

 VAR_20 = 0;
done:
 FUNC_6(&VAR_14->mutex);
 return VAR_20;
}
