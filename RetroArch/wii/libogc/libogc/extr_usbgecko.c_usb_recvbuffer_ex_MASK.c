
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(s32 VAR_0,void *VAR_1,int VAR_2, int VAR_3)
{
 s32 VAR_4;
 s32 VAR_5 = VAR_2;
 char *VAR_6 = (char*)VAR_1;

 FUNC_2(VAR_0);
 while(VAR_5>0) {
  VAR_4 = FUNC_1(VAR_0,VAR_6);
  if(VAR_4==0) break;

  VAR_6++;
  VAR_5--;

  if (VAR_3 >= 0) {
   VAR_3--;
   if (VAR_3 == 0)
    break;
  }
 }
 FUNC_0(VAR_0);

 return (VAR_2 - VAR_5);
}
