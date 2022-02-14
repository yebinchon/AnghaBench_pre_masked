
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct eventfd_ctx* private_data; } ;
struct TYPE_2__ {int lock; } ;
struct eventfd_ctx {scalar_t__ count; TYPE_1__ wqh; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file*,TYPE_1__*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_4, poll_table *VAR_5)
{
 struct eventfd_ctx *VAR_6 = VAR_4->private_data;
 unsigned int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_0(VAR_4, &VAR_6->wqh, VAR_5);

 FUNC_1(&VAR_6->wqh.lock, VAR_8);
 if (VAR_6->count > 0)
  VAR_7 |= VAR_1;
 if (VAR_6->count == VAR_3)
  VAR_7 |= VAR_0;
 if (VAR_3 - 1 > VAR_6->count)
  VAR_7 |= VAR_2;
 FUNC_2(&VAR_6->wqh.lock, VAR_8);

 return VAR_7;
}
