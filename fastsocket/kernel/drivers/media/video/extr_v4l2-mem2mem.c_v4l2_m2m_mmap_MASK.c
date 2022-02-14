
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; } ;
struct videobuf_queue {int dummy; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct file {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct videobuf_queue* FUNC_0 (struct v4l2_m2m_ctx*) ;
 struct videobuf_queue* FUNC_1 (struct v4l2_m2m_ctx*) ;
 int FUNC_2 (struct videobuf_queue*,struct vm_area_struct*) ;

int FUNC_3(struct file *VAR_2, struct v4l2_m2m_ctx *VAR_3,
    struct vm_area_struct *VAR_4)
{
 unsigned long VAR_5 = VAR_4->vm_pgoff << VAR_1;
 struct videobuf_queue *VAR_6;

 if (VAR_5 < VAR_0) {
  VAR_6 = FUNC_1(VAR_3);
 } else {
  VAR_6 = FUNC_0(VAR_3);
  VAR_4->vm_pgoff -= (VAR_0 >> VAR_1);
 }

 return FUNC_2(VAR_6, VAR_4);
}
