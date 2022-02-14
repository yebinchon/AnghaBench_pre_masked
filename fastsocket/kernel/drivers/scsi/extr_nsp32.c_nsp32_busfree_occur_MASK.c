
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int Status; int Message; } ;
struct scsi_cmnd {int result; TYPE_4__ SCp; TYPE_2__* device; } ;
struct TYPE_12__ {TYPE_7__* cur_target; TYPE_3__* cur_lunt; } ;
typedef TYPE_5__ nsp32_hw_data ;
struct TYPE_13__ {int sync_flag; } ;
struct TYPE_10__ {int msgin03; } ;
struct TYPE_9__ {TYPE_1__* host; } ;
struct TYPE_8__ {unsigned int io_port; scalar_t__ hostdata; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct scsi_cmnd*,unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (unsigned int,int ) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_7 (unsigned int,int ,int ) ;
 int FUNC_8 (unsigned int,int ,int ) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (unsigned short) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_20, unsigned short VAR_21)
{
 nsp32_hw_data *VAR_22 = (nsp32_hw_data *)VAR_20->device->host->hostdata;
 unsigned int VAR_23 = VAR_20->device->host->io_port;

 FUNC_1(VAR_11, "enter execph=0x%x", VAR_21);
 FUNC_10(VAR_21);

 FUNC_8(VAR_23, VAR_0, 0);
 FUNC_7(VAR_23, VAR_18, 0);
 if (VAR_21 & VAR_8) {
  FUNC_1(VAR_11, "MsgIn02_Valid");





  if (!(VAR_21 & VAR_7) &&
      ((VAR_21 & VAR_1) || (VAR_21 & VAR_2))) {
   unsigned int VAR_24, VAR_25;




   VAR_24 = FUNC_4(VAR_23, VAR_12 );
   VAR_25 = FUNC_4(VAR_23, VAR_13);





   if (VAR_25 > 0) {
    if (VAR_24 != VAR_25) {
     VAR_22->cur_lunt->msgin03 = VAR_5;
    } else {
     VAR_22->cur_lunt->msgin03 = VAR_19;
    }

    FUNC_0(VAR_20, VAR_25);
   }
  }



 } else {



 }

 if (VAR_21 & VAR_9) {

 }




 if (VAR_22->cur_target->sync_flag & VAR_16) {




  FUNC_6(VAR_22, VAR_22->cur_target);
  VAR_22->cur_target->sync_flag &= ~VAR_16;
  VAR_22->cur_target->sync_flag |= VAR_15;
 } else if (VAR_22->cur_target->sync_flag & VAR_17) {




  if (VAR_21 & (VAR_7 | VAR_10)) {




  } else {





   FUNC_6(VAR_22, VAR_22->cur_target);
  }
  VAR_22->cur_target->sync_flag &= ~VAR_17;
  VAR_22->cur_target->sync_flag |= VAR_15;
 }







 if (VAR_21 & VAR_7) {

  FUNC_1(VAR_11, "command complete");

  VAR_20->SCp.Status = FUNC_3(VAR_23, VAR_14);
  VAR_20->SCp.Message = 0;
  FUNC_1(VAR_11,
     "normal end stat=0x%x resid=0x%x\n",
     VAR_20->SCp.Status, FUNC_9(VAR_20));
  VAR_20->result = (VAR_4 << 16) |
           (VAR_20->SCp.Message << 8) |
           (VAR_20->SCp.Status << 0);
  FUNC_5(VAR_20);

  return VAR_19;
 } else if (VAR_21 & VAR_10) {

  VAR_20->SCp.Status = FUNC_3(VAR_23, VAR_14);
  VAR_20->SCp.Message = 4;

  FUNC_1(VAR_11, "disconnect");
  return VAR_19;
 } else {

  FUNC_2(VAR_6, "unexpected bus free occurred");



  VAR_20->result = VAR_3 << 16;
  FUNC_5(VAR_20);
  return VAR_19;
 }
 return VAR_5;
}
