
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_3__ {void (* card_unlock_cb ) (size_t,size_t) ;int* cmd; int (* card_exi_cb ) (size_t,size_t) ;int (* card_tx_cb ) (size_t,size_t) ;} ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t,int ,int ) ;
 int VAR_3 ;
 size_t FUNC_1 (size_t) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_2(s32 VAR_5,s32 VAR_6)
{
 s32 VAR_7;
 card_block *VAR_8;
 cardcallback VAR_9;
 if(VAR_5<VAR_0 || VAR_5>=VAR_1) return;
 VAR_8 = &VAR_4[VAR_5];

 VAR_7 = VAR_6;
 if(VAR_7>=0) {
  VAR_8->card_unlock_cb = FUNC_2;
  if(FUNC_0(VAR_5,VAR_2,VAR_3)==1) {
   VAR_8->card_unlock_cb = ((void*)0);
   VAR_7 = FUNC_1(VAR_5);
  } else
   VAR_7 = 0;
 }
 if(VAR_7<0) {
  if(VAR_8->cmd[0]==0xf3 || VAR_8->cmd[0]>=0xf5) return;
  else if(VAR_8->cmd[0]==0x52) {
   VAR_9 = VAR_8->card_tx_cb;
   if(VAR_9) {
    VAR_8->card_tx_cb = ((void*)0);
    VAR_9(VAR_5,VAR_7);
   }
  } else if(VAR_8->cmd[0]>=0xf1) {
   VAR_9 = VAR_8->card_exi_cb;
   if(VAR_9) {
    VAR_8->card_exi_cb = ((void*)0);
    VAR_9(VAR_5,VAR_7);
   }
  }
 }
}
