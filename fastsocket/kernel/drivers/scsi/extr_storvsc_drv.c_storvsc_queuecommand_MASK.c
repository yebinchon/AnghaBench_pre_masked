
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int time_out_value; int srb_flags; } ;
struct vmscsi_request {scalar_t__ data_in; int cdb_length; int cdb; int lun; int target_id; int path_id; int port_number; TYPE_2__ win8_extension; } ;
struct TYPE_8__ {int offset; int* pfn_array; int len; } ;
struct TYPE_5__ {struct vmscsi_request vm_srb; } ;
struct storvsc_cmd_request {int bounce_sgl_count; struct scatterlist* bounce_sgl; TYPE_4__ data_buffer; int sense_buffer; TYPE_1__ vstor_packet; struct scsi_cmnd* cmd; } ;
struct stor_mem_pools {int request_mempool; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;unsigned char* host_scribble; int sc_data_direction; int sense_buffer; int cmnd; int cmd_len; TYPE_3__* device; } ;
struct scatterlist {int offset; } ;
struct hv_host_device {int port; struct hv_device* dev; } ;
struct hv_device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {int lun; int id; int channel; struct stor_mem_pools* hostdata; struct Scsi_Host* host; } ;


 int FUNC_0 (int ,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (struct scatterlist*,struct scatterlist*,int) ;
 struct scatterlist* FUNC_2 (struct scatterlist*,int,int ,scalar_t__) ;
 int FUNC_3 (struct scatterlist*,int) ;
 int FUNC_4 (struct scatterlist*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 struct storvsc_cmd_request* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct storvsc_cmd_request*,int ) ;
 int FUNC_8 (struct storvsc_cmd_request*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scatterlist*) ;
 struct hv_host_device* FUNC_14 (struct Scsi_Host*) ;
 int FUNC_15 (struct hv_device*,struct storvsc_cmd_request*) ;
 int FUNC_16 (struct scsi_cmnd*) ;
 void FUNC_17 (struct scsi_cmnd*) ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct scsi_cmnd *VAR_13,
 void (*VAR_14)(struct scsi_cmnd *VAR_15))
{
 struct Scsi_Host *VAR_16 = VAR_13->device->host;
 int VAR_17;
 struct hv_host_device *VAR_18 = FUNC_14(VAR_16);
 struct hv_device *VAR_19 = VAR_18->dev;
 struct storvsc_cmd_request *VAR_20;
 unsigned int VAR_21 = 0;
 int VAR_22;
 struct scatterlist *VAR_23;
 unsigned int VAR_24 = 0;
 struct vmscsi_request *VAR_25;
 struct stor_mem_pools *VAR_26 = VAR_13->device->hostdata;

 VAR_13->scsi_done = VAR_14;

 if (!FUNC_16(VAR_13)) {
  VAR_13->scsi_done(VAR_13);
  return 0;
 }

 VAR_21 = sizeof(struct storvsc_cmd_request);

 VAR_20 = FUNC_6(VAR_26->request_mempool,
           VAR_1);





 if (!VAR_20)
  return VAR_5;

 FUNC_8(VAR_20, 0, sizeof(struct storvsc_cmd_request));


 VAR_20->cmd = VAR_13;

 VAR_13->host_scribble = (unsigned char *)VAR_20;

 VAR_25 = &VAR_20->vstor_packet.vm_srb;
 VAR_25->win8_extension.time_out_value = 60;



 switch (VAR_13->sc_data_direction) {
 case 128:
  VAR_25->data_in = VAR_12;
  VAR_25->win8_extension.srb_flags |= VAR_8;
  VAR_25->win8_extension.srb_flags |=
   (VAR_10 |
   VAR_9);
  break;
 case 129:
  VAR_25->data_in = VAR_4;
  VAR_25->win8_extension.srb_flags |= VAR_7;
  VAR_25->win8_extension.srb_flags |=
   (VAR_10 |
   VAR_9);
  break;
 default:
  VAR_25->data_in = VAR_11;
  VAR_25->win8_extension.srb_flags = 0;
  break;
 }


 VAR_25->port_number = VAR_18->port;
 VAR_25->path_id = VAR_13->device->channel;
 VAR_25->target_id = VAR_13->device->id;
 VAR_25->lun = VAR_13->device->lun;

 VAR_25->cdb_length = VAR_13->cmd_len;

 FUNC_5(VAR_25->cdb, VAR_13->cmnd, VAR_25->cdb_length);

 VAR_20->sense_buffer = VAR_13->sense_buffer;


 VAR_20->data_buffer.len = FUNC_10(VAR_13);
 if (FUNC_11(VAR_13)) {
  VAR_23 = (struct scatterlist *)FUNC_12(VAR_13);
  VAR_24 = FUNC_11(VAR_13);


  if (FUNC_4(VAR_23, FUNC_11(VAR_13)) != -1) {
   VAR_20->bounce_sgl =
    FUNC_2(VAR_23, FUNC_11(VAR_13),
           FUNC_10(VAR_13),
           VAR_25->data_in);
   if (!VAR_20->bounce_sgl) {
    VAR_17 = VAR_6;
    goto queue_error;
   }

   VAR_20->bounce_sgl_count =
    FUNC_0(FUNC_10(VAR_13), VAR_3) >>
     VAR_2;

   if (VAR_25->data_in == VAR_12)
    FUNC_1(VAR_23,
     VAR_20->bounce_sgl,
     FUNC_11(VAR_13));

   VAR_23 = VAR_20->bounce_sgl;
   VAR_24 = VAR_20->bounce_sgl_count;
  }

  VAR_20->data_buffer.offset = VAR_23[0].offset;

  for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++)
   VAR_20->data_buffer.pfn_array[VAR_22] =
    FUNC_9(FUNC_13((&VAR_23[VAR_22])));

 } else if (FUNC_12(VAR_13)) {
  VAR_20->data_buffer.offset =
   FUNC_18(FUNC_12(VAR_13)) & (VAR_3-1);
  VAR_20->data_buffer.pfn_array[0] =
   FUNC_18(FUNC_12(VAR_13)) >> VAR_2;
 }


 VAR_17 = FUNC_15(VAR_19, VAR_20);

 if (VAR_17 == -VAR_0) {


  if (VAR_20->bounce_sgl_count) {
   FUNC_3(VAR_20->bounce_sgl,
     VAR_20->bounce_sgl_count);

   VAR_17 = VAR_5;
   goto queue_error;
  }
 }

 return 0;

queue_error:
 FUNC_7(VAR_20, VAR_26->request_mempool);
 VAR_13->host_scribble = ((void*)0);
 return VAR_17;
}
