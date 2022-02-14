
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_3__ {int sector_size; int* cmd; int cmd_len; int cmd_mode; int cmd_retries; int * card_exi_cb; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t,int*,int,int ) ;
 int FUNC_2 (size_t) ;
 int VAR_4 ;
 size_t FUNC_3 (size_t,int *,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static s32 FUNC_4(s32 VAR_6,u32 VAR_7,cardcallback VAR_8)
{
 s32 VAR_9;
 card_block *VAR_10 = ((void*)0);
 if(VAR_6<VAR_2 || VAR_6>= VAR_3) return VAR_0;
 VAR_10 = &VAR_5[VAR_6];

 if(VAR_7%VAR_10->sector_size) return VAR_0;

 VAR_10->cmd[0] = 0xf1;
 VAR_10->cmd[1] = (VAR_7>>17)&0x7f;
 VAR_10->cmd[2] = (VAR_7>>9)&0xff;
 VAR_10->cmd_len = 3;
 VAR_10->cmd_mode = -1;
 VAR_10->cmd_retries = 3;

 VAR_9 = FUNC_3(VAR_6,((void*)0),VAR_8);
 if(VAR_9<0) return VAR_9;

 if(FUNC_1(VAR_6,VAR_10->cmd,VAR_10->cmd_len,VAR_4)==0) {
  VAR_10->card_exi_cb = ((void*)0);
  return VAR_1;
 }

 FUNC_0(VAR_6);
 FUNC_2(VAR_6);
 return VAR_9;
}
