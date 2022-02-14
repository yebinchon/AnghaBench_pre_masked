
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_5__ {int mount_step; int (* card_api_cb ) (size_t,size_t) ;} ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 size_t FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_4(s32 VAR_4,s32 VAR_5)
{
 s32 VAR_6;
 cardcallback VAR_7;
 card_block *VAR_8 = &VAR_3[VAR_4];

 VAR_6 = VAR_5;
 if(VAR_6==VAR_1 || VAR_6==VAR_0) {
  FUNC_1(VAR_4,VAR_6);
  FUNC_2(VAR_8,VAR_6);
 }else if(VAR_6==VAR_2) {
  if((VAR_6=FUNC_0(VAR_4))>=0) return;
 } else {
  if((++VAR_8->mount_step)<7) {
   if((VAR_6=FUNC_0(VAR_4))>=0) return;
  } else {
   VAR_6 = FUNC_3(VAR_8);
   FUNC_2(VAR_8,VAR_6);
  }
 }

 VAR_7 = VAR_8->card_api_cb;
 VAR_8->card_api_cb = ((void*)0);
 if(VAR_7) VAR_7(VAR_4,VAR_6);
}
