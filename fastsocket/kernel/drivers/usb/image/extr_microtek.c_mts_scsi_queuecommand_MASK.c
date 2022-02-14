
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int result; int cmd_len; int cmnd; TYPE_2__* device; } ;
struct TYPE_6__ {int (* final_callback ) (struct scsi_cmnd*) ;} ;
struct mts_desc {int urb; TYPE_3__ context; int ep_out; int usb_dev; } ;
typedef int (* mts_scsi_cmnd_callback ) (struct scsi_cmnd*) ;
struct TYPE_5__ {scalar_t__ channel; scalar_t__ id; scalar_t__ lun; TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct scsi_cmnd*,struct mts_desc*) ;
 int VAR_3 ;
 int FUNC_5 (struct mts_desc*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct scsi_cmnd *VAR_4, mts_scsi_cmnd_callback VAR_5)
{
 struct mts_desc* VAR_6 = (struct mts_desc*)(VAR_4->device->host->hostdata[0]);
 int VAR_7 = 0;
 int VAR_8;

 FUNC_1();
 FUNC_6(VAR_4);
 FUNC_5(VAR_6);

 if ( VAR_4->device->lun || VAR_4->device->id || VAR_4->device->channel ) {

  FUNC_0("Command to LUN=%d ID=%d CHANNEL=%d from SCSI layer\n",(int)VAR_4->device->lun,(int)VAR_4->device->id, (int)VAR_4->device->channel );

  FUNC_0("this device doesn't exist\n");

  VAR_4->result = VAR_0 << 16;

  if(FUNC_3(VAR_5 != ((void*)0)))
   VAR_5(VAR_4);

  goto out;
 }


 FUNC_8(VAR_6->urb,
        VAR_6->usb_dev,
        FUNC_9(VAR_6->usb_dev,VAR_6->ep_out),
        VAR_4->cmnd,
        VAR_4->cmd_len,
        VAR_3,
        &VAR_6->context
        );


 FUNC_4( VAR_4, VAR_6 );
 VAR_6->context.final_callback = VAR_5;


 VAR_8=FUNC_10(VAR_6->urb, VAR_2);

 if(FUNC_7(VAR_8)){
  FUNC_2("error %d submitting URB\n",(int)VAR_8);
  VAR_4->result = VAR_1 << 16;

  if(FUNC_3(VAR_5 != ((void*)0)))
   VAR_5(VAR_4);

 }
out:
 return VAR_7;
}
