
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_fh {int io_allowed; } ;
struct vpfe_device {int buffer_queue; int v4l2_dev; } ;
struct v4l2_buffer {scalar_t__ type; } ;
struct file {struct vpfe_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct vpfe_device* FUNC_2 (struct file*) ;
 int FUNC_3 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
       struct v4l2_buffer *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_2(VAR_4);
 struct vpfe_fh *VAR_8 = VAR_4->private_data;

 FUNC_0(1, VAR_3, &VAR_7->v4l2_dev, "vpfe_qbuf\n");

 if (VAR_2 != VAR_6->type) {
  FUNC_1(&VAR_7->v4l2_dev, "Invalid buf type\n");
  return -VAR_1;
 }





 if (!VAR_8->io_allowed) {
  FUNC_1(&VAR_7->v4l2_dev, "fh->io_allowed\n");
  return -VAR_0;
 }
 return FUNC_3(&VAR_7->buffer_queue, VAR_6);
}
