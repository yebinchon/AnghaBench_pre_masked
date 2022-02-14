
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_3__ {int cmd_sector_addr; int cmd_blck_cnt; int card_xfer_cb; void* cmd_usr_buf; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (size_t,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_5,u32 VAR_6,u32 VAR_7,void *VAR_8,cardcallback VAR_9)
{
 s32 VAR_10;
 card_block *VAR_11 = ((void*)0);
 if(VAR_5<VAR_1 || VAR_5>=VAR_2) return VAR_0;
 VAR_11 = &VAR_4[VAR_5];

 VAR_11->cmd_sector_addr = VAR_6;
 VAR_11->cmd_blck_cnt = VAR_7>>9;
 VAR_11->cmd_usr_buf = VAR_8;
 VAR_11->card_xfer_cb = VAR_9;
 VAR_10 = FUNC_0(VAR_5,VAR_3);

 return VAR_10;
}
