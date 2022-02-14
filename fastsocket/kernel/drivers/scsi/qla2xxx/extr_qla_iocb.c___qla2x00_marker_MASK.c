
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct scsi_qla_host {int vp_idx; struct qla_hw_data* hw; } ;
struct rsp_que {int dummy; } ;
struct req_que {int id; } ;
struct qla_hw_data {struct req_que** req_q_map; int pdev; } ;
struct mrk_entry_fx00 {void** lun; void* tgt_id; scalar_t__ handle_hi; void* handle; } ;
struct mrk_entry_24xx {void* handle; int vp_index; void** lun; void* nport_handle; } ;
typedef int scsi_qla_host_t ;
struct TYPE_2__ {void* lun; int target; scalar_t__ modifier; int entry_type; } ;
typedef TYPE_1__ mrk_entry_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ,void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct qla_hw_data*,int ,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void**,int) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (struct scsi_qla_host*,int *) ;
 int FUNC_11 (struct scsi_qla_host*,struct req_que*) ;
 int FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(struct scsi_qla_host *VAR_5, struct req_que *VAR_6,
   struct rsp_que *VAR_7, uint16_t VAR_8,
   uint16_t VAR_9, uint8_t VAR_10)
{
 mrk_entry_t *VAR_11;
 struct mrk_entry_24xx *VAR_12 = ((void*)0);
 struct mrk_entry_fx00 *VAR_13 = ((void*)0);

 struct qla_hw_data *VAR_14 = VAR_5->hw;
 scsi_qla_host_t *VAR_15 = FUNC_8(VAR_14->pdev);

 VAR_6 = VAR_14->req_q_map[0];
 VAR_11 = (mrk_entry_t *)FUNC_10(VAR_5, ((void*)0));
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_4, VAR_15, 0x3026,
      "Failed to allocate Marker IOCB.\n");

  return (VAR_2);
 }

 VAR_11->entry_type = VAR_0;
 VAR_11->modifier = VAR_10;
 if (VAR_10 != VAR_1) {
  if (FUNC_1(VAR_14)) {
   VAR_13 = (struct mrk_entry_fx00 *) VAR_11;
   VAR_13->handle = FUNC_3(VAR_6->id, VAR_13->handle);
   VAR_13->handle_hi = 0;
   VAR_13->tgt_id = FUNC_6(VAR_8);
   VAR_13->lun[1] = FUNC_2(VAR_9);
   VAR_13->lun[2] = FUNC_4(VAR_9);
   FUNC_7(VAR_13->lun, sizeof(VAR_13->lun));
  } else if (FUNC_0(VAR_14)) {
   VAR_12 = (struct mrk_entry_24xx *) VAR_11;
   VAR_12->nport_handle = FUNC_6(VAR_8);
   VAR_12->lun[1] = FUNC_2(VAR_9);
   VAR_12->lun[2] = FUNC_4(VAR_9);
   FUNC_7(VAR_12->lun, sizeof(VAR_12->lun));
   VAR_12->vp_index = VAR_5->vp_idx;
   VAR_12->handle = FUNC_3(VAR_6->id, VAR_12->handle);
  } else {
   FUNC_5(VAR_14, VAR_11->target, VAR_8);
   VAR_11->lun = FUNC_6(VAR_9);
  }
 }
 FUNC_12();

 FUNC_11(VAR_5, VAR_6);

 return (VAR_3);
}
