
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct card_direntry {int block; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef scalar_t__ s32 ;
typedef int * cardcallback ;
struct TYPE_7__ {size_t fileno; } ;
typedef TYPE_1__ card_dir ;
struct TYPE_8__ {int * card_api_cb; int curr_fileblock; } ;
typedef TYPE_2__ card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_2__**) ;
 struct card_dat* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct card_direntry*,int,int) ;

s32 FUNC_5(s32 VAR_5,card_dir *VAR_6,cardcallback VAR_7)
{
 s32 VAR_8;
 cardcallback VAR_9 = ((void*)0);
 card_block *VAR_10 = ((void*)0);
 struct card_dat *VAR_11 = ((void*)0);
 struct card_direntry *VAR_12 = ((void*)0);
 if(VAR_5<VAR_1 || VAR_5>=VAR_2) return VAR_0;
 if((VAR_8=FUNC_0(VAR_5,&VAR_10))<0) return VAR_8;

 VAR_11 = FUNC_1(VAR_10);
 VAR_12 = &VAR_11->entries[VAR_6->fileno];

 VAR_10->curr_fileblock = VAR_12->block;
 FUNC_4(VAR_12,-1,sizeof(struct card_direntry));

 VAR_9 = VAR_7;
 if(!VAR_9) VAR_9 = VAR_3;
 VAR_10->card_api_cb = VAR_9;

 if((VAR_8=FUNC_3(VAR_5,VAR_4))>=0) return VAR_8;

 FUNC_2(VAR_10,VAR_8);
 return VAR_8;
}
