
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_3__ {int* cmd; int cmd_sector_addr; int cmd_len; int cmd_retries; int * card_exi_cb; int cmd_mode; int cmd_usr_buf; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,int ,int,int ,int ) ;
 int FUNC_2 (size_t,int*,int,int ) ;
 int FUNC_3 (size_t) ;
 int VAR_4 ;
 size_t FUNC_4 (size_t,int *,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static s32 FUNC_5(s32 VAR_7,cardcallback VAR_8)
{
 s32 VAR_9;
 card_block *VAR_10 = ((void*)0);
 if(VAR_7<VAR_2 || VAR_7>=VAR_3) return VAR_0;
 VAR_10 = &VAR_6[VAR_7];

 VAR_10->cmd[0] = 0xf2;
 VAR_10->cmd[1] = (VAR_10->cmd_sector_addr>>17)&0x3f;
 VAR_10->cmd[2] = (VAR_10->cmd_sector_addr>>9)&0xff;
 VAR_10->cmd[3] = (VAR_10->cmd_sector_addr>>7)&3;
 VAR_10->cmd[4] = VAR_10->cmd_sector_addr&0x7f;
 VAR_10->cmd_len = 5;
 VAR_10->cmd_mode = VAR_4;
 VAR_10->cmd_retries = 3;

 VAR_9 = FUNC_4(VAR_7,((void*)0),VAR_8);
 if(VAR_9<0) return VAR_9;

 if(FUNC_2(VAR_7,VAR_10->cmd,VAR_10->cmd_len,VAR_4)==1
  && FUNC_1(VAR_7,VAR_10->cmd_usr_buf,128,VAR_10->cmd_mode,VAR_5)==1) return VAR_1;

 VAR_10->card_exi_cb = ((void*)0);
 FUNC_0(VAR_7);
 FUNC_3(VAR_7);
 return VAR_0;
}
