
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (char*) ;

UINT FUNC_2(char *VAR_1, char *VAR_2, char *VAR_3, bool VAR_4)
{
 UINT VAR_5, VAR_6;
 UINT VAR_7, VAR_8, VAR_9;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }


 VAR_7 = FUNC_1(VAR_1);
 VAR_8 = FUNC_1(VAR_2);
 VAR_9 = FUNC_1(VAR_3);

 if (VAR_8 == VAR_9)
 {
  return VAR_7;
 }


 VAR_6 = 0;
 VAR_5 = 0;
 while (1)
 {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_4);
  if (VAR_5 == VAR_0)
  {
   break;
  }
  VAR_5 += VAR_8;
  VAR_6++;
 }


 return VAR_7 + VAR_9 * VAR_6 - VAR_8 * VAR_6;
}
