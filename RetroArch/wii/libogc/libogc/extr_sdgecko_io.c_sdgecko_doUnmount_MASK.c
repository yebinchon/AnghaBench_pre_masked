
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t,int,int *) ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 size_t FUNC_5 (size_t) ;

s32 FUNC_6(s32 VAR_8)
{
 s32 VAR_9;

 if(VAR_8<0 || VAR_8>=VAR_3) return VAR_0;

 if(FUNC_1(VAR_8)==VAR_5 && VAR_7[VAR_8]!=VAR_4) {
  if((VAR_9=FUNC_3(VAR_8))!=0) goto exit;
  if((VAR_9=FUNC_4(VAR_8,0x2a,((void*)0)))!=0) goto exit;
  VAR_9 = FUNC_2(VAR_8);
 }
 VAR_7[VAR_8] = VAR_4;

exit:
 if(VAR_6[VAR_8]==VAR_5) {
  VAR_6[VAR_8] = VAR_2;
  FUNC_0(VAR_8);
 }
 if(&FUNC_5)
  return FUNC_5(VAR_8);

 return VAR_1;
}
