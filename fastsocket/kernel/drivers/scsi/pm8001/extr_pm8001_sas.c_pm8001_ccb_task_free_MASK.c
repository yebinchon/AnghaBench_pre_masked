
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int smp_req; int smp_resp; } ;
struct sas_task {int task_proto; int num_scatter; int * lldd_task; TYPE_1__ smp_task; int data_dir; int * scatter; } ;
struct pm8001_hba_info {int dev; } ;
struct pm8001_ccb_info {int ccb_tag; scalar_t__ open_retry; int * task; scalar_t__ n_elem; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct pm8001_hba_info *VAR_2,
 struct sas_task *VAR_3, struct pm8001_ccb_info *VAR_4, u32 VAR_5)
{
 if (!VAR_4->task)
  return;
 if (!FUNC_2(VAR_3->task_proto))
  if (VAR_4->n_elem)
   FUNC_0(VAR_2->dev, VAR_3->scatter,
    VAR_3->num_scatter, VAR_3->data_dir);

 switch (VAR_3->task_proto) {
 case 130:
  FUNC_0(VAR_2->dev, &VAR_3->smp_task.smp_resp, 1,
   VAR_0);
  FUNC_0(VAR_2->dev, &VAR_3->smp_task.smp_req, 1,
   VAR_1);
  break;

 case 131:
 case 128:
 case 129:
 default:

  break;
 }
 VAR_3->lldd_task = ((void*)0);
 VAR_4->task = ((void*)0);
 VAR_4->ccb_tag = 0xFFFFFFFF;
 VAR_4->open_retry = 0;
 FUNC_1(VAR_2, VAR_5);
}
