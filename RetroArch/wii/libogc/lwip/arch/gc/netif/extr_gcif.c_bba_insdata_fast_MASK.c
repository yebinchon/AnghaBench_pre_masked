
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (void*,int,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0,s32 VAR_1)
{
 u32 VAR_2;
 s32 VAR_3;
 u8 *VAR_4 = VAR_0;

 if(!VAR_0 || VAR_1<=0) return;

 VAR_3 = -((u32)VAR_0)&0x1f;
 if((s32)(VAR_1-VAR_3)<32) {
  FUNC_1(VAR_0,VAR_1);
  return;
 }

 if(VAR_3>0) {
  FUNC_1(VAR_4,VAR_3);
  VAR_1 -= VAR_3;
  VAR_4 += VAR_3;
 }

 VAR_2 = (VAR_1&~0x1f);
 FUNC_0(VAR_4,VAR_2);
 FUNC_2(VAR_4,VAR_2,((void*)0));
 FUNC_3();

 VAR_1 -= VAR_2;
 VAR_4 += VAR_2;
 if(VAR_1>0) FUNC_1(VAR_4,VAR_1);
}
