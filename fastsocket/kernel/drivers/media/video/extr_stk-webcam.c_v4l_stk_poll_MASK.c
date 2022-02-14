
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int sio_full; int wait_frame; } ;
struct file {struct stk_camera* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_3, poll_table *VAR_4)
{
 struct stk_camera *VAR_5 = VAR_3->private_data;

 FUNC_2(VAR_3, &VAR_5->wait_frame, VAR_4);

 if (!FUNC_0(VAR_5))
  return VAR_0;

 if (!FUNC_1(&VAR_5->sio_full))
  return (VAR_1 | VAR_2);

 return 0;
}
