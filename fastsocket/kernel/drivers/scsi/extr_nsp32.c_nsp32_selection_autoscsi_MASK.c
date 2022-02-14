
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {int result; int cmd_len; int* cmnd; TYPE_2__* device; } ;
struct TYPE_10__ {int msgout_len; int trans_method; TYPE_4__* cur_lunt; TYPE_3__* cur_target; scalar_t__* msgoutbuf; } ;
typedef TYPE_5__ nsp32_hw_data ;
struct TYPE_9__ {unsigned int sglun_paddr; } ;
struct TYPE_8__ {int sample_reg; int syncreg; int ackwidth; } ;
struct TYPE_7__ {TYPE_1__* host; } ;
struct TYPE_6__ {unsigned int io_port; unsigned int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_0 (unsigned char) ;
 unsigned short VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned short VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 unsigned short VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 unsigned short VAR_38 ;
 int FUNC_1 (struct scsi_cmnd*,unsigned int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 unsigned char FUNC_4 (unsigned int,int ) ;
 unsigned short FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (unsigned int,int ,int) ;
 int FUNC_8 (unsigned int,int ,unsigned short) ;
 int FUNC_9 (unsigned int,int ,unsigned int) ;
 unsigned char FUNC_10 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_39)
{
 nsp32_hw_data *VAR_40 = (nsp32_hw_data *)VAR_39->device->host->hostdata;
 unsigned int VAR_41 = VAR_39->device->host->io_port;
 unsigned int VAR_42 = VAR_39->device->host->this_id;
 unsigned char VAR_43 = FUNC_10(VAR_39);
 unsigned char VAR_44;
 int VAR_45;
 unsigned short VAR_46 = 0;
 unsigned int VAR_47 = 0;
 unsigned short VAR_48;
 int VAR_49;

 FUNC_2(VAR_22, "in");




 FUNC_8(VAR_41, VAR_17, VAR_18);




 VAR_44 = FUNC_4(VAR_41, VAR_27);
 if(((VAR_44 & VAR_8) == 1) || (VAR_44 & VAR_9) == 1) {
  FUNC_3(VAR_20, "bus busy");
  VAR_39->result = VAR_15 << 16;
  VAR_45 = 1;
  goto out;
        }




 VAR_48 = FUNC_5(VAR_41, VAR_28);




 FUNC_8(VAR_41, VAR_13, VAR_12);




 for (VAR_49 = 0; VAR_49 < VAR_39->cmd_len; VAR_49++) {
  FUNC_7(VAR_41, VAR_14, VAR_39->cmnd[VAR_49]);
        }
 FUNC_2(VAR_23, "CDB[0]=[0x%x]", VAR_39->cmnd[0]);




 FUNC_7(VAR_41, VAR_30, FUNC_0(VAR_42) | FUNC_0(VAR_43));







 if (VAR_40->msgout_len == 0) {
  FUNC_3(VAR_19, "SCSI MsgOut without any message!");
  VAR_39->result = VAR_16 << 16;
  VAR_45 = 1;
  goto out;
 } else if (VAR_40->msgout_len > 0 && VAR_40->msgout_len <= 3) {
  VAR_47 = 0;
  for (VAR_49 = 0; VAR_49 < VAR_40->msgout_len; VAR_49++) {






   VAR_47 >>= 8;
   VAR_47 |= ((unsigned int)(VAR_40->msgoutbuf[VAR_49]) << 24);
  }
  VAR_47 |= VAR_21;
  VAR_47 |= (unsigned int)VAR_40->msgout_len;
  FUNC_9(VAR_41, VAR_29, VAR_47);
 } else {

  FUNC_9(VAR_41, VAR_29, 0);
 }




 FUNC_8(VAR_41, VAR_32, VAR_31);







 FUNC_7(VAR_41, VAR_35, VAR_40->cur_target->sample_reg);




 FUNC_7(VAR_41, VAR_33, VAR_2);





 FUNC_7(VAR_41, VAR_36, VAR_40->cur_target->syncreg);




 FUNC_7(VAR_41, VAR_0, VAR_40->cur_target->ackwidth);

 FUNC_2(VAR_22,
    "syncreg=0x%x, ackwidth=0x%x, sgtpaddr=0x%x, id=0x%x",
    FUNC_4(VAR_41, VAR_36), FUNC_4(VAR_41, VAR_0),
    FUNC_6(VAR_41, VAR_34), FUNC_4(VAR_41, VAR_30));
 FUNC_2(VAR_22, "msgout_len=%d, msgout=0x%x",
    VAR_40->msgout_len, VAR_47);




 FUNC_9(VAR_41, VAR_34, VAR_40->cur_lunt->sglun_paddr);




 VAR_46 = 0;
 VAR_46 |= (VAR_38 | VAR_1);
 if (VAR_40->trans_method & VAR_24) {
  if (FUNC_11(VAR_39) > 0) {
   VAR_46 |= VAR_7;
  }
 } else if (VAR_40->trans_method & VAR_25) {
  VAR_46 |= VAR_11;
 } else if (VAR_40->trans_method & VAR_26) {
  VAR_46 |= VAR_10;
 }
 FUNC_8(VAR_41, VAR_37, VAR_46);




 VAR_46 = (VAR_12 |
     VAR_3 |
     VAR_5 |
     VAR_6 |
     VAR_4 );
 FUNC_8(VAR_41, VAR_13, VAR_46);




 VAR_45 = FUNC_1(VAR_39, VAR_41);

 out:



 FUNC_8(VAR_41, VAR_17, 0);

 return VAR_45;
}
