
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvfc_target {scalar_t__ init_retries; TYPE_1__* vhost; } ;
struct TYPE_2__ {int work_wait_q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ibmvfc_target*,void (*) (struct ibmvfc_target*)) ;
 int FUNC_1 (struct ibmvfc_target*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ibmvfc_target *VAR_2,
      void (*VAR_3) (struct ibmvfc_target *))
{
 if (++VAR_2->init_retries > VAR_0) {
  FUNC_1(VAR_2, VAR_1);
  FUNC_2(&VAR_2->vhost->work_wait_q);
  return 0;
 } else
  FUNC_0(VAR_2, VAR_3);
 return 1;
}
