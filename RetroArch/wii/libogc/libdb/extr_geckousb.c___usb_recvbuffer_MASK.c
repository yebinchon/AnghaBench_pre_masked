
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_4(s32 VAR_1,void *VAR_2,int VAR_3)
{
 s32 VAR_4;
 s32 VAR_5 = VAR_3;
 char *VAR_6 = (char*)VAR_2;

 if(!FUNC_0(VAR_1,VAR_0,((void*)0))) return 0;

 while(VAR_5>0) {
  if(FUNC_2(VAR_1)) {
   VAR_4 = FUNC_3(VAR_1,VAR_6);
   if(VAR_4==0) break;

   VAR_6++;
   VAR_5--;
  }
 }

 FUNC_1(VAR_1);
 return (VAR_3 - VAR_5);
}
