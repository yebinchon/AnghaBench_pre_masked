
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,scalar_t__) ;

UINT FUNC_6(char *VAR_1, char *VAR_2, UINT VAR_3, bool VAR_4)
{
 UINT VAR_5, VAR_6;
 UINT VAR_7;
 char *VAR_8, *VAR_9;
 bool VAR_10;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return VAR_0;
 }


 VAR_5 = FUNC_3(VAR_1);
 if (VAR_5 <= VAR_3)
 {

  return VAR_0;
 }


 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 == 0)
 {

  return VAR_0;
 }

 if ((VAR_5 - VAR_3) < VAR_6)
 {

  return VAR_0;
 }

 if (VAR_4)
 {
  VAR_8 = VAR_1;
  VAR_9 = VAR_2;
 }
 else
 {
  VAR_8 = FUNC_1(VAR_5 + 1);
  FUNC_2(VAR_8, VAR_5 + 1, VAR_1);
  VAR_9 = FUNC_1(VAR_6 + 1);
  FUNC_2(VAR_9, VAR_6 + 1, VAR_2);
  FUNC_4(VAR_8);
  FUNC_4(VAR_9);
 }


 VAR_10 = 0;
 for (VAR_7 = VAR_3;VAR_7 < (VAR_5 - VAR_6 + 1);VAR_7++)
 {

  if (!FUNC_5(&VAR_8[VAR_7], VAR_9, VAR_6))
  {

   VAR_10 = 1;
   break;
  }
 }

 if (VAR_4 == 0)
 {

  FUNC_0(VAR_9);
  FUNC_0(VAR_8);
 }

 if (VAR_10 == 0)
 {
  return VAR_0;
 }
 return VAR_7;
}
