
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct card_dat {TYPE_1__* entries; } ;
typedef scalar_t__ s32 ;
struct TYPE_10__ {int filenum; int len; int iblock; scalar_t__ offset; scalar_t__ chn; } ;
typedef TYPE_2__ card_file ;
struct TYPE_11__ {int blocks; int sector_size; } ;
typedef TYPE_3__ card_block ;
struct TYPE_9__ {int block; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_3__**) ;
 struct card_dat* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char const*,char const*,char const*,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

s32 FUNC_4(s32 VAR_7,const char *VAR_8,card_file *VAR_9)
{
 s32 VAR_10,VAR_11;
 struct card_dat *VAR_12 = ((void*)0);
 card_block *VAR_13 = ((void*)0);

 if(VAR_7<VAR_3 || VAR_7>=VAR_4) return VAR_1;

 VAR_9->filenum = -1;
 if((VAR_10=FUNC_0(VAR_7,&VAR_13))<0) return VAR_10;
 if((VAR_10=FUNC_2(VAR_13,VAR_8,(const char*)VAR_6,(const char*)VAR_5,&VAR_11))<0) {
  FUNC_3(VAR_13,VAR_10);
  return VAR_10;
 }
 VAR_12 = FUNC_1(VAR_13);
 if(VAR_12->entries[VAR_11].block<5 || VAR_12->entries[VAR_11].block>=VAR_13->blocks) {
  FUNC_3(VAR_13,VAR_0);
  return VAR_0;
 }
 VAR_9->chn = VAR_7;
 VAR_9->filenum = VAR_11;
 VAR_9->offset = 0;
 VAR_9->len = VAR_12->entries[VAR_11].length*VAR_13->sector_size;
 VAR_9->iblock = VAR_12->entries[VAR_11].block;

 FUNC_3(VAR_13,VAR_2);
 return VAR_2;
}
