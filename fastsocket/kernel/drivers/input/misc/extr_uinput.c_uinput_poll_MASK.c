
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_device {scalar_t__ head; scalar_t__ tail; int waitq; } ;
struct file {struct uinput_device* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_2, poll_table *VAR_3)
{
 struct uinput_device *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_2, &VAR_4->waitq, VAR_3);

 if (VAR_4->head != VAR_4->tail)
  return VAR_0 | VAR_1;

 return 0;
}
