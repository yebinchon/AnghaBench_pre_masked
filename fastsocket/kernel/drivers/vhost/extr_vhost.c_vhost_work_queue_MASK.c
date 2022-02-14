
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_work {int queue_seq; int node; } ;
struct vhost_dev {int work_lock; int worker; int work_list; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct vhost_dev *VAR_0,
        struct vhost_work *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->work_lock, VAR_2);
 if (FUNC_1(&VAR_1->node)) {
  FUNC_0(&VAR_1->node, &VAR_0->work_list);
  VAR_1->queue_seq++;
  FUNC_4(VAR_0->worker);
 }
 FUNC_3(&VAR_0->work_lock, VAR_2);
}
