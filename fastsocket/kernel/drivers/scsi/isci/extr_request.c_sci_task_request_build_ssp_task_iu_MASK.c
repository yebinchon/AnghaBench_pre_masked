
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssp_task_iu {int task_tag; int task_func; int LUN; } ;
struct TYPE_3__ {int LUN; } ;
struct sas_task {TYPE_1__ ssp_task; } ;
struct isci_tmf {int io_tag; int tmf_code; } ;
struct TYPE_4__ {struct ssp_task_iu tmf; } ;
struct isci_request {int flags; TYPE_2__ ssp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sas_task* FUNC_0 (struct isci_request*) ;
 struct isci_tmf* FUNC_1 (struct isci_request*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ssp_task_iu*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct isci_request *VAR_2)
{
 struct ssp_task_iu *VAR_3;
 struct sas_task *VAR_4 = FUNC_0(VAR_2);
 struct isci_tmf *VAR_5 = FUNC_1(VAR_2);

 VAR_3 = &VAR_2->ssp.tmf;

 FUNC_3(VAR_3, 0, sizeof(struct ssp_task_iu));

 FUNC_2(VAR_3->LUN, VAR_4->ssp_task.LUN, 8);

 VAR_3->task_func = VAR_5->tmf_code;
 VAR_3->task_tag =
  (FUNC_4(VAR_0, &VAR_2->flags)) ?
  VAR_5->io_tag :
  VAR_1;
}
