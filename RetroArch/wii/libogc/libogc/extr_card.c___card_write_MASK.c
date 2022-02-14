
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_3__ {int cmd_blck_cnt; int cmd_sector_addr; int card_xfer_cb; void* cmd_usr_buf; int attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (size_t,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_6,u32 VAR_7,u32 VAR_8,void *VAR_9,cardcallback VAR_10)
{
 s32 VAR_11;
 card_block *VAR_12 = ((void*)0);
 if(VAR_6<VAR_2 || VAR_6>= VAR_3) return VAR_0;
 VAR_12 = &VAR_5[VAR_6];

 if(!VAR_12->attached) return VAR_1;

 VAR_12->cmd_blck_cnt = VAR_8>>7;
 VAR_12->cmd_sector_addr = VAR_7;
 VAR_12->cmd_usr_buf = VAR_9;
 VAR_12->card_xfer_cb = VAR_10;
 VAR_11 = FUNC_0(VAR_6,VAR_4);

 return VAR_11;
}
