
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct card_direntry {int lastmodified; } ;
struct card_dat {struct card_direntry* entries; } ;
struct card_bat {size_t* fat; } ;
typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_7__ {scalar_t__ len; size_t filenum; int offset; size_t iblock; } ;
typedef TYPE_1__ card_file ;
struct TYPE_8__ {int sector_size; size_t blocks; int (* card_api_cb ) (size_t,size_t) ;TYPE_1__* curr_file; } ;
typedef TYPE_2__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct card_bat* FUNC_0 (TYPE_2__*) ;
 struct card_dat* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,size_t) ;
 size_t FUNC_3 (size_t,int,int ) ;
 size_t FUNC_4 (size_t,int (*) (size_t,size_t)) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(s32 VAR_5,s32 VAR_6)
{
 s32 VAR_7;
 cardcallback VAR_8 = ((void*)0);
 card_file *VAR_9 = ((void*)0);
 struct card_bat *VAR_10 = ((void*)0);
 struct card_dat *VAR_11 = ((void*)0);
 struct card_direntry *VAR_12 = ((void*)0);
 card_block *VAR_13 = &VAR_4[VAR_5];
 VAR_7 = VAR_6;
 if(VAR_7>=0) {
  VAR_9 = VAR_13->curr_file;
  if(VAR_9->len>=0) {
   VAR_9->len = (VAR_13->sector_size-VAR_9->len);
   if(VAR_9->len<=0) {
    VAR_11 = FUNC_1(VAR_13);
    VAR_12 = &VAR_11->entries[VAR_9->filenum];
    VAR_12->lastmodified = FUNC_5(((void*)0));
    VAR_8 = VAR_13->card_api_cb;
    VAR_13->card_api_cb = ((void*)0);
    if((VAR_7=FUNC_4(VAR_5,VAR_8))>=0) return;
   } else {
    VAR_10 = FUNC_0(VAR_13);
    VAR_9->offset += VAR_13->sector_size;
    VAR_9->iblock = VAR_10->fat[VAR_9->iblock-VAR_2];
    if(VAR_9->iblock<VAR_2 || VAR_9->iblock>=VAR_13->blocks) {
     VAR_7 = VAR_0;
     goto exit;
    }
    if((VAR_7=FUNC_3(VAR_5,(VAR_9->iblock*VAR_13->sector_size),VAR_3))>=0) return;
   }
  } else
   VAR_7 = VAR_1;
 }

exit:
 VAR_8 = VAR_13->card_api_cb;
 VAR_13->card_api_cb = ((void*)0);
 FUNC_2(VAR_13,VAR_7);
 if(VAR_8) VAR_8(VAR_5,VAR_7);
}
