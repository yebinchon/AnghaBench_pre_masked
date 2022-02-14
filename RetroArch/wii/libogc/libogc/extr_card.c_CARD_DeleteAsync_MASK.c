
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct card_direntry {int block; } ;
struct card_dat {struct card_direntry* entries; } ;
typedef size_t s32 ;
typedef int * cardcallback ;
struct TYPE_6__ {int * card_api_cb; int curr_fileblock; } ;
typedef TYPE_1__ card_block ;


 int * VAR_0 ;
 size_t FUNC_0 (size_t,TYPE_1__**) ;
 struct card_dat* FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*,char const*,char const*,char const*,size_t*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 size_t FUNC_4 (size_t,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct card_direntry*,int,int) ;

s32 FUNC_6(s32 VAR_4,const char *VAR_5,cardcallback VAR_6)
{
 s32 VAR_7,VAR_8;
 cardcallback VAR_9 = ((void*)0);
 card_block *VAR_10 = ((void*)0);
 struct card_dat *VAR_11 = ((void*)0);
 struct card_direntry *VAR_12 = ((void*)0);
 if((VAR_7=FUNC_0(VAR_4,&VAR_10))<0) return VAR_7;
 if((VAR_7=FUNC_2(VAR_10,VAR_5,(const char*)VAR_3,(const char*)VAR_2,&VAR_8))<0) {
  FUNC_3(VAR_10,VAR_7);
  return VAR_7;
 }

 VAR_11 = FUNC_1(VAR_10);
 VAR_12 = &VAR_11->entries[VAR_8];

 VAR_10->curr_fileblock = VAR_12->block;
 FUNC_5(VAR_12,-1,sizeof(struct card_direntry));

 VAR_9 = VAR_6;
 if(!VAR_9) VAR_9 = VAR_0;
 VAR_10->card_api_cb = VAR_9;

 if((VAR_7=FUNC_4(VAR_4,VAR_1))>=0) return VAR_7;

 FUNC_3(VAR_10,VAR_7);
 return VAR_7;
}
