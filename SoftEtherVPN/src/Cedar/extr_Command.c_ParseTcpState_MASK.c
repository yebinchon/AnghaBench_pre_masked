
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

bool FUNC_2(char *VAR_0, bool *VAR_1, bool *VAR_2)
{
 bool VAR_3 = 0;

 if(VAR_0 == ((void*)0))
 {
  return 0;
 }

 if(VAR_1 != ((void*)0) && VAR_2 != ((void*)0))
 {
  VAR_3 = 1;
 }

 if (FUNC_0(VAR_0) == 0)
 {
  if (FUNC_1("Established", VAR_0) == 0)
  {
   if(VAR_3 != 0)
   {
    *VAR_1 = 1;
    *VAR_2 = 1;
   }
  }
  else if (FUNC_1("Unestablished", VAR_0) == 0)
  {
   if(VAR_3 != 0)
   {
    *VAR_1 = 1;
    *VAR_2 = 0;
   }
  }
  else
  {

   return 0;
  }
 }
 else
 {
  if(VAR_3 != 0)
  {
   *VAR_1 = 0;
   *VAR_2 = 0;
  }
 }

 return 1;
}
