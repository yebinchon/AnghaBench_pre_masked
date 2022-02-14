
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_target {int kref; } ;
struct ibmvfc_host {int work_wait_q; int abort_threads; } ;
struct ibmvfc_event {struct ibmvfc_target* tgt; struct ibmvfc_host* vhost; } ;


 int FUNC_0 (struct ibmvfc_event*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ibmvfc_target*,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ibmvfc_event *VAR_1)
{
 struct ibmvfc_host *VAR_2 = VAR_1->vhost;
 struct ibmvfc_target *VAR_3 = VAR_1->tgt;

 FUNC_2(VAR_3, "ADISC cancel complete\n");
 VAR_2->abort_threads--;
 FUNC_0(VAR_1);
 FUNC_1(&VAR_3->kref, VAR_0);
 FUNC_3(&VAR_2->work_wait_q);
}
