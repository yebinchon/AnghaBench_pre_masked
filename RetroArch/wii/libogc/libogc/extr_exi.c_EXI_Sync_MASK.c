
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; scalar_t__ imm_len; scalar_t__* imm_buff; } ;
typedef TYPE_1__ exibus_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int* VAR_3 ;
 TYPE_1__* VAR_4 ;

s32 FUNC_2(s32 VAR_5)
{
 u8 *VAR_6;
 s32 VAR_7;
 u32 VAR_8,VAR_9,VAR_10,VAR_11;
 exibus_priv *VAR_12 = &VAR_4[VAR_5];
 while(VAR_3[VAR_5*5+3]&0x0001);

 FUNC_0(VAR_8);

 VAR_7 = 0;
 if(VAR_12->flags&VAR_2 && VAR_12->flags&(VAR_0|VAR_1)) {
  if(VAR_12->flags&VAR_1) {
   VAR_10 = VAR_12->imm_len;
   VAR_6 = VAR_12->imm_buff;
   if(VAR_6 && VAR_10>0) {
    VAR_11 = VAR_3[VAR_5*5+4];
    for(VAR_9=0;VAR_9<VAR_10;VAR_9++) ((u8*)VAR_6)[VAR_9] = (VAR_11>>((3-VAR_9)*8))&0xFF;
   }
  }
  VAR_12->flags &= ~(VAR_0|VAR_1);
  VAR_7 = 1;
 }
 FUNC_1(VAR_8);
 return VAR_7;
}
