
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; int * cmnd; TYPE_1__* device; int result; int * sense_buffer; } ;
struct asc_board {TYPE_2__* adv_reqp; } ;
struct TYPE_11__ {struct TYPE_11__* next_reqp; int * sgblkp; struct scsi_cmnd* cmndp; int scsi_req_q; } ;
typedef TYPE_2__ adv_req_t ;
struct TYPE_13__ {int sg_tablesize; } ;
struct TYPE_12__ {int cdb_len; void* data_cnt; scalar_t__ sg_real_addr; int * sg_list_ptr; scalar_t__ data_addr; int * vdata_addr; int sense_len; void* sense_addr; int target_lun; int target_id; int * cdb16; int * cdb; int srb_ptr; scalar_t__ done_status; scalar_t__ scsi_cntl; scalar_t__ cntl; } ;
struct TYPE_10__ {TYPE_6__* host; int lun; int id; } ;
typedef TYPE_3__ ADV_SCSI_REQ_Q ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,TYPE_3__*) ;
 int FUNC_4 (int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct asc_board*,TYPE_2__*,struct scsi_cmnd*,int) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ,struct scsi_cmnd*,char*,int,int ) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (int *) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_15(struct asc_board *VAR_11, struct scsi_cmnd *VAR_12,
       ADV_SCSI_REQ_Q **VAR_13)
{
 adv_req_t *VAR_14;
 ADV_SCSI_REQ_Q *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;





 if (VAR_11->adv_reqp == ((void*)0)) {
  FUNC_2(1, "no free adv_req_t\n");
  FUNC_5(VAR_12->device->host, VAR_8);
  return VAR_2;
 } else {
  VAR_14 = VAR_11->adv_reqp;
  VAR_11->adv_reqp = VAR_14->next_reqp;
  VAR_14->next_reqp = ((void*)0);
 }




 VAR_15 = (ADV_SCSI_REQ_Q *)FUNC_0(&VAR_14->scsi_req_q);




 VAR_15->cntl = VAR_15->scsi_cntl = VAR_15->done_status = 0;




 VAR_15->srb_ptr = FUNC_1(VAR_14);




 VAR_14->cmndp = VAR_12;






 VAR_15->cdb_len = VAR_12->cmd_len;

 for (VAR_16 = 0; VAR_16 < VAR_12->cmd_len && VAR_16 < 12; VAR_16++) {
  VAR_15->cdb[VAR_16] = VAR_12->cmnd[VAR_16];
 }

 for (; VAR_16 < VAR_12->cmd_len; VAR_16++) {
  VAR_15->cdb16[VAR_16 - 12] = VAR_12->cmnd[VAR_16];
 }

 VAR_15->target_id = VAR_12->device->id;
 VAR_15->target_lun = VAR_12->device->lun;

 VAR_15->sense_addr = FUNC_9(FUNC_14(&VAR_12->sense_buffer[0]));
 VAR_15->sense_len = VAR_7;



 VAR_18 = FUNC_12(VAR_12);
 if (VAR_18 == 0) {

  VAR_14->sgblkp = ((void*)0);
  VAR_15->data_cnt = 0;
  VAR_15->vdata_addr = ((void*)0);

  VAR_15->data_addr = 0;
  VAR_15->sg_list_ptr = ((void*)0);
  VAR_15->sg_real_addr = 0;
 } else {
  if (VAR_18 > VAR_0) {
   FUNC_10(VAR_6, VAR_12, "use_sg %d > "
       "ADV_MAX_SG_LIST %d\n", VAR_18,
       VAR_12->device->host->sg_tablesize);
   FUNC_13(VAR_12);
   VAR_12->result = FUNC_7(VAR_5);





   VAR_14->next_reqp = VAR_11->adv_reqp;
   VAR_11->adv_reqp = VAR_14;

   return VAR_3;
  }

  VAR_15->data_cnt = FUNC_9(FUNC_11(VAR_12));

  VAR_17 = FUNC_8(VAR_11, VAR_14, VAR_12, VAR_18);
  if (VAR_17 != VAR_1) {




   VAR_14->next_reqp = VAR_11->adv_reqp;
   VAR_11->adv_reqp = VAR_14;

   return VAR_17;
  }

  FUNC_6(VAR_12->device->host, VAR_10, VAR_18);
 }

 FUNC_5(VAR_12->device->host, VAR_9);

 FUNC_3(2, VAR_15);
 FUNC_4(1, VAR_12->cmnd, VAR_12->cmd_len);

 *VAR_13 = VAR_15;

 return VAR_4;
}
