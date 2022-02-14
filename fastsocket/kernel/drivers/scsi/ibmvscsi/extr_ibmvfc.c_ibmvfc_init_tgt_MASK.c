
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvfc_target {void (* job_step ) (struct ibmvfc_target*) ;TYPE_1__* vhost; } ;
struct TYPE_2__ {int work_wait_q; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibmvfc_target*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ibmvfc_target *VAR_1,
       void (*VAR_2) (struct ibmvfc_target *))
{
 FUNC_0(VAR_1, VAR_0);
 VAR_1->job_step = VAR_2;
 FUNC_1(&VAR_1->vhost->work_wait_q);
}
