
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmscsi_win8_extension {int dummy; } ;
struct storvsc_device {int destroy; int open_sub_channel; int target_id; int path_id; int port_number; struct Scsi_Host* host; struct hv_device* device; int waiting_to_drain; } ;
struct hv_vmbus_device_id {scalar_t__ driver_data; } ;
struct hv_host_device {int target; int path; struct hv_device* dev; int port; } ;
struct TYPE_2__ {int* b; } ;
struct hv_device {TYPE_1__ dev_instance; int device; } ;
struct Scsi_Host {int max_cmd_len; scalar_t__ max_channel; int max_id; int max_lun; int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct hv_device*,struct storvsc_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct storvsc_device*) ;
 struct storvsc_device* FUNC_3 (int,int ) ;
 int FUNC_4 (struct hv_host_device*,int ,int) ;
 int FUNC_5 (struct Scsi_Host*,int ,int,int ) ;
 int FUNC_6 (struct Scsi_Host*,int *) ;
 int VAR_14 ;
 struct Scsi_Host* FUNC_7 (int *,int) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int VAR_15 ;
 struct hv_host_device* FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (struct hv_device*,int ) ;
 int FUNC_13 (struct hv_device*) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_14(struct hv_device *VAR_21,
   const struct hv_vmbus_device_id *VAR_22)
{
 int VAR_23;
 struct Scsi_Host *VAR_24;
 struct hv_host_device *VAR_25;
 bool VAR_26 = ((VAR_22->driver_data == VAR_2) ? 1 : 0);
 int VAR_27 = 0;
 struct storvsc_device *VAR_28;






 if (VAR_17 == VAR_9) {
  VAR_15 = VAR_3;
  VAR_18 = 0;
  VAR_19 = VAR_12;
  VAR_20 = VAR_13;
 } else {
  VAR_15 = VAR_4;
  VAR_18 = sizeof(struct vmscsi_win8_extension);
  VAR_19 = VAR_10;
  VAR_20 = VAR_11;
 }


 VAR_24 = FUNC_7(&VAR_14,
          sizeof(struct hv_host_device));
 if (!VAR_24)
  return -VAR_0;

 VAR_25 = FUNC_11(VAR_24);
 FUNC_4(VAR_25, 0, sizeof(struct hv_host_device));

 VAR_25->port = VAR_24->host_no;
 VAR_25->dev = VAR_21;


 VAR_28 = FUNC_3(sizeof(struct storvsc_device), VAR_1);
 if (!VAR_28) {
  VAR_23 = -VAR_0;
  goto err_out0;
 }

 VAR_28->destroy = 0;
 VAR_28->open_sub_channel = 0;
 FUNC_1(&VAR_28->waiting_to_drain);
 VAR_28->device = VAR_21;
 VAR_28->host = VAR_24;
 FUNC_0(VAR_21, VAR_28);

 VAR_28->port_number = VAR_24->host_no;
 VAR_23 = FUNC_12(VAR_21, VAR_16);
 if (VAR_23)
  goto err_out1;

 VAR_25->path = VAR_28->path_id;
 VAR_25->target = VAR_28->target_id;


 VAR_24->max_lun = VAR_7;

 VAR_24->max_id = VAR_8;

 VAR_24->max_channel = VAR_5 - 1;

 VAR_24->max_cmd_len = VAR_6;


 VAR_23 = FUNC_6(VAR_24, &VAR_21->device);
 if (VAR_23 != 0)
  goto err_out2;

 if (!VAR_26) {
  FUNC_10(VAR_24);
 } else {
  VAR_27 = (VAR_21->dev_instance.b[5] << 8 |
    VAR_21->dev_instance.b[4]);
  VAR_23 = FUNC_5(VAR_24, 0, VAR_27, 0);
  if (VAR_23) {
   FUNC_9(VAR_24);
   goto err_out2;
  }
 }
 return 0;

err_out2:






 FUNC_13(VAR_21);
 goto err_out0;

err_out1:
 FUNC_2(VAR_28);

err_out0:
 FUNC_8(VAR_24);
 return VAR_23;
}
