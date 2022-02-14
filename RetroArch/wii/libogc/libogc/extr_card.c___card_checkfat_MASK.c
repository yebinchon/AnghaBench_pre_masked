
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct card_bat {scalar_t__ chksum1; scalar_t__ chksum2; scalar_t__ freeblocks; scalar_t__ updated; int * fat; } ;
struct TYPE_3__ {scalar_t__ blocks; struct card_bat* curr_fat; struct card_bat* workarea; } ;
typedef TYPE_1__ card_block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (struct card_bat*,struct card_bat*,int) ;

__attribute__((used)) static u32 FUNC_2(card_block *VAR_1,u32 *VAR_2)
{
 u32 VAR_3,VAR_4,VAR_5;
 u16 VAR_6,VAR_7;
 struct card_bat *VAR_8[2];
 VAR_3 = 0;
 VAR_4 = 0;
 VAR_5 = 0;
 while(VAR_3<2) {
  VAR_8[VAR_3] = VAR_1->workarea+((VAR_3+3)<<13);
  FUNC_0((u16*)(((u32)VAR_8[VAR_3])+4),0x1ffc,&VAR_6,&VAR_7);
  if(VAR_6!=VAR_8[VAR_3]->chksum1 || VAR_7!=VAR_8[VAR_3]->chksum2) {
   VAR_1->curr_fat = ((void*)0);
   VAR_5 = VAR_3;
   VAR_4++;
  } else {
   u16 VAR_9 = VAR_0;
   u16 VAR_10 = 0;
   while(VAR_9<VAR_1->blocks) {
    if(!VAR_8[VAR_3]->fat[VAR_9-VAR_0]) VAR_10++;
    VAR_9++;
   }
   if(VAR_10!=VAR_8[VAR_3]->freeblocks) {
    VAR_1->curr_fat = ((void*)0);
    VAR_5 = VAR_3;
    VAR_4++;
   }
  }
  VAR_3++;
 }

 VAR_3 = VAR_5;
 if(!VAR_4) {
  if(VAR_8[0]->updated<VAR_8[1]->updated) VAR_3 = 0;
  else VAR_3 = 1;
 }
 if(VAR_1->curr_fat==((void*)0)) {
  VAR_1->curr_fat = VAR_8[VAR_3];
  FUNC_1(VAR_8[VAR_3],VAR_8[VAR_3^1],8192);
 }
 else if(VAR_1->curr_fat==VAR_8[0]) VAR_3 = 0;
 else VAR_3 = 1;

 if(VAR_2) *VAR_2 = VAR_3;
 return VAR_4;
}
