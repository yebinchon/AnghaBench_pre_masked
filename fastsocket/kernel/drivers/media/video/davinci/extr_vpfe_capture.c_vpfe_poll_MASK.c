
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int buffer_queue; scalar_t__ started; int v4l2_dev; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 unsigned int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_1, poll_table *VAR_2)
{
 struct vpfe_device *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(1, VAR_0, &VAR_3->v4l2_dev, "vpfe_poll\n");

 if (VAR_3->started)
  return FUNC_2(VAR_1,
         &VAR_3->buffer_queue, VAR_2);
 return 0;
}
