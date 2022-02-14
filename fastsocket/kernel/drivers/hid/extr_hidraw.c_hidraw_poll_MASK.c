
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidraw_list {scalar_t__ head; scalar_t__ tail; TYPE_1__* hidraw; } ;
struct file {struct hidraw_list* private_data; } ;
typedef int poll_table ;
struct TYPE_2__ {int exist; int wait; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_4, poll_table *VAR_5)
{
 struct hidraw_list *VAR_6 = VAR_4->private_data;

 FUNC_0(VAR_4, &VAR_6->hidraw->wait, VAR_5);
 if (VAR_6->head != VAR_6->tail)
  return VAR_2 | VAR_3;
 if (!VAR_6->hidraw->exist)
  return VAR_0 | VAR_1;
 return 0;
}
