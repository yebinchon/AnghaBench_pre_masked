
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t s32 ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (size_t,int *,int,int ,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (size_t) ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3(s32 VAR_12,u32 VAR_13)
{
 u32 VAR_14,VAR_15;
 VAR_14 = FUNC_0(VAR_12);
 if(VAR_8&VAR_14) {
  VAR_15 = VAR_13&0xff;
  VAR_13 &= ~0xff;
  VAR_11 &= ~VAR_14;
  VAR_6 &= ~VAR_14;
  if(!(VAR_15&0x0f)
   && (VAR_13&VAR_0) && (VAR_13&VAR_5) && (VAR_13&VAR_2)
   && !(VAR_13&VAR_3) && !(VAR_13&VAR_1) && !(VAR_13&VAR_4)) FUNC_1(VAR_12,&VAR_7,1,VAR_9[VAR_12],10,VAR_10,0);
  else FUNC_2(VAR_12);
 }
}
