
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {TYPE_1__* ops; int state_mutex; int ibox_wq; } ;
struct file {struct spu_context* private_data; } ;
typedef int poll_table ;
struct TYPE_2__ {unsigned int (* mbox_stat_poll ) (struct spu_context*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct spu_context*) ;
 unsigned int FUNC_3 (struct spu_context*,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct spu_context *VAR_4 = VAR_2->private_data;
 unsigned int VAR_5;

 FUNC_1(VAR_2, &VAR_4->ibox_wq, VAR_3);





 FUNC_0(&VAR_4->state_mutex);
 VAR_5 = VAR_4->ops->mbox_stat_poll(VAR_4, VAR_0 | VAR_1);
 FUNC_2(VAR_4);

 return VAR_5;
}
