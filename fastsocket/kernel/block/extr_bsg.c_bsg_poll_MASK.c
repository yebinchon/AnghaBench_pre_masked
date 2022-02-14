
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct bsg_device* private_data; } ;
struct bsg_device {scalar_t__ queued_cmds; scalar_t__ max_queue; int lock; int done_list; int wq_free; int wq_done; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct bsg_device *VAR_5 = VAR_3->private_data;
 unsigned int VAR_6 = 0;

 FUNC_1(VAR_3, &VAR_5->wq_done, VAR_4);
 FUNC_1(VAR_3, &VAR_5->wq_free, VAR_4);

 FUNC_2(&VAR_5->lock);
 if (!FUNC_0(&VAR_5->done_list))
  VAR_6 |= VAR_0 | VAR_2;
 if (VAR_5->queued_cmds >= VAR_5->max_queue)
  VAR_6 |= VAR_1;
 FUNC_3(&VAR_5->lock);

 return VAR_6;
}
