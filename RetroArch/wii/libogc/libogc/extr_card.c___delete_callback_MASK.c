
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_4__ {int curr_fileblock; int (* card_api_cb ) (size_t,size_t) ;} ;
typedef TYPE_1__ card_block ;


 size_t FUNC_0 (size_t,int ,int (*) (size_t,size_t)) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(s32 VAR_1,s32 VAR_2)
{
 s32 VAR_3;
 cardcallback VAR_4 = ((void*)0);
 card_block *VAR_5 = &VAR_0[VAR_1];
 VAR_4 = VAR_5->card_api_cb;
 VAR_5->card_api_cb = ((void*)0);

 VAR_3 = VAR_2;
 if(VAR_3>=0 && (VAR_3=FUNC_0(VAR_1,VAR_5->curr_fileblock,VAR_4))>=0) return;

 FUNC_1(VAR_5,VAR_3);
 if(VAR_4) VAR_4(VAR_1,VAR_3);
}
