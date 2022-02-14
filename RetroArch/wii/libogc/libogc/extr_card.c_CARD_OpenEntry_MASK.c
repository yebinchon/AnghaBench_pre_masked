
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct card_dat {TYPE_1__* entries; } ;
typedef scalar_t__ s32 ;
struct TYPE_12__ {int filenum; int len; int iblock; scalar_t__ offset; scalar_t__ chn; } ;
typedef TYPE_2__ card_file ;
struct TYPE_13__ {int fileno; scalar_t__ company; scalar_t__ gamecode; scalar_t__ filename; } ;
typedef TYPE_3__ card_dir ;
struct TYPE_14__ {int blocks; int sector_size; } ;
typedef TYPE_4__ card_block ;
struct TYPE_11__ {int block; int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_4__**) ;
 struct card_dat* FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char const*,char const*,char const*,scalar_t__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__) ;

s32 FUNC_4(s32 VAR_5,card_dir *VAR_6,card_file *VAR_7)
{
 s32 VAR_8,VAR_9;
 struct card_dat *VAR_10 = ((void*)0);
 card_block *VAR_11 = ((void*)0);

 if(VAR_5<VAR_3 || VAR_5>=VAR_4) return VAR_1;

 VAR_7->filenum = -1;
 if((VAR_8=FUNC_0(VAR_5,&VAR_11))<0) return VAR_8;
 if((VAR_8=FUNC_2(VAR_11,(const char*)VAR_6->filename,(const char*)VAR_6->gamecode,(const char*)VAR_6->company,&VAR_9))<0) {
  FUNC_3(VAR_11,VAR_8);
  return VAR_8;
 }

 VAR_10 = FUNC_1(VAR_11);
 if(VAR_10->entries[VAR_9].block<5 || VAR_10->entries[VAR_9].block>=VAR_11->blocks) {
  FUNC_3(VAR_11,VAR_0);
  return VAR_0;
 }

 VAR_7->chn = VAR_5;
 VAR_7->filenum = VAR_6->fileno;
 VAR_7->offset = 0;
 VAR_7->len = VAR_10->entries[VAR_9].length*VAR_11->sector_size;
 VAR_7->iblock = VAR_10->entries[VAR_9].block;

 FUNC_3(VAR_11,VAR_2);
 return VAR_2;
}
