
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct card_direntry {int* gamecode; scalar_t__ length; scalar_t__ block; } ;
struct card_dat {struct card_direntry* entries; } ;
struct card_bat {scalar_t__* fat; } ;
typedef scalar_t__ s32 ;
struct TYPE_9__ {size_t filenum; scalar_t__ iblock; scalar_t__ offset; scalar_t__ len; int chn; } ;
typedef TYPE_1__ card_file ;
struct TYPE_10__ {scalar_t__ blocks; scalar_t__ sector_size; TYPE_1__* curr_file; } ;
typedef TYPE_2__ card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 struct card_bat* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__**) ;
 struct card_dat* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static s32 FUNC_4(card_file *VAR_6,s32 VAR_7,s32 VAR_8,card_block **VAR_9)
{
 s32 VAR_10;
 s32 VAR_11,VAR_12;
 card_block *VAR_13 = ((void*)0);
 struct card_direntry *VAR_14 = ((void*)0);
 struct card_dat *VAR_15 = ((void*)0);
 struct card_bat *VAR_16 = ((void*)0);
 if(VAR_6->filenum<0 || VAR_6->filenum>=VAR_4) return VAR_1;
 if((VAR_10=FUNC_1(VAR_6->chn,&VAR_13))<0) return VAR_10;
 if(VAR_6->iblock<VAR_5 || VAR_6->iblock>=VAR_13->blocks) {
  FUNC_3(VAR_13,VAR_1);
  return VAR_1;
 }

 VAR_15 = FUNC_2(VAR_13);
 VAR_14 = &VAR_15->entries[VAR_6->filenum];
 if(VAR_14->gamecode[0]!=0xff) {
  VAR_12 = VAR_14->length*VAR_13->sector_size;
  if(VAR_12<VAR_8 || VAR_12<(VAR_8+VAR_7)) {
   FUNC_3(VAR_13,VAR_2);
   return VAR_2;
  }
  VAR_13->curr_file = VAR_6;
  VAR_6->len = VAR_7;

  if(VAR_8<VAR_6->offset) {
   VAR_6->offset = 0;
   VAR_6->iblock = VAR_14->block;
   if(VAR_6->iblock<VAR_5 || VAR_6->iblock>=VAR_13->blocks) {
    FUNC_3(VAR_13,VAR_0);
    return VAR_0;
   }
  }

  VAR_16 = FUNC_0(VAR_13);
  for(VAR_11=VAR_6->iblock;VAR_11<VAR_13->blocks && VAR_6->offset<(VAR_8&~(VAR_13->sector_size-1));VAR_11=VAR_6->iblock) {
   VAR_6->offset += VAR_13->sector_size;
   VAR_6->iblock = VAR_16->fat[VAR_11-VAR_5];
   if(VAR_6->iblock<VAR_5 || VAR_6->iblock>=VAR_13->blocks) {
    FUNC_3(VAR_13,VAR_0);
    return VAR_0;
   }
  }
  VAR_6->offset = VAR_8;
  *VAR_9 = VAR_13;
 }
 return VAR_3;
}
