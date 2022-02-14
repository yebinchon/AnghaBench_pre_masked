
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UNI_TOKEN_LIST ;
typedef size_t UINT ;
struct TYPE_6__ {scalar_t__ Buf; } ;
typedef int LIST ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 () ;
 size_t FUNC_9 (int*) ;
 int FUNC_10 (TYPE_1__*,int*,int) ;

UNI_TOKEN_LIST *FUNC_11(wchar_t *VAR_0)
{
 UINT VAR_1, VAR_2;
 BUF *VAR_3 = ((void*)0);
 LIST *VAR_4;
 UNI_TOKEN_LIST *VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return FUNC_8();
 }

 VAR_4 = FUNC_4(((void*)0));

 VAR_2 = FUNC_9(VAR_0);

 VAR_3 = FUNC_3();

 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  wchar_t VAR_6 = VAR_0[VAR_1];
  bool VAR_7 = 0;

  if (VAR_6 == L'\r')
  {
   if (VAR_0[VAR_1 + 1] == L'\n')
   {
    VAR_1++;
   }
   VAR_7 = 1;
  }
  else if (VAR_6 == L'\n')
  {
   VAR_7 = 1;
  }

  if (VAR_7)
  {
   wchar_t VAR_8 = 0;
   wchar_t *VAR_9;
   FUNC_10(VAR_3, &VAR_8, sizeof(wchar_t));

   VAR_9 = (wchar_t *)VAR_3->Buf;

   FUNC_0(VAR_4, FUNC_5(VAR_9));

   FUNC_1(VAR_3);
  }
  else
  {
   FUNC_10(VAR_3, &VAR_6, sizeof(wchar_t));
  }
 }

 if (1)
 {
  wchar_t VAR_10 = 0;
  wchar_t *VAR_11;
  FUNC_10(VAR_3, &VAR_10, sizeof(wchar_t));

  VAR_11 = (wchar_t *)VAR_3->Buf;

  FUNC_0(VAR_4, FUNC_5(VAR_11));

  FUNC_1(VAR_3);
 }

 FUNC_2(VAR_3);

 VAR_5 = FUNC_7(VAR_4);

 FUNC_6(VAR_4);

 return VAR_5;
}
