
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_private {scalar_t__ rb_get; scalar_t__ rb_put; int lock; int wait; } ;
struct file {struct pmu_private* private_data; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_3(struct file *VAR_1, poll_table *VAR_2)
{
 struct pmu_private *VAR_3 = VAR_1->private_data;
 unsigned int VAR_4 = 0;
 unsigned long VAR_5;

 if (VAR_3 == 0)
  return 0;
 FUNC_0(VAR_1, &VAR_3->wait, VAR_2);
 FUNC_1(&VAR_3->lock, VAR_5);
 if (VAR_3->rb_get != VAR_3->rb_put)
  VAR_4 |= VAR_0;
 FUNC_2(&VAR_3->lock, VAR_5);
 return VAR_4;
}
