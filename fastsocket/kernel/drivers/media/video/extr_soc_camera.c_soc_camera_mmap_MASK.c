
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct soc_camera_device {int dev; int vb_vidq; struct file* streamer; } ;
struct file {struct soc_camera_device* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long,...) ;
 int FUNC_1 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct soc_camera_device *VAR_3 = VAR_1->private_data;
 int VAR_4;

 FUNC_0(&VAR_3->dev, "mmap called, vma=0x%08lx\n", (unsigned long)VAR_2);

 if (VAR_3->streamer != VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(&VAR_3->vb_vidq, VAR_2);

 FUNC_0(&VAR_3->dev, "vma start=0x%08lx, size=%ld, ret=%d\n",
  (unsigned long)VAR_2->vm_start,
  (unsigned long)VAR_2->vm_end - (unsigned long)VAR_2->vm_start,
  VAR_4);

 return VAR_4;
}
