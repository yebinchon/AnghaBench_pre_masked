
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef size_t UINT ;
struct TYPE_6__ {int (* GetWidth ) (TYPE_1__*) ;int (* Write ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ CONSOLE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char,size_t) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,size_t,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char*) ;

void FUNC_13(CONSOLE *VAR_0, UINT VAR_1, UINT *VAR_2, wchar_t **VAR_3, bool *VAR_4, char VAR_5)
{
 UINT VAR_6;
 wchar_t *VAR_7;
 UINT VAR_8;
 bool VAR_9 = 1;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_8 = 32;
 for (VAR_6 = 0;VAR_6 < VAR_1;VAR_6++)
 {
  VAR_8 += sizeof(wchar_t) * VAR_2[VAR_6] + 6;
 }

 VAR_7 = FUNC_9(VAR_8);

 for (VAR_6 = 0;VAR_6 < VAR_1;VAR_6++)
 {
  char *VAR_10;
  wchar_t *VAR_11;
  UINT VAR_12;
  UINT VAR_13 = 0;
  wchar_t *VAR_14 = VAR_3[VAR_6];
  wchar_t *VAR_15 = ((void*)0);

  if (FUNC_5(VAR_14, L"---") == 0)
  {
   char *VAR_16 = FUNC_2('-', VAR_2[VAR_6]);
   VAR_15 = VAR_14 = FUNC_0(VAR_16);

   FUNC_1(VAR_16);
  }
  else
  {
   VAR_9 = 0;
  }

  VAR_12 = FUNC_7(VAR_14);

  if (VAR_2[VAR_6] >= VAR_12)
  {
   VAR_13 = VAR_2[VAR_6] - VAR_12;
  }

  VAR_10 = FUNC_2(' ', VAR_13);
  VAR_11 = FUNC_0(VAR_10);

  if (VAR_4[VAR_6] != 0)
  {
   FUNC_4(VAR_7, VAR_8, VAR_11);
  }

  FUNC_4(VAR_7, VAR_8, VAR_14);

  if (VAR_4[VAR_6] == 0)
  {
   FUNC_4(VAR_7, VAR_8, VAR_11);
  }

  FUNC_1(VAR_11);
  FUNC_1(VAR_10);

  if (VAR_6 < (VAR_1 - 1))
  {
   wchar_t VAR_17[4];
   char VAR_18[2];

   if (FUNC_5(VAR_3[VAR_6], L"---") == 0)
   {
    VAR_18[0] = '+';
   }
   else
   {
    VAR_18[0] = VAR_5;
   }
   VAR_18[1] = 0;

   FUNC_3(VAR_17, sizeof(VAR_17), VAR_18);

   FUNC_4(VAR_7, VAR_8, VAR_17);
  }

  if (VAR_15 != ((void*)0))
  {
   FUNC_1(VAR_15);
  }
 }

 FUNC_8(VAR_7);

 if (VAR_9)
 {
  if (FUNC_6(VAR_7) > (VAR_0->GetWidth(VAR_0) - 1))
  {
   VAR_7[VAR_0->GetWidth(VAR_0) - 1] = 0;
  }
 }

 VAR_0->Write(VAR_0, VAR_7);

 FUNC_1(VAR_7);
}
