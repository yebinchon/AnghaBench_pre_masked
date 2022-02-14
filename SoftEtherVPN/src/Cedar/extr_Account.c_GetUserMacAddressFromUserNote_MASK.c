
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int macstr_a ;
typedef int macstr2 ;
struct TYPE_4__ {int NumTokens; int ** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef size_t UINT ;
typedef int UCHAR ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,char*) ;
 size_t FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int *,int,int *) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (char*,int,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

bool FUNC_10(UCHAR *VAR_3, wchar_t *VAR_4)
{
 bool VAR_5 = 0;
 UINT VAR_6;

 FUNC_9(VAR_3, 6);
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_6 = FUNC_4(VAR_4, VAR_2, 0, 0);
 if (VAR_6 != VAR_0)
 {
  wchar_t *VAR_7 = &VAR_4[VAR_6 + FUNC_6(VAR_2)];
  wchar_t VAR_8[VAR_1];
  UNI_TOKEN_LIST *VAR_9;

  FUNC_5(VAR_8, sizeof(VAR_8), VAR_7);

  FUNC_8(VAR_8);

  VAR_9 = FUNC_3(VAR_8, L" ,/()[].");
  if (VAR_9 != ((void*)0))
  {
   if (VAR_9->NumTokens >= 1)
   {
    wchar_t *VAR_10 = VAR_9->Token[0];

    if (FUNC_2(VAR_10) == 0)
    {
     char VAR_11[VAR_1];

     FUNC_7(VAR_11, sizeof(VAR_11), VAR_10);

     VAR_5 = FUNC_0(VAR_3, VAR_11);
    }
   }

   FUNC_1(VAR_9);
  }
 }

 return VAR_5;
}
