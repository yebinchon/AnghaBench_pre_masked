
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_work {unsigned int queue_seq; int flushing; int done; } ;
struct vhost_dev {int work_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vhost_dev*,struct vhost_work*,unsigned int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct vhost_dev *VAR_0, struct vhost_work *VAR_1)
{
 unsigned VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->work_lock);
 VAR_2 = VAR_1->queue_seq;
 VAR_1->flushing++;
 FUNC_2(&VAR_0->work_lock);
 FUNC_4(VAR_1->done, FUNC_3(VAR_0, VAR_1, VAR_2));
 FUNC_1(&VAR_0->work_lock);
 VAR_3 = --VAR_1->flushing;
 FUNC_2(&VAR_0->work_lock);
 FUNC_0(VAR_3 < 0);
}
