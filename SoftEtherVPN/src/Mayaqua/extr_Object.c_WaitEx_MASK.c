
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
typedef int EVENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;

bool FUNC_4(EVENT *VAR_1, UINT VAR_2, volatile bool *VAR_3)
{
 bool VAR_4 = 0;
 UINT64 VAR_5, VAR_6;

 if (VAR_3 == ((void*)0))
 {
  VAR_3 = &VAR_4;
 }

 VAR_5 = FUNC_2();

 if (VAR_2 == VAR_0 || VAR_2 == 0x7FFFFFFF)
 {
  VAR_6 = 0;
 }
 else
 {
  VAR_6 = VAR_5 + (UINT64)VAR_2;
 }

 while (1)
 {
  UINT64 VAR_7 = FUNC_2();
  UINT VAR_8 = (UINT)(VAR_6 - VAR_7);
  if (VAR_6 == 0)
  {
   VAR_8 = VAR_0;
  }
  else
  {
   if (VAR_7 >= VAR_6)
   {

    return 0;
   }
  }

  VAR_8 = FUNC_0(VAR_8, 25);

  if (*VAR_3)
  {

   return 0;
  }

  if (VAR_1 != ((void*)0))
  {
   if (FUNC_3(VAR_1, VAR_8))
   {

    return 1;
   }
  }
  else
  {
   FUNC_1(VAR_8);
  }
 }
}
