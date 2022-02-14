
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*,int,int ,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static s32 FUNC_8(s32 VAR_5,u32 VAR_6,u32 *VAR_7)
{
 u32 VAR_8,VAR_9;

 if(VAR_5!=VAR_0 && VAR_6==VAR_1) {
  if(FUNC_0(VAR_5,((void*)0))==0) return 0;
 }

 VAR_8 = 0;
 if(FUNC_4(VAR_5,VAR_6,((void*)0))==1) {
  if(FUNC_5(VAR_5,VAR_6,VAR_3)==1) {
   VAR_9 = 0x20011300;
   if(FUNC_3(VAR_5,&VAR_9,sizeof(u32),VAR_4,((void*)0))==0) VAR_8 |= 0x0001;
   if(FUNC_6(VAR_5)==0) VAR_8 |= 0x0002;
   if(FUNC_3(VAR_5,VAR_7,sizeof(u32),VAR_2,((void*)0))==0) VAR_8 |= 0x0004;
   if(FUNC_6(VAR_5)==0) VAR_8 |= 0x0008;
   if(FUNC_1(VAR_5)==0) VAR_8 |= 0x0010;

  }
  FUNC_7(VAR_5);
 }

 if(VAR_5!=VAR_0 && VAR_6==VAR_1) FUNC_2(VAR_5);

 if(VAR_8) return 0;
 if((*VAR_7+0x00010000)==0xffff) return 0;

 return 1;
}
