
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct kvm_vcpu {int requests; int wq; } ;
struct kvm_timer {int period; int timer; TYPE_1__* t_ops; int pending; scalar_t__ reinject; } ;
struct TYPE_2__ {scalar_t__ (* is_periodic ) (struct kvm_timer*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct kvm_timer*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_1, struct kvm_timer *VAR_2)
{
 int VAR_3 = 0;
 wait_queue_head_t *VAR_4 = &VAR_1->wq;






 if (VAR_2->reinject || !FUNC_1(&VAR_2->pending)) {
  FUNC_0(&VAR_2->pending);

  FUNC_3(VAR_0, &VAR_1->requests);
 }

 if (FUNC_5(VAR_4))
  FUNC_6(VAR_4);

 if (VAR_2->t_ops->is_periodic(VAR_2)) {
  FUNC_2(&VAR_2->timer, VAR_2->period);
  VAR_3 = 1;
 }

 return VAR_3;
}
