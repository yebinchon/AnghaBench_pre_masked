
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_4__ {scalar_t__ cmd_blck_cnt; int (* card_xfer_cb ) (size_t,size_t) ;int card_api_cb; int cmd_usr_buf; int cmd_sector_addr; int transfer_cnt; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 size_t FUNC_1 (size_t,void (*) (size_t,size_t)) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(s32 VAR_3,s32 VAR_4)
{
 s32 VAR_5 = VAR_0;
 cardcallback VAR_6 = ((void*)0);
 card_block *VAR_7 = &VAR_2[VAR_3];
 VAR_5 = VAR_4;
 if(VAR_5>=0) {
  VAR_7->transfer_cnt += VAR_1;
  VAR_7->cmd_sector_addr += VAR_1;
  VAR_7->cmd_usr_buf += VAR_1;
  if((--VAR_7->cmd_blck_cnt)>0) {
   if((VAR_5=FUNC_1(VAR_3,FUNC_2))>=VAR_0) return;
  }
 }

 if(!VAR_7->card_api_cb) FUNC_0(VAR_7,VAR_5);
 VAR_6 = VAR_7->card_xfer_cb;
 if(VAR_6) {
  VAR_7->card_xfer_cb = ((void*)0);
  VAR_6(VAR_3,VAR_5);
 }
}
