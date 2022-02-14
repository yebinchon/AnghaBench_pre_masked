
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ sc_data_direction; int result; TYPE_2__* device; } ;
struct sbp2_lu {int ne; struct sbp2_fwhost_info* hi; } ;
struct sbp2_fwhost_info {int dummy; } ;
struct TYPE_4__ {int lun; TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sbp2_lu*,struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_3 (struct sbp2_lu*,int ,struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_4 (struct sbp2_lu*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_5,
     void (*VAR_6)(struct scsi_cmnd *))
{
 struct sbp2_lu *VAR_7 = (struct sbp2_lu *)VAR_5->device->host->hostdata[0];
 struct sbp2_fwhost_info *VAR_8;
 int VAR_9 = VAR_2 << 16;

 if (FUNC_5(!FUNC_4(VAR_7)))
  goto done;

 VAR_8 = VAR_7->hi;

 if (FUNC_5(!VAR_8)) {
  FUNC_0("sbp2_fwhost_info is NULL - this is bad!");
  goto done;
 }




 if (FUNC_5(VAR_5->device->lun))
  goto done;

 if (FUNC_5(!FUNC_1(VAR_7->ne))) {
  FUNC_0("Bus reset in progress - rejecting command");
  VAR_9 = VAR_0 << 16;
  goto done;
 }



 if (FUNC_5(VAR_5->sc_data_direction == VAR_3)) {
  FUNC_0("Cannot handle DMA_BIDIRECTIONAL - rejecting command");
  VAR_9 = VAR_1 << 16;
  goto done;
 }

 if (FUNC_2(VAR_7, VAR_5, VAR_6)) {
  FUNC_0("Error sending SCSI command");
  FUNC_3(VAR_7,
       VAR_4,
       VAR_5, VAR_6);
 }
 return 0;

done:
 VAR_5->result = VAR_9;
 VAR_6(VAR_5);
 return 0;
}
