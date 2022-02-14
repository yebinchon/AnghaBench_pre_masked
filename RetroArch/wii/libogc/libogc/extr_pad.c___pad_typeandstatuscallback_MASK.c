
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t,int *,int,int ,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 (size_t) ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;

__attribute__((used)) static void FUNC_4(s32 VAR_20,u32 VAR_21)
{
 u32 VAR_22,VAR_23,VAR_24 = 0;
 VAR_23 = FUNC_0(VAR_17);
 VAR_22 = VAR_16&VAR_23;
 VAR_16 &= ~VAR_23;

 if(VAR_21&0x0f) {
  FUNC_2();
  return;
 }

 VAR_19[VAR_17] = (VAR_21&~0xff);
 if(((VAR_21&VAR_3)-VAR_2)
  || !(VAR_21&VAR_0)) {
  FUNC_2();
  return;
 }

 if(VAR_18<2) {
  FUNC_3(VAR_17);
  FUNC_2();
  return;
 }

 if(!(VAR_21&VAR_1) || VAR_21&VAR_6) {
  if(VAR_22) VAR_24 = FUNC_1(VAR_17,&VAR_9,3,VAR_12[VAR_17],10,VAR_13,0);
  else VAR_24 = FUNC_1(VAR_17,&VAR_11,1,VAR_12[VAR_17],10,VAR_13,0);
 } else if(VAR_21&VAR_5 && !(VAR_21&VAR_4) && !(VAR_21&VAR_7)) {
  if(VAR_21&VAR_8) VAR_24 = FUNC_1(VAR_17,&VAR_11,1,VAR_12[VAR_17],10,VAR_13,0);
  else VAR_24 = FUNC_1(VAR_17,&VAR_10[VAR_17],3,VAR_12[VAR_17],8,VAR_15,0);
 }
 if(!VAR_24) {
  VAR_14 |= VAR_23;
  FUNC_2();
 }
}
