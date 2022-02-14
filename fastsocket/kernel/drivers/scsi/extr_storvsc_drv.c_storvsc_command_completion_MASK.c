
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmscsi_request {scalar_t__ data_in; scalar_t__ srb_status; scalar_t__ data_transfer_length; scalar_t__ scsi_status; } ;
struct storvsc_device {struct Scsi_Host* host; } ;
struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_5__ {struct vmscsi_request vm_srb; } ;
struct storvsc_cmd_request {TYPE_3__ data_buffer; scalar_t__ bounce_sgl_count; int bounce_sgl; TYPE_2__ vstor_packet; struct scsi_cmnd* cmd; } ;
struct stor_mem_pools {int request_mempool; } ;
struct scsi_sense_hdr {int ascq; int asc; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; int sense_buffer; scalar_t__ result; TYPE_1__* device; } ;
struct hv_host_device {struct hv_device* dev; } ;
struct hv_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {struct stor_mem_pools* hostdata; int host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct storvsc_device* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (struct storvsc_cmd_request*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,struct scsi_sense_hdr*) ;
 int FUNC_5 (char*,struct scsi_sense_hdr*) ;
 int FUNC_6 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 struct hv_host_device* FUNC_9 (int ) ;
 int FUNC_10 (struct vmscsi_request*,struct scsi_cmnd*,struct Scsi_Host*,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct storvsc_cmd_request *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->cmd;
 struct hv_host_device *VAR_5 = FUNC_9(VAR_4->device->host);
 void (*VAR_6)(struct scsi_cmnd *);
 struct scsi_sense_hdr VAR_7;
 struct vmscsi_request *VAR_8;
 struct stor_mem_pools *VAR_9 = VAR_4->device->hostdata;
 struct Scsi_Host *VAR_10;
 struct storvsc_device *VAR_11;
 struct hv_device *VAR_12 = VAR_5->dev;

 VAR_11 = FUNC_2(VAR_12);
 VAR_10 = VAR_11->host;

 VAR_8 = &VAR_3->vstor_packet.vm_srb;
 if (VAR_3->bounce_sgl_count) {
  if (VAR_8->data_in == VAR_0)
   FUNC_0(FUNC_8(VAR_4),
     VAR_3->bounce_sgl,
     FUNC_7(VAR_4),
     VAR_3->bounce_sgl_count);
  FUNC_1(VAR_3->bounce_sgl,
     VAR_3->bounce_sgl_count);
 }

 VAR_4->result = VAR_8->scsi_status;

 if (VAR_4->result) {
  if (FUNC_4(VAR_4->sense_buffer,
    VAR_1, &VAR_7))
   FUNC_5("storvsc", &VAR_7);
 }

 if (VAR_8->srb_status != VAR_2)
  FUNC_10(VAR_8, VAR_4, VAR_10, VAR_7.asc,
      VAR_7.ascq);

 FUNC_6(VAR_4,
  VAR_3->data_buffer.len -
  VAR_8->data_transfer_length);

 VAR_6 = VAR_4->scsi_done;

 VAR_4->host_scribble = ((void*)0);
 VAR_4->scsi_done = ((void*)0);

 VAR_6(VAR_4);

 FUNC_3(VAR_3, VAR_9->request_mempool);
}
