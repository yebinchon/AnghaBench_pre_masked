
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct timerfd_ctx {TYPE_1__ wqh; scalar_t__ ticks; } ;
struct file {struct timerfd_ctx* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct file*,TYPE_1__*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_1, poll_table *VAR_2)
{
 struct timerfd_ctx *VAR_3 = VAR_1->private_data;
 unsigned int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_0(VAR_1, &VAR_3->wqh, VAR_2);

 FUNC_1(&VAR_3->wqh.lock, VAR_5);
 if (VAR_3->ticks)
  VAR_4 |= VAR_0;
 FUNC_2(&VAR_3->wqh.lock, VAR_5);

 return VAR_4;
}
