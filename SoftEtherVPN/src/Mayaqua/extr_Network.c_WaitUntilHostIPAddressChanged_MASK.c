
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef int UINT ;
typedef int EVENT ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int) ;

void FUNC_5(void *VAR_0, EVENT *VAR_1, UINT VAR_2, UINT VAR_3)
{
 UINT64 VAR_4, VAR_5;
 UINT VAR_6;

 if (VAR_2 == 0x7FFFFFFF)
 {
  VAR_2 = 0xFFFFFFFF;
 }
 if (VAR_3 == 0)
 {
  VAR_3 = 0xFFFFFFFF;
 }
 if (VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return;
 }

 VAR_4 = FUNC_3();
 VAR_5 = VAR_4 + (UINT64)VAR_2;
 VAR_6 = FUNC_0();

 while (1)
 {
  UINT64 VAR_7 = FUNC_3();
  UINT VAR_8;

  if (VAR_7 >= VAR_5)
  {
   break;
  }

  if (VAR_0 != ((void*)0))
  {
   if (FUNC_1(VAR_0))
   {
    break;
   }
  }

  if (VAR_6 != FUNC_0())
  {
   break;
  }

  VAR_8 = (UINT)(VAR_5 - VAR_7);
  VAR_8 = FUNC_2(VAR_8, VAR_3);

  if (FUNC_4(VAR_1, VAR_8))
  {
   break;
  }
 }
}
