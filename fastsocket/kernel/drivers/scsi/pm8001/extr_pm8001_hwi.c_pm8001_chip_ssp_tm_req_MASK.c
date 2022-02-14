
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssp_ini_tm_start_req {void* tag; int lun; void* tmf; void* relate_tag; void* device_id; } ;
struct TYPE_2__ {int LUN; } ;
struct sas_task {TYPE_1__ ssp_task; struct domain_device* dev; } ;
struct pm8001_tmf_task {int tmf; int tag_of_task_to_be_managed; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct pm8001_device {int device_id; } ;
struct pm8001_ccb_info {int ccb_tag; struct sas_task* task; } ;
struct inbound_queue_table {int dummy; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
typedef int sspTMCmd ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ssp_ini_tm_start_req*,int ,int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct inbound_queue_table*,int ,struct ssp_ini_tm_start_req*,int ) ;

int FUNC_4(struct pm8001_hba_info *VAR_1,
 struct pm8001_ccb_info *VAR_2, struct pm8001_tmf_task *VAR_3)
{
 struct sas_task *VAR_4 = VAR_2->task;
 struct domain_device *VAR_5 = VAR_4->dev;
 struct pm8001_device *VAR_6 = VAR_5->lldd_dev;
 u32 VAR_7 = VAR_0;
 struct inbound_queue_table *VAR_8;
 struct ssp_ini_tm_start_req VAR_9;
 int VAR_10;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.device_id = FUNC_0(VAR_6->device_id);
 VAR_9.relate_tag = FUNC_0(VAR_3->tag_of_task_to_be_managed);
 VAR_9.tmf = FUNC_0(VAR_3->tmf);
 FUNC_1(VAR_9.lun, VAR_4->ssp_task.LUN, 8);
 VAR_9.tag = FUNC_0(VAR_2->ccb_tag);
 VAR_8 = &VAR_1->inbnd_q_tbl[0];
 VAR_10 = FUNC_3(VAR_1, VAR_8, VAR_7, &VAR_9, 0);
 return VAR_10;
}
