
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16_le ;
struct scsi_cmnd {int result; int cmd_len; int * cmnd; TYPE_2__* device; } ;
struct TYPE_12__ {int msgout_len; int trans_method; int auto_paddr; TYPE_4__* cur_lunt; TYPE_3__* cur_target; scalar_t__* msgoutbuf; TYPE_6__* autoparam; } ;
typedef TYPE_5__ nsp32_hw_data ;
struct TYPE_13__ {int target_id; void* sgt_pointer; void* transfer_control; void* command_control; int sample_reg; int ackwidth; int syncreg; void* msgout; int * cdb; } ;
typedef TYPE_6__ nsp32_autoparam ;
struct TYPE_11__ {unsigned int sglun_paddr; } ;
struct TYPE_10__ {int sample_reg; int ackwidth; int syncreg; } ;
struct TYPE_9__ {TYPE_1__* host; } ;
struct TYPE_8__ {unsigned int io_port; unsigned int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char) ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;



 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 int FUNC_4 (struct scsi_cmnd*,unsigned int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 unsigned char FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (unsigned int,int ,int) ;
 int FUNC_9 (unsigned int,int ,int ) ;
 unsigned char FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (unsigned char) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_23)
{
 nsp32_hw_data *VAR_24 = (nsp32_hw_data *)VAR_23->device->host->hostdata;
 unsigned int VAR_25 = VAR_23->device->host->io_port;
 unsigned int VAR_26 = VAR_23->device->host->this_id;
 unsigned char VAR_27 = FUNC_10(VAR_23);
 nsp32_autoparam *VAR_28 = VAR_24->autoparam;
 unsigned char VAR_29;
 int VAR_30, VAR_31;
 unsigned int VAR_32;
 u16_le VAR_33;

 FUNC_5(VAR_19, "in");




 VAR_29 = FUNC_7(VAR_25, VAR_20);
 if (VAR_29 != VAR_7) {
  FUNC_6(VAR_17, "bus busy");
  FUNC_11(VAR_29 & VAR_8);
  VAR_23->result = VAR_13 << 16;
  return VAR_15;
 }







 if (VAR_24->msgout_len == 0) {
  FUNC_6(VAR_16, "SCSI MsgOut without any message!");
  VAR_23->result = VAR_14 << 16;
  return VAR_15;
 } else if (VAR_24->msgout_len > 0 && VAR_24->msgout_len <= 3) {
  VAR_32 = 0;
  for (VAR_30 = 0; VAR_30 < VAR_24->msgout_len; VAR_30++) {






   VAR_32 >>= 8;
   VAR_32 |= ((unsigned int)(VAR_24->msgoutbuf[VAR_30]) << 24);
  }
  VAR_32 |= VAR_18;
  VAR_32 |= (unsigned int)VAR_24->msgout_len;
 } else {

  VAR_32 = 0;
 }







 FUNC_3(VAR_28, 0, sizeof(nsp32_autoparam));


 for (VAR_30 = 0; VAR_30 < VAR_23->cmd_len; VAR_30++) {
  VAR_28->cdb[4 * VAR_30] = VAR_23->cmnd[VAR_30];
 }


 VAR_28->msgout = FUNC_2(VAR_32);


 VAR_28->syncreg = VAR_24->cur_target->syncreg;
 VAR_28->ackwidth = VAR_24->cur_target->ackwidth;
 VAR_28->target_id = FUNC_0(VAR_26) | FUNC_0(VAR_27);
 VAR_28->sample_reg = VAR_24->cur_target->sample_reg;




 VAR_28->command_control = FUNC_1(VAR_11 |
          VAR_1 |
          VAR_3 |
          VAR_4 |
          VAR_2 );



 VAR_33 = 0;
 switch (VAR_24->trans_method) {
 case 130:
  VAR_33 |= VAR_6;
  break;
 case 129:
  VAR_33 |= VAR_10;
  break;
 case 128:
  VAR_33 |= VAR_9;
  break;
 default:
  FUNC_6(VAR_16, "unknown trans_method");
  break;
 }




 VAR_33 |= (VAR_22 | VAR_0);
 VAR_28->transfer_control = FUNC_1(VAR_33);


 VAR_28->sgt_pointer = FUNC_2(VAR_24->cur_lunt->sglun_paddr);




 FUNC_9(VAR_25, VAR_21, VAR_24->auto_paddr);
 FUNC_8(VAR_25, VAR_12, VAR_11 |
                              VAR_5 );




 VAR_31 = FUNC_4(VAR_23, VAR_25);

 return VAR_31;
}
