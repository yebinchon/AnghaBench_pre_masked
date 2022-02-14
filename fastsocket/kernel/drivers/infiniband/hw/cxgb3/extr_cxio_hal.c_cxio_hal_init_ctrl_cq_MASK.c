
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_cq_setup {int size; int ovfl_mode; scalar_t__ credit_thres; scalar_t__ credits; scalar_t__ base_addr; scalar_t__ id; } ;
struct cxio_rdev {TYPE_1__* t3cdev_p; } ;
struct TYPE_2__ {int (* ctl ) (TYPE_1__*,int ,struct rdma_cq_setup*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,struct rdma_cq_setup*) ;

__attribute__((used)) static int FUNC_1(struct cxio_rdev *VAR_1)
{
 struct rdma_cq_setup VAR_2;
 VAR_2.id = 0;
 VAR_2.base_addr = 0;
 VAR_2.size = 1;
 VAR_2.credits = 0;


 VAR_2.credit_thres = 0;
 VAR_2.ovfl_mode = 1;
 return (VAR_1->t3cdev_p->ctl(VAR_1->t3cdev_p, VAR_0, &VAR_2));
}
