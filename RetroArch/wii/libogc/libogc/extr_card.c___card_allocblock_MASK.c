
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct card_bat {scalar_t__ freeblocks; size_t lastalloc; size_t* fat; } ;
typedef size_t s32 ;
typedef int cardcallback ;
struct TYPE_4__ {size_t curr_fileblock; scalar_t__ blocks; int attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct card_bat* FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (size_t,struct card_bat*,int ) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static s32 FUNC_2(s32 VAR_8,u32 VAR_9,cardcallback VAR_10)
{
 s32 VAR_11;
 u16 VAR_12,VAR_13 = 0,VAR_14 = 0;
 u32 VAR_15,VAR_16;
 card_block *VAR_17 = ((void*)0);
 struct card_bat *VAR_18 = ((void*)0);
 if(VAR_8<VAR_5 || VAR_8>=VAR_6) return VAR_1;
 VAR_17 = &VAR_7[VAR_8];

 if(!VAR_17->attached) return VAR_3;
 VAR_18 = FUNC_0(VAR_17);

 if(VAR_18->freeblocks<VAR_9) return VAR_2;


 VAR_16 = 0;
 VAR_12 = 0xffff;
 VAR_13 = VAR_18->lastalloc;
 VAR_15 = VAR_9;
 while(1) {
  if(VAR_15==0) {

   VAR_18->freeblocks -= VAR_9;
   VAR_18->lastalloc = VAR_13;
   VAR_17->curr_fileblock = VAR_12;
   VAR_11 = FUNC_1(VAR_8,VAR_18,VAR_10);
   break;
  }






  VAR_16++;
  if(VAR_16>=(VAR_17->blocks-VAR_4)) return VAR_0;

  VAR_13++;
     if(VAR_13<VAR_4 || VAR_13>=VAR_17->blocks) VAR_13 = VAR_4;
  if(VAR_18->fat[VAR_13-VAR_4]==0) {
   if(VAR_12!=0xffff)
    VAR_18->fat[VAR_14-VAR_4] = VAR_13;
   else
    VAR_12 = VAR_13;

   VAR_18->fat[VAR_13-VAR_4] = 0xffff;
   VAR_14 = VAR_13;
   VAR_15--;
  }
 }
 return VAR_11;
}
