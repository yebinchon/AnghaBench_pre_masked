
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_3__ {int* cmd; int cmd_sector_addr; int cmd_len; int* workarea; int latency; int * card_tx_cb; int cmd_mode; int cmd_usr_buf; scalar_t__ cmd_retries; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (size_t,int*,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (size_t) ;
 int VAR_6 ;
 size_t FUNC_4 (size_t,int ,int *) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static s32 FUNC_5(s32 VAR_9,cardcallback VAR_10)
{
 u32 VAR_11;
 s32 VAR_12;
 card_block *VAR_13 = ((void*)0);
 if(VAR_9<VAR_3 || VAR_9>=VAR_4) return VAR_0;
 VAR_13 = &VAR_8[VAR_9];

 VAR_13->cmd[0] = 0x52;
 VAR_13->cmd[1] = (VAR_13->cmd_sector_addr&0xFE0000)>>17;
 VAR_13->cmd[2] = (VAR_13->cmd_sector_addr&0x01FE00)>>9;
 VAR_13->cmd[3] = (VAR_13->cmd_sector_addr&0x000180)>>7;
 VAR_13->cmd[4] = (VAR_13->cmd_sector_addr&0x00007F);
 VAR_13->cmd_len = 5;
 VAR_13->cmd_mode = VAR_5;
 VAR_13->cmd_retries = 0;

 VAR_12 = FUNC_4(VAR_9,VAR_10,((void*)0));
 if(VAR_12<0) return VAR_12;

 VAR_11 = 0;
 if(FUNC_2(VAR_9,VAR_13->cmd,VAR_13->cmd_len,VAR_6)==0) VAR_11 |= 0x01;
 if(FUNC_2(VAR_9,VAR_13->workarea+VAR_2,VAR_13->latency,VAR_6)==0) VAR_11 |= 0x02;
 if(FUNC_1(VAR_9,VAR_13->cmd_usr_buf,VAR_2,VAR_13->cmd_mode,VAR_7)==0) VAR_11 |= 0x04;

 if(VAR_11) {
  VAR_13->card_tx_cb = ((void*)0);
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);
  return VAR_0;
 }
 return VAR_1;
}
