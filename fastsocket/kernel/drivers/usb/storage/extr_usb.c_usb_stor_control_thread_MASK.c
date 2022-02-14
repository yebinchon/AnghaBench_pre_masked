
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct us_data {int fflags; scalar_t__ max_lun; int dev_mutex; TYPE_2__* srb; int dflags; int notify; int (* proto_handler ) (TYPE_2__*,struct us_data*) ;int cmnd_ready; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int result; scalar_t__ sc_data_direction; scalar_t__* cmnd; int (* scsi_done ) (TYPE_2__*) ;TYPE_1__* device; } ;
struct TYPE_5__ {scalar_t__ lun; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct us_data*,unsigned char*,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,struct us_data*) ;
 int FUNC_14 (TYPE_2__*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 struct Scsi_Host* FUNC_16 (struct us_data*) ;
 int FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(void * VAR_12)
{
 struct us_data *VAR_13 = (struct us_data *)VAR_12;
 struct Scsi_Host *VAR_14 = FUNC_16(VAR_13);

 for(;;) {
  FUNC_1("*** thread sleeping.\n");
  if (FUNC_18(&VAR_13->cmnd_ready))
   break;

  FUNC_1("*** thread awakened.\n");


  FUNC_7(&(VAR_13->dev_mutex));


  FUNC_10(VAR_14);


  if (VAR_13->srb == ((void*)0)) {
   FUNC_11(VAR_14);
   FUNC_8(&VAR_13->dev_mutex);
   FUNC_1("-- exiting\n");
   break;
  }


  if (FUNC_15(VAR_9, &VAR_13->dflags)) {
   VAR_13->srb->result = VAR_0 << 16;
   goto SkipForAbort;
  }

  FUNC_11(VAR_14);




  if (VAR_13->srb->sc_data_direction == VAR_3) {
   FUNC_1("UNKNOWN data direction\n");
   VAR_13->srb->result = VAR_2 << 16;
  }




  else if (VAR_13->srb->device->id &&
    !(VAR_13->fflags & VAR_11)) {
   FUNC_1("Bad target number (%d:%d)\n",
      VAR_13->srb->device->id, VAR_13->srb->device->lun);
   VAR_13->srb->result = VAR_1 << 16;
  }

  else if (VAR_13->srb->device->lun > VAR_13->max_lun) {
   FUNC_1("Bad LUN (%d:%d)\n",
      VAR_13->srb->device->id, VAR_13->srb->device->lun);
   VAR_13->srb->result = VAR_1 << 16;
  }



  else if ((VAR_13->srb->cmnd[0] == VAR_4) &&
       (VAR_13->fflags & VAR_10)) {
   unsigned char VAR_15[36] = {
       0x00, 0x80, 0x02, 0x02,
       0x1F, 0x00, 0x00, 0x00};

   FUNC_1("Faking INQUIRY command\n");
   FUNC_5(VAR_13, VAR_15, 36);
   VAR_13->srb->result = VAR_5;
  }


  else {
   FUNC_0(FUNC_17(VAR_13->srb));
   VAR_13->proto_handler(VAR_13->srb, VAR_13);
  }


  FUNC_10(VAR_14);


  if (VAR_13->srb->result != VAR_0 << 16) {
   FUNC_1("scsi cmd done, result=0x%x\n",
       VAR_13->srb->result);
   VAR_13->srb->scsi_done(VAR_13->srb);
  } else {
SkipForAbort:
   FUNC_1("scsi command aborted\n");
  }






  if (FUNC_15(VAR_9, &VAR_13->dflags)) {
   FUNC_4(&(VAR_13->notify));


   FUNC_3(VAR_8, &VAR_13->dflags);
   FUNC_3(VAR_9, &VAR_13->dflags);
  }


  VAR_13->srb = ((void*)0);
  FUNC_11(VAR_14);


  FUNC_8(&VAR_13->dev_mutex);
 }


 for (;;) {
  FUNC_12(VAR_6);
  if (FUNC_6())
   break;
  FUNC_9();
 }
 FUNC_2(VAR_7);
 return 0;
}
