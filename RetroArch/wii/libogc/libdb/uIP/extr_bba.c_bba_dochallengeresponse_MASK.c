
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s8_t ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static s8_t FUNC_2()
{
 u16 VAR_2;
 s32 VAR_3;

 FUNC_0("bba_dochallengeresponse()\n");

 VAR_3 = 0;
 do {
  VAR_3++;
  FUNC_1(&VAR_2);
  if(VAR_2==0x1000) VAR_3 = 0;
 } while(VAR_3<100 && !(VAR_2&0x0800));

 if(VAR_3>=1000) return VAR_0;
 return VAR_1;
}
