
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; size_t vm_pgoff; } ;
struct usb_usbvision {size_t num_frames; TYPE_1__* frame; int max_frame_size; } ;
struct file {int dummy; } ;
struct TYPE_2__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct usb_usbvision*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct usb_usbvision* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 unsigned long VAR_11 = VAR_10->vm_end - VAR_10->vm_start,
  VAR_12 = VAR_10->vm_start;
 void *VAR_13;
 u32 VAR_14;
 struct usb_usbvision *VAR_15 = FUNC_3(VAR_9);

 FUNC_1(VAR_0, "mmap");

 if (!FUNC_2(VAR_15))
  return -VAR_2;

 if (!(VAR_10->vm_flags & VAR_8) ||
     VAR_11 != FUNC_0(VAR_15->max_frame_size)) {
  return -VAR_3;
 }

 for (VAR_14 = 0; VAR_14 < VAR_15->num_frames; VAR_14++) {
  if (((FUNC_0(VAR_15->max_frame_size)*VAR_14) >> VAR_4) ==
      VAR_10->vm_pgoff)
   break;
 }
 if (VAR_14 == VAR_15->num_frames) {
  FUNC_1(VAR_0,
         "mmap: user supplied mapping address is out of range");
  return -VAR_3;
 }


 VAR_10->vm_flags |= VAR_6;
 VAR_10->vm_flags |= VAR_7;

 VAR_13 = VAR_15->frame[VAR_14].data;
 while (VAR_11 > 0) {
  if (FUNC_4(VAR_10, VAR_12, FUNC_5(VAR_13))) {
   FUNC_1(VAR_0, "mmap: vm_insert_page failed");
   return -VAR_1;
  }
  VAR_12 += VAR_5;
  VAR_13 += VAR_5;
  VAR_11 -= VAR_5;
 }

 return 0;
}
