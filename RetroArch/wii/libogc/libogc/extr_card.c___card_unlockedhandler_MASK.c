
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_3__ {int (* card_unlock_cb ) (size_t,size_t) ;} ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (size_t) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_6,s32 VAR_7)
{
 s32 VAR_8;
 cardcallback VAR_9 = ((void*)0);
 card_block *VAR_10 = ((void*)0);

 if(VAR_6<VAR_3 || VAR_6>=VAR_4) return VAR_0;
 VAR_10 = &VAR_5[VAR_6];

 VAR_8 = VAR_1;
 VAR_9 = VAR_10->card_unlock_cb;
 if(VAR_9) {
  VAR_10->card_unlock_cb = ((void*)0);
  if(FUNC_0(VAR_6)==0) VAR_8 = VAR_0;
  VAR_9(VAR_6,VAR_8);
 }
 return VAR_2;
}
