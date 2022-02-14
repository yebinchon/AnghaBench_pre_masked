
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {scalar_t__ memory; int buffer_queue; int v4l2_dev; } ;
struct v4l2_buffer {scalar_t__ type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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

 FUNC_0(1, VAR_3, &VAR_7->v4l2_dev, "vpfe_querybuf\n");

 if (VAR_1 != VAR_6->type) {
  FUNC_1(&VAR_7->v4l2_dev, "Invalid buf type\n");
  return -VAR_0;
 }

 if (VAR_7->memory != VAR_2) {
  FUNC_1(&VAR_7->v4l2_dev, "Invalid memory\n");
  return -VAR_0;
 }

 return FUNC_3(&VAR_7->buffer_queue, VAR_6);
}
