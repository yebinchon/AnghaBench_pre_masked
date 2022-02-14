
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int * cardcallback ;
struct TYPE_7__ {int iblock; int chn; } ;
typedef TYPE_1__ card_file ;
struct TYPE_8__ {int sector_size; void* cmd_usr_buf; int * card_api_cb; } ;
typedef TYPE_2__ card_block ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int,TYPE_2__**) ;
 int VAR_2 ;

s32 FUNC_4(card_file *VAR_3,void *VAR_4,u32 VAR_5,u32 VAR_6,cardcallback VAR_7)
{
 s32 VAR_8;
 cardcallback VAR_9 = ((void*)0);
 card_block *VAR_10 = ((void*)0);

 if((VAR_8=FUNC_3(VAR_3,VAR_5,VAR_6,&VAR_10))<0) return VAR_8;
 if(VAR_5<0 || (VAR_5&(VAR_10->sector_size-1)) || (VAR_6>0 && VAR_6&(VAR_10->sector_size-1))) {
  FUNC_1(VAR_10,VAR_0);
  return VAR_0;
 }

 FUNC_0(VAR_4,VAR_5);
 VAR_9 = VAR_7;
 if(!VAR_9) VAR_9 = VAR_1;
 VAR_10->card_api_cb = VAR_9;

 VAR_10->cmd_usr_buf = VAR_4;
 if((VAR_8=FUNC_2(VAR_3->chn,(VAR_3->iblock*VAR_10->sector_size),VAR_2))>=0) return VAR_8;
 FUNC_1(VAR_10,VAR_8);
 return VAR_8;
}
