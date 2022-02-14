
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_private_data; int vm_page_prot; } ;
struct omap24xxcam_fh {int vbq; } ;
struct file {struct omap24xxcam_fh* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct omap24xxcam_fh *VAR_2 = VAR_0->private_data;
 int VAR_3;


 VAR_3 = FUNC_3(&VAR_2->vbq, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_1->vm_page_prot = FUNC_2(VAR_1->vm_page_prot);


 VAR_3 = FUNC_1(VAR_0, VAR_1);




 if (VAR_3)
  FUNC_0(VAR_1->vm_private_data);

 return VAR_3;
}
