
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio_raw_list {TYPE_1__* serio_raw; } ;
struct file {struct serio_raw_list* private_data; } ;
typedef int poll_table ;
struct TYPE_2__ {scalar_t__ head; scalar_t__ tail; int wait; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_2, poll_table *VAR_3)
{
 struct serio_raw_list *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_2, &VAR_4->serio_raw->wait, VAR_3);

 if (VAR_4->serio_raw->head != VAR_4->serio_raw->tail)
  return VAR_0 | VAR_1;

 return 0;
}
