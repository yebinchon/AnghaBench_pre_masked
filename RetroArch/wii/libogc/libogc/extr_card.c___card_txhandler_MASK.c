
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_3__ {int (* card_tx_cb ) (size_t,size_t) ;} ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static s32 FUNC_3(s32 VAR_5,s32 VAR_6)
{
 u32 VAR_7;
 s32 VAR_8 = VAR_1;
 cardcallback VAR_9 = ((void*)0);
 card_block *VAR_10 = ((void*)0);
 if(VAR_5<VAR_2 || VAR_5>=VAR_3) return 0;
 VAR_10 = &VAR_4[VAR_5];

 VAR_7 = 0;
 if(FUNC_0(VAR_5)==0) VAR_8 |= VAR_7;
 if(FUNC_2(VAR_5)==0) VAR_8 |= VAR_7;

 VAR_9 = VAR_10->card_tx_cb;
 if(VAR_9) {
  VAR_10->card_tx_cb = ((void*)0);
  if(!VAR_7) {
   if(FUNC_1(VAR_5)==0) VAR_8 = VAR_0;
  } else VAR_8 = VAR_0;
  VAR_9(VAR_5,VAR_8);
 }
 return 1;
}
