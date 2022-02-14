
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct video_card {int mtx; int dv_buf; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct file*,struct vm_area_struct*) ;
 int FUNC_1 (struct video_card*) ;
 struct video_card* FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct video_card*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct video_card *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = -VAR_1;







 if (!FUNC_3(&VAR_4->mtx))
  return -VAR_0;

 if ( ! FUNC_5(VAR_4) ) {
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5)
   goto out;
 }

 VAR_5 = FUNC_0(&VAR_4->dv_buf, VAR_2, VAR_3);
out:
 FUNC_4(&VAR_4->mtx);
 return VAR_5;
}
