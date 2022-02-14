
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct dev_data* private_data; } ;
struct dev_data {scalar_t__ state; scalar_t__ ev_next; int lock; scalar_t__ setup_can_stall; scalar_t__ setup_in; scalar_t__ setup_abort; int wait; } ;
typedef int poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int
FUNC_3 (struct file *VAR_4, poll_table *VAR_5)
{
       struct dev_data *VAR_6 = VAR_4->private_data;
       int VAR_7 = 0;

       FUNC_0(VAR_4, &VAR_6->wait, VAR_5);

       FUNC_1 (&VAR_6->lock);


       if (VAR_6->setup_abort) {
               VAR_6->setup_abort = 0;
               VAR_7 = VAR_0;
               goto out;
       }

       if (VAR_6->state == VAR_3) {
               if (VAR_6->setup_in || VAR_6->setup_can_stall)
                       VAR_7 = VAR_2;
       } else {
               if (VAR_6->ev_next != 0)
                       VAR_7 = VAR_1;
       }
out:
       FUNC_2(&VAR_6->lock);
       return VAR_7;
}
