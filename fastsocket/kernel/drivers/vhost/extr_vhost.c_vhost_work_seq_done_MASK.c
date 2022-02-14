
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_work {unsigned int done_seq; } ;
struct vhost_dev {int work_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct vhost_dev *VAR_0, struct vhost_work *VAR_1,
    unsigned VAR_2)
{
 int VAR_3;
 FUNC_0(&VAR_0->work_lock);
 VAR_3 = VAR_2 - VAR_1->done_seq;
 FUNC_1(&VAR_0->work_lock);
 return VAR_3 <= 0;
}
