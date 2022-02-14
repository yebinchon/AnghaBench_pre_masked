
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct card_bat {int dummy; } ;
typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_5__ {int sector_size; int (* card_erase_cb ) (size_t,size_t) ;int card_api_cb; scalar_t__ workarea; } ;
typedef TYPE_1__ card_block ;


 int VAR_0 ;
 struct card_bat* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 size_t FUNC_2 (size_t,int,int,struct card_bat*,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(s32 VAR_2,s32 VAR_3)
{
 s32 VAR_4;
 cardcallback VAR_5 = ((void*)0);
 struct card_bat *VAR_6 = ((void*)0);
 card_block *VAR_7 = &VAR_1[VAR_2];
 VAR_4 = VAR_3;
 if(VAR_4>=0) {
  VAR_6 = FUNC_0(VAR_7);
  if((VAR_4=FUNC_2(VAR_2,(((u32)VAR_6-(u32)VAR_7->workarea)>>13)*VAR_7->sector_size,8192,VAR_6,VAR_0))>=0) return;
 }
 if(!VAR_7->card_api_cb) FUNC_1(VAR_7,VAR_4);

 VAR_5 = VAR_7->card_erase_cb;
 if(VAR_5) {
  VAR_7->card_erase_cb = ((void*)0);
  VAR_5(VAR_2,VAR_4);
 }
}
