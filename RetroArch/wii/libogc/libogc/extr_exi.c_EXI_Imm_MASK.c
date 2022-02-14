
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; size_t imm_len; void* imm_buff; scalar_t__ CallbackTC; } ;
typedef TYPE_1__ exibus_priv ;
typedef scalar_t__ EXICallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t,int ,int,int ) ;
 size_t* VAR_6 ;
 TYPE_1__* VAR_7 ;

s32 FUNC_5(s32 VAR_8,void *VAR_9,u32 VAR_10,u32 VAR_11,EXICallback VAR_12)
{
 u32 VAR_13;
 u32 VAR_14,VAR_15;
 exibus_priv *VAR_16 = &VAR_7[VAR_8];
 FUNC_1(VAR_13);

 if(VAR_16->flags&(VAR_0|VAR_1) || !(VAR_16->flags&VAR_2)) {
  FUNC_2(VAR_13);
  return 0;
 }

 VAR_16->CallbackTC = VAR_12;
 if(VAR_12) {
  FUNC_4(VAR_8,0,1,0);
  FUNC_3(FUNC_0((VAR_5+(VAR_8*3))));
 }
 VAR_16->flags |= VAR_1;

 VAR_16->imm_buff = VAR_9;
 VAR_16->imm_len = VAR_10;
 if(VAR_11!=VAR_3) {
  for(VAR_15=0,VAR_14=0;VAR_15<VAR_10;VAR_15++) VAR_14 |= (((u8*)VAR_9)[VAR_15])<<((3-VAR_15)*8);
  VAR_6[VAR_8*5+4] = VAR_14;
 }
 if(VAR_11==VAR_4) VAR_16->imm_len = 0;

 VAR_6[VAR_8*5+3] = (((VAR_10-1)&0x03)<<4)|((VAR_11&0x03)<<2)|0x01;

 FUNC_2(VAR_13);
 return 1;
}
