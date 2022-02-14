
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int mount_step; size_t card_size; size_t sector_size; scalar_t__ attached; } ;
typedef TYPE_1__ card_block ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (size_t,int ,int*) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 size_t* VAR_9 ;
 TYPE_1__* VAR_10 ;

s32 FUNC_7(s32 VAR_11,s32 *VAR_12,s32 *VAR_13)
{
 s32 VAR_14;
 u32 VAR_15,VAR_16;
 card_block *VAR_17 = ((void*)0);
 if(VAR_11<VAR_5 || VAR_11>=VAR_6) return VAR_1;
 VAR_17 = &VAR_10[VAR_11];

 FUNC_3(VAR_15);
 VAR_14 = FUNC_2(VAR_11);
 if(VAR_14<=0) {
  if(!VAR_14) VAR_14 = VAR_0;
  else VAR_14 = VAR_2;
  FUNC_4(VAR_15);
  return VAR_14;
 }

 if(VAR_17->attached) {
  if(VAR_17->mount_step<1) {
   FUNC_4(VAR_15);
   return VAR_0;
  }
  if(VAR_12) *VAR_12 = VAR_17->card_size;
  if(VAR_13) *VAR_13 = VAR_17->sector_size;

  FUNC_4(VAR_15);
  return VAR_3;
 }

 if(FUNC_1(VAR_11)&VAR_8) VAR_14 = VAR_4;
 else {
  VAR_14 = VAR_0;
  if(FUNC_0(VAR_11,VAR_7,&VAR_16)) {
   if(!FUNC_6(VAR_16)) VAR_14 = VAR_4;
   else {
    if(VAR_12) *VAR_12 = VAR_16&0xFC;
    if(VAR_13) {
     u32 VAR_18 = FUNC_5(VAR_16,23)&0x1c;
     *VAR_13 = VAR_9[VAR_18>>2];
    }
    VAR_14 = VAR_3;
   }
  }
 }

 FUNC_4(VAR_15);
 return VAR_14;
}
