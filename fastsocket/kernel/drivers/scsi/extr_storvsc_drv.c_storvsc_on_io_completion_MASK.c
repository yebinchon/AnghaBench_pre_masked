
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* cdb; int scsi_status; int srb_status; int data_transfer_length; int sense_info_length; int sense_data; } ;
struct vstor_packet {TYPE_1__ vm_srb; } ;
struct storvsc_device {int waiting_to_drain; scalar_t__ drain_notify; int num_outstanding_req; } ;
struct storvsc_cmd_request {int sense_buffer; struct vstor_packet vstor_packet; } ;
struct hv_device {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,struct storvsc_cmd_request*,int,...) ;
 struct storvsc_device* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct storvsc_cmd_request*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hv_device *VAR_4,
      struct vstor_packet *VAR_5,
      struct storvsc_cmd_request *VAR_6)
{
 struct storvsc_device *VAR_7;
 struct vstor_packet *VAR_8;

 VAR_7 = FUNC_2(VAR_4);
 VAR_8 = &VAR_6->vstor_packet;
 if ((VAR_8->vm_srb.cdb[0] == VAR_0) ||
    (VAR_8->vm_srb.cdb[0] == VAR_1)) {
  VAR_5->vm_srb.scsi_status = 0;
  VAR_5->vm_srb.srb_status = VAR_3;
 }



 VAR_8->vm_srb.scsi_status = VAR_5->vm_srb.scsi_status;
 VAR_8->vm_srb.srb_status = VAR_5->vm_srb.srb_status;
 VAR_8->vm_srb.sense_info_length =
 VAR_5->vm_srb.sense_info_length;

 if (VAR_5->vm_srb.scsi_status != 0 ||
  VAR_5->vm_srb.srb_status != VAR_3){
  FUNC_1(&VAR_4->device,
    "cmd 0x%x scsi status 0x%x srb status 0x%x\n",
    VAR_8->vm_srb.cdb[0],
    VAR_5->vm_srb.scsi_status,
    VAR_5->vm_srb.srb_status);
 }

 if ((VAR_5->vm_srb.scsi_status & 0xFF) == 0x02) {

  if (VAR_5->vm_srb.srb_status &
   VAR_2) {

   FUNC_1(&VAR_4->device,
     "stor pkt %p autosense data valid - len %d\n",
     VAR_6,
     VAR_5->vm_srb.sense_info_length);

   FUNC_3(VAR_6->sense_buffer,
          VAR_5->vm_srb.sense_data,
          VAR_5->vm_srb.sense_info_length);

  }
 }

 VAR_8->vm_srb.data_transfer_length =
 VAR_5->vm_srb.data_transfer_length;

 FUNC_4(VAR_6);

 if (FUNC_0(&VAR_7->num_outstanding_req) &&
  VAR_7->drain_notify)
  FUNC_5(&VAR_7->waiting_to_drain);


}
