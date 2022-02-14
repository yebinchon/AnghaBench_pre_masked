
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_3__ {void* long_resp_size; void* long_resp_addr; void* long_req_size; void* long_req_addr; } ;
struct smp_req {char* smp_req16; char* smp_req; void* tag; TYPE_1__ long_smp_req; } ;
struct scatterlist {int length; } ;
struct TYPE_4__ {struct scatterlist smp_req; struct scatterlist smp_resp; } ;
struct sas_task {TYPE_2__ smp_task; struct domain_device* dev; } ;
struct pm8001_hba_info {void* smp_exp_mode; int dev; struct inbound_queue_table* inbnd_q_tbl; } ;
struct pm8001_device {int device_id; } ;
struct pm8001_ccb_info {int ccb_tag; struct sas_task* task; } ;
struct inbound_queue_table {int dummy; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
typedef int smp_cmd ;
typedef void* __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int ,void*,struct smp_req*,void*,int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,struct scatterlist*,int,int ) ;
 int FUNC_5 (int ,struct scatterlist*,int,int ) ;
 int FUNC_6 (struct smp_req*,int ,int) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (struct pm8001_hba_info*,struct inbound_queue_table*,int,int*,int ) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_12(struct pm8001_hba_info *VAR_7,
 struct pm8001_ccb_info *VAR_8)
{
 int VAR_9, VAR_10;
 struct sas_task *VAR_11 = VAR_8->task;
 struct domain_device *VAR_12 = VAR_11->dev;
 struct pm8001_device *VAR_13 = VAR_12->lldd_dev;
 struct scatterlist *VAR_14, *VAR_15;
 u32 VAR_16, VAR_17;
 struct smp_req VAR_18;
 u32 VAR_19;
 struct inbound_queue_table *VAR_20;
 char *VAR_21 = ((void*)0);
 __le64 VAR_22;
 u32 VAR_23, VAR_24;

 FUNC_6(&VAR_18, 0, sizeof(VAR_18));



 VAR_14 = &VAR_11->smp_task.smp_req;
 VAR_9 = FUNC_4(VAR_7->dev, VAR_14, 1, VAR_4);
 if (!VAR_9)
  return -VAR_1;
 VAR_16 = FUNC_11(VAR_14);

 VAR_15 = &VAR_11->smp_task.smp_resp;
 VAR_9 = FUNC_4(VAR_7->dev, VAR_15, 1, VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto err_out;
 }
 VAR_17 = FUNC_11(VAR_15);

 if ((VAR_16 & 0x3) || (VAR_17 & 0x3)) {
  VAR_10 = -VAR_0;
  goto err_out_2;
 }

 VAR_19 = VAR_2;
 VAR_20 = &VAR_7->inbnd_q_tbl[0];
 VAR_18.tag = FUNC_2(VAR_8->ccb_tag);

 VAR_24 = VAR_14->length;
 FUNC_0(VAR_7,
  FUNC_9("SMP Frame Length %d\n", VAR_14->length));
 if (!(VAR_24 - 8))
  VAR_7->smp_exp_mode = VAR_5;
 else
  VAR_7->smp_exp_mode = VAR_6;


 VAR_7->smp_exp_mode = VAR_5;

 VAR_22 = FUNC_3((u64)FUNC_10(&VAR_11->smp_task.smp_req));
 VAR_21 = (char *)FUNC_7(VAR_22);


 if (VAR_7->smp_exp_mode == VAR_6) {
  FUNC_0(VAR_7,
   FUNC_9("SMP REQUEST INDIRECT MODE\n"));


  for (VAR_23 = 0; VAR_23 < 4; VAR_23++)
   VAR_18.smp_req16[VAR_23] = *(VAR_21 + VAR_23);

  VAR_18.long_smp_req.long_req_addr =
   FUNC_3((u64)FUNC_10
    (&VAR_11->smp_task.smp_req) - 4);

  VAR_18.long_smp_req.long_req_size =
   FUNC_2((u32)FUNC_11(&VAR_11->smp_task.smp_req)-8);
  VAR_18.long_smp_req.long_resp_addr =
    FUNC_3((u64)FUNC_10
     (&VAR_11->smp_task.smp_resp));
  VAR_18.long_smp_req.long_resp_size =
    FUNC_2((u32)FUNC_11
     (&VAR_11->smp_task.smp_resp)-4);
 } else {
  VAR_18.long_smp_req.long_req_addr =
   FUNC_3((u64)FUNC_10
     (&VAR_11->smp_task.smp_req));
  VAR_18.long_smp_req.long_req_size =
   FUNC_2((u32)FUNC_11(&VAR_11->smp_task.smp_req)-4);
  VAR_18.long_smp_req.long_resp_addr =
   FUNC_3((u64)FUNC_10
    (&VAR_11->smp_task.smp_resp));
  VAR_18.long_smp_req.long_resp_size =
   FUNC_2
   ((u32)FUNC_11(&VAR_11->smp_task.smp_resp)-4);
 }
 if (VAR_7->smp_exp_mode == VAR_5) {
  FUNC_0(VAR_7,
   FUNC_9("SMP REQUEST DIRECT MODE\n"));
  for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++)
   if (VAR_23 < 16) {
    VAR_18.smp_req16[VAR_23] = *(VAR_21+VAR_23);
    FUNC_0(VAR_7, FUNC_9(
     "Byte[%d]:%x (DMA data:%x)\n",
     VAR_23, VAR_18.smp_req16[VAR_23],
     *(VAR_21)));
   } else {
    VAR_18.smp_req[VAR_23] = *(VAR_21+VAR_23);
    FUNC_0(VAR_7, FUNC_9(
     "Byte[%d]:%x (DMA data:%x)\n",
     VAR_23, VAR_18.smp_req[VAR_23],
     *(VAR_21)));
   }
 }

 FUNC_1(VAR_13->device_id, VAR_18.tag,
    &VAR_18, VAR_7->smp_exp_mode, VAR_24);
 FUNC_8(VAR_7, VAR_20, VAR_19, (u32 *)&VAR_18, 0);
 return 0;

err_out_2:
 FUNC_5(VAR_7->dev, &VAR_8->task->smp_task.smp_resp, 1,
   VAR_3);
err_out:
 FUNC_5(VAR_7->dev, &VAR_8->task->smp_task.smp_req, 1,
   VAR_4);
 return VAR_10;
}
