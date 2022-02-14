
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct card_bat {size_t* fat; int freeblocks; } ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_4__ {size_t blocks; int attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct card_bat* FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (size_t,struct card_bat*,int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_6,u16 VAR_7,cardcallback VAR_8)
{
 u16 VAR_9 = 0xffff,VAR_10 = 0xffff;
 card_block *VAR_11 = ((void*)0);
 struct card_bat *VAR_12 = ((void*)0);
 if(VAR_6<VAR_3 || VAR_6>=VAR_4) return VAR_1;
 VAR_11 = &VAR_5[VAR_6];

 if(!VAR_11->attached) return VAR_1;

 VAR_12 = FUNC_0(VAR_11);
 VAR_9 = VAR_12->fat[VAR_7-VAR_2];
 while(1) {
  if(VAR_9==0xffff) break;
  if(VAR_9<VAR_2 || VAR_9>=VAR_11->blocks) return VAR_0;


  VAR_10 = VAR_9;
  VAR_9 = VAR_12->fat[VAR_10-VAR_2];
  VAR_12->fat[VAR_10-VAR_2] = 0;
  VAR_12->freeblocks++;
 }
 return FUNC_1(VAR_6,VAR_12,VAR_8);
}
