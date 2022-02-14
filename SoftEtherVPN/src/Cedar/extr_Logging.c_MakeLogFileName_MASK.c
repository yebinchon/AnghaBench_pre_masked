
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp2 ;
typedef int tmp ;
typedef int tag ;
typedef unsigned long long UINT64 ;
typedef int UINT ;
typedef int LOG ;


 unsigned long long FUNC_0 () ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int,unsigned long long,int) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,...) ;
 scalar_t__ FUNC_5 (char*,char*) ;

bool FUNC_6(LOG *VAR_2, char *VAR_3, UINT VAR_4, char *VAR_5, char *VAR_6, UINT64 VAR_7, UINT VAR_8, UINT VAR_9, char *VAR_10)
{
 char VAR_11[VAR_1];
 char VAR_12[64];
 bool VAR_13 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_6 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_2, VAR_11, sizeof(VAR_11), VAR_7, VAR_8);

 if (VAR_9 == 0)
 {
  VAR_12[0] = 0;
 }
 else
 {
  UINT64 VAR_14 = FUNC_0();
  if (VAR_14 == VAR_0)
  {
   FUNC_4(VAR_12, sizeof(VAR_12), "~%02u", VAR_9);
  }
  else
  {
   char VAR_15[32];
   char VAR_16 = '2';
   if (VAR_14 >= 1000000000ULL)
   {
    VAR_16 = '3';
   }
   else if (VAR_14 >= 100000000ULL)
   {
    VAR_16 = '4';
   }
   else if (VAR_14 >= 10000000ULL)
   {
    VAR_16 = '5';
   }
   else if (VAR_14 >= 1000000ULL)
   {
    VAR_16 = '6';
   }
   else if (VAR_14 >= 100000ULL)
   {
    VAR_16 = '7';
   }
   else if (VAR_14 >= 10000ULL)
   {
    VAR_16 = '8';
   }
   else if (VAR_14 >= 1000ULL)
   {
    VAR_16 = '9';
   }

   FUNC_2(VAR_15, sizeof(VAR_15), "~%02u");
   VAR_15[3] = VAR_16;

   FUNC_4(VAR_12, sizeof(VAR_12), VAR_15, VAR_9);
  }
 }

 if (FUNC_5(VAR_10, VAR_11) != 0)
 {
  VAR_13 = 1;
  FUNC_2(VAR_10, VAR_1, VAR_11);
 }

 FUNC_4(VAR_3, VAR_4, "%s%s%s%s%s.log", VAR_5,
  FUNC_3(VAR_5) == 0 ? "" : "/",
  VAR_6, VAR_11, VAR_12
  );

 return VAR_13;
}
