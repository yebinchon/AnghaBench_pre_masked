
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef scalar_t__ s32 ;
typedef int dsptask_t ;
struct TYPE_3__ {size_t cipher; size_t latency; scalar_t__ workarea; int dsp_task; } ;
typedef TYPE_1__ card_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 () ;
 int FUNC_3 (size_t,scalar_t__) ;
 scalar_t__ FUNC_4 (size_t,size_t,int ,size_t,int) ;
 scalar_t__ FUNC_5 (size_t,int*) ;
 TYPE_1__* VAR_4 ;
 size_t FUNC_6 (size_t,size_t) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(dsptask_t *VAR_6)
{

 u8 VAR_7;
 s32 VAR_8;
 u32 VAR_9,VAR_10,VAR_11;
 u32 VAR_12,VAR_13;
 card_block *VAR_14 = ((void*)0);
 VAR_9 = 0;
 while(VAR_9<VAR_3) {
  VAR_14 = &VAR_4[VAR_9];
  if(&VAR_14->dsp_task==VAR_6) break;
  VAR_9++;
 }
 if(VAR_9>=VAR_3) return;

 VAR_12 = (u32)VAR_14->workarea;
 VAR_12 = ((VAR_12+47)&~0x1f);
 VAR_11 = ((u32*)VAR_12)[8];

 VAR_13 = (VAR_11^VAR_14->cipher)&~0xffff;
 VAR_10 = FUNC_2();
 if(FUNC_4(VAR_9,VAR_13,VAR_5,VAR_10,1)<0) {
  FUNC_1(VAR_9);
  FUNC_3(VAR_9,VAR_1);
  return;
 }

 VAR_13 = FUNC_6(VAR_14->cipher,((VAR_10+VAR_14->latency+4)<<3)+1);
 {
  u32 VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20;
  VAR_15 = (VAR_13<<23);
  VAR_16 = (VAR_13<<15);
  VAR_17 = (VAR_13<<7);
  VAR_18 = (VAR_13^VAR_17);
  VAR_19 = (VAR_16^VAR_18);
  VAR_20 = ~(VAR_15^VAR_19);
  VAR_18 = (VAR_13|(VAR_20>>31));
  VAR_14->cipher = VAR_18;
 }

 VAR_13 = ((VAR_11<<16)^VAR_14->cipher)&~0xffff;
 VAR_10 = FUNC_2();
 if(FUNC_4(VAR_9,VAR_13,VAR_5,VAR_10,1)<0) {
  FUNC_1(VAR_9);
  FUNC_3(VAR_9,VAR_1);
  return;
 }

 VAR_8 = FUNC_5(VAR_9,&VAR_7);
 if(FUNC_0(VAR_9)==0) {
  FUNC_1(VAR_9);
  FUNC_3(VAR_9,VAR_1);
  return;
 }
 if(!VAR_8 && !(VAR_7&VAR_2)) {
  FUNC_1(VAR_9);
  VAR_8 = VAR_0;
 }
 FUNC_3(VAR_9,VAR_8);
}
