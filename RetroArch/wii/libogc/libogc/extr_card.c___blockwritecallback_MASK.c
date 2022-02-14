
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_4__ {int transfer_cnt; int cmd_sector_addr; int cmd_usr_buf; scalar_t__ cmd_blck_cnt; int (* card_xfer_cb ) (size_t,size_t) ;int card_api_cb; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 size_t FUNC_1 (size_t,void (*) (size_t,size_t)) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(s32 VAR_2,s32 VAR_3)
{
 s32 VAR_4 = VAR_0;
 cardcallback VAR_5 = ((void*)0);
 card_block *VAR_6 = &VAR_1[VAR_2];
 VAR_4 = VAR_3;
 if(VAR_4>=0) {
  VAR_6->transfer_cnt += 128;
  VAR_6->cmd_sector_addr += 128;
  VAR_6->cmd_usr_buf += 128;
  if((--VAR_6->cmd_blck_cnt)>0) {
   if((VAR_4=FUNC_1(VAR_2,FUNC_2))>=VAR_0) return;
  }
 }

 if(!VAR_6->card_api_cb) FUNC_0(VAR_6,VAR_4);

 VAR_5 = VAR_6->card_xfer_cb;
 if(VAR_5) {
  VAR_6->card_xfer_cb = ((void*)0);
  VAR_5(VAR_2,VAR_4);
 }
}
