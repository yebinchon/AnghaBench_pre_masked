
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct card_bat {int dummy; } ;
typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_4__ {int (* card_erase_cb ) (size_t,size_t) ;int card_api_cb; struct card_bat* curr_fat; struct card_bat* workarea; } ;
typedef TYPE_1__ card_block ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct card_bat*,struct card_bat*,int) ;

__attribute__((used)) static void FUNC_2(s32 VAR_1,s32 VAR_2)
{
 s32 VAR_3;
 cardcallback VAR_4 = ((void*)0);
 struct card_bat *VAR_5,*VAR_6;
 card_block *VAR_7 = &VAR_0[VAR_1];
 VAR_3 = VAR_2;
 if(VAR_3>=0) {
  VAR_5 = (VAR_7->workarea+0x6000);
  VAR_6 = (VAR_7->workarea+0x8000);
  if(VAR_7->curr_fat==VAR_5) {
   VAR_7->curr_fat = VAR_6;
   FUNC_1(VAR_6,VAR_5,8192);
  } else {
   VAR_7->curr_fat = VAR_5;
   FUNC_1(VAR_5,VAR_6,8192);
  }
 }
 if(!VAR_7->card_api_cb) FUNC_0(VAR_7,VAR_3);
 VAR_4 = VAR_7->card_erase_cb;
 if(VAR_4) {
  VAR_7->card_erase_cb = ((void*)0);
  VAR_4(VAR_1,VAR_3);
 }
}
