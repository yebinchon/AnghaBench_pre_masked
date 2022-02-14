
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t s32 ;
struct TYPE_3__ {int flags; scalar_t__ imm_len; int * imm_buff; scalar_t__ CallbackTC; } ;
typedef TYPE_1__ exibus_priv ;
typedef scalar_t__ EXICallback ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t,int ,int,int ) ;
 int* VAR_4 ;
 TYPE_1__* VAR_5 ;

s32 FUNC_5(s32 VAR_6,void *VAR_7,u32 VAR_8,u32 VAR_9,EXICallback VAR_10)
{
 u32 VAR_11;
 exibus_priv *VAR_12 = &VAR_5[VAR_6];
 FUNC_1(VAR_11);

 if(VAR_12->flags&(VAR_0|VAR_1) || !(VAR_12->flags&VAR_2)) {
  FUNC_2(VAR_11);
  return 0;
 }
 VAR_12->CallbackTC = VAR_10;
 if(VAR_10) {
  FUNC_4(VAR_6,0,1,0);
  FUNC_3((FUNC_0((VAR_3+(VAR_6*3)))));
 }

 VAR_12->imm_buff = ((void*)0);
 VAR_12->imm_len = 0;
 VAR_12->flags |= VAR_0;

 VAR_4[VAR_6*5+1] = (u32)VAR_7&0x03FFFFE0;
 VAR_4[VAR_6*5+2] = VAR_8;
 VAR_4[VAR_6*5+3] = ((VAR_9&0x03)<<2)|0x03;

 FUNC_2(VAR_11);
 return 1;
}
