
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct uvc_streaming {int queue; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {struct uvc_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct vm_area_struct*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct uvc_fh *VAR_3 = VAR_1->private_data;
 struct uvc_streaming *VAR_4 = VAR_3->stream;

 FUNC_1(VAR_0, "uvc_v4l2_mmap\n");

 return FUNC_0(&VAR_4->queue, VAR_2);
}
