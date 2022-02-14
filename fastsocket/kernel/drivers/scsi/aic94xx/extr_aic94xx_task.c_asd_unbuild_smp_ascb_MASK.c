
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int smp_resp; int smp_req; } ;
struct sas_task {TYPE_2__ smp_task; } ;
struct asd_ascb {TYPE_1__* ha; struct sas_task* uldd_task; } ;
struct TYPE_3__ {int pcidev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int,int ) ;

__attribute__((used)) static void FUNC_2(struct asd_ascb *VAR_2)
{
 struct sas_task *VAR_3 = VAR_2->uldd_task;

 FUNC_0(!VAR_3);
 FUNC_1(VAR_2->ha->pcidev, &VAR_3->smp_task.smp_req, 1,
       VAR_1);
 FUNC_1(VAR_2->ha->pcidev, &VAR_3->smp_task.smp_resp, 1,
       VAR_0);
}
