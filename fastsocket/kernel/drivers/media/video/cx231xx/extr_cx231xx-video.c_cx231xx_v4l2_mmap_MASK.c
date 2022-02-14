
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (char*,unsigned long,unsigned long,int) ;
 int FUNC_2 (struct cx231xx_fh*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct cx231xx_fh *VAR_2 = VAR_0->private_data;
 struct cx231xx *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2);

 if (FUNC_3(VAR_4 < 0))
  return VAR_4;

 VAR_4 = FUNC_4(&VAR_2->vb_vidq, VAR_1);

 FUNC_1("vma start=0x%08lx, size=%ld, ret=%d\n",
    (unsigned long)VAR_1->vm_start,
    (unsigned long)VAR_1->vm_end -
    (unsigned long)VAR_1->vm_start, VAR_4);

 return VAR_4;
}
