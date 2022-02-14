
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct card_bat {size_t* fat; } ;
typedef size_t s32 ;
typedef int (* cardcallback ) (size_t,size_t) ;
struct TYPE_6__ {int len; int offset; size_t iblock; } ;
typedef TYPE_1__ card_file ;
struct TYPE_7__ {int sector_size; size_t blocks; int (* card_api_cb ) (size_t,size_t) ;int cmd_usr_buf; TYPE_1__* curr_file; } ;
typedef TYPE_2__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct card_bat* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_2 (size_t,int,size_t,int ,void (*) (size_t,size_t)) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void FUNC_3(s32 VAR_6,s32 VAR_7)
{
 s32 VAR_8;
 s32 VAR_9;
 cardcallback VAR_10 = ((void*)0);
 card_file *VAR_11 = ((void*)0);
 card_block *VAR_12 = 0;
 struct card_bat *VAR_13 = ((void*)0);
 if(VAR_6<VAR_3 || VAR_6>=VAR_4) return;
 VAR_12 = &VAR_5[VAR_6];

 VAR_8 = VAR_7;
 VAR_11 = VAR_12->curr_file;
 if(VAR_8>=0) {
  if(VAR_11->len>=0) {
   VAR_11->len = VAR_11->len-(((VAR_11->offset+VAR_12->sector_size)&~(VAR_12->sector_size-1))-VAR_11->offset);
   if(VAR_11->len>0) {
    VAR_13 = FUNC_0(VAR_12);
    VAR_11->offset += (((VAR_11->offset+VAR_12->sector_size)&~(VAR_12->sector_size-1))-VAR_11->offset);
    VAR_11->iblock = VAR_13->fat[VAR_11->iblock-VAR_2];
    if(VAR_11->iblock<VAR_2 || VAR_11->iblock>=VAR_12->blocks) {
     VAR_8 = VAR_0;
     goto exit;
    }
    VAR_9 = VAR_11->len<VAR_12->sector_size?VAR_12->sector_size:VAR_11->len;
    if(FUNC_2(VAR_6,(VAR_11->iblock*VAR_12->sector_size),VAR_9,VAR_12->cmd_usr_buf,FUNC_3)>=0) return;

   }
  } else
   VAR_8 = VAR_1;
 }

exit:
 VAR_10 = VAR_12->card_api_cb;
 VAR_12->card_api_cb = ((void*)0);
 FUNC_1(VAR_12,VAR_8);
 if(VAR_10) VAR_10(VAR_6,VAR_8);
}
