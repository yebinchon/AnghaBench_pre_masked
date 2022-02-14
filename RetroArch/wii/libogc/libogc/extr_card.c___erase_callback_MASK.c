
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_5__ {int iblock; } ;
typedef TYPE_1__ card_file ;
struct TYPE_6__ {int sector_size; int (* card_api_cb ) (size_t,size_t) ;int cmd_usr_buf; TYPE_1__* curr_file; } ;
typedef TYPE_2__ card_block ;


 int FUNC_0 (TYPE_2__*,size_t) ;
 size_t FUNC_1 (size_t,int,int,int ,int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(s32 VAR_2,s32 VAR_3)
{
 s32 VAR_4;
 cardcallback VAR_5 = ((void*)0);
 card_file *VAR_6 = ((void*)0);
 card_block *VAR_7 = &VAR_1[VAR_2];
 VAR_4 = VAR_3;
 if(VAR_4>=0) {
  VAR_6 = VAR_7->curr_file;
  if((VAR_4=FUNC_1(VAR_2,(VAR_6->iblock*VAR_7->sector_size),VAR_7->sector_size,VAR_7->cmd_usr_buf,VAR_0))>=0) return;
 }

 VAR_5 = VAR_7->card_api_cb;
 VAR_7->card_api_cb = ((void*)0);
 FUNC_0(VAR_7,VAR_4);
 if(VAR_5) VAR_5(VAR_2,VAR_4);
}
