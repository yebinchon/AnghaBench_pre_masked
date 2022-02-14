
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct readyevents_arg {struct eventpoll* ep; int locked; } ;
struct file {struct eventpoll* private_data; } ;
struct eventpoll {int poll_wait; } ;
struct TYPE_4__ {scalar_t__ qproc; } ;
typedef TYPE_1__ poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct readyevents_arg*,struct eventpoll*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*,int *,TYPE_1__*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_5, poll_table *VAR_6)
{
 int VAR_7;
 struct eventpoll *VAR_8 = VAR_5->private_data;
 struct readyevents_arg VAR_9;





 VAR_9.locked = VAR_6 && (VAR_6->qproc == VAR_3);
 VAR_9.ep = VAR_8;


 FUNC_1(VAR_5, &VAR_8->poll_wait, VAR_6);







 VAR_7 = FUNC_0(&VAR_4, VAR_0,
       VAR_2, &VAR_9, VAR_8, VAR_1);

 return VAR_7 != -1 ? VAR_7 : 0;
}
