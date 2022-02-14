
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int task_abort ;
struct task_abort_req {void* tag; void* device_id; void* abort_all; } ;
struct sas_task {int task_done; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_device {size_t device_id; } ;
struct pm8001_ccb_info {size_t ccb_tag; struct sas_task* task; struct pm8001_device* device; } ;
struct inbound_queue_table {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (struct task_abort_req*,int ,int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct task_abort_req*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pm8001_hba_info*,size_t*) ;
 int VAR_2 ;
 struct sas_task* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct pm8001_hba_info *VAR_3,
  struct pm8001_device *VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct pm8001_ccb_info *VAR_7;
 struct sas_task *VAR_8 = ((void*)0);
 struct task_abort_req VAR_9;
 struct inbound_queue_table *VAR_10;
 u32 VAR_11 = VAR_1;
 int VAR_12;

 if (!VAR_4) {
  FUNC_0(VAR_3, FUNC_4("dev is null\n"));
  return;
 }

 VAR_8 = FUNC_6(VAR_0);

 if (!VAR_8) {
  FUNC_0(VAR_3, FUNC_4("cannot "
      "allocate task\n"));
  return;
 }

 VAR_8->task_done = VAR_2;

 VAR_5 = FUNC_5(VAR_3, &VAR_6);
 if (VAR_5)
  return;

 VAR_7 = &VAR_3->ccb_info[VAR_6];
 VAR_7->device = VAR_4;
 VAR_7->ccb_tag = VAR_6;
 VAR_7->task = VAR_8;

 VAR_10 = &VAR_3->inbnd_q_tbl[0];

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.abort_all = FUNC_1(1);
 VAR_9.device_id = FUNC_1(VAR_4->device_id);
 VAR_9.tag = FUNC_1(VAR_6);

 VAR_12 = FUNC_3(VAR_3, VAR_10, VAR_11, &VAR_9, 0);

}
