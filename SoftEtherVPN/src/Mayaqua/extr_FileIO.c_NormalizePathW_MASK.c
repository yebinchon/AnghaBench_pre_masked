
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
typedef int cd ;
struct TYPE_9__ {size_t NumTokens; int** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef size_t UINT ;
struct TYPE_10__ {int num_item; scalar_t__* p; } ;
typedef TYPE_2__ SK ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int*,char*) ;
 scalar_t__ FUNC_8 (int*,char*) ;
 int FUNC_9 (int*,int,...) ;
 scalar_t__ FUNC_10 (int*,char*) ;
 int FUNC_11 (int*,size_t,...) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int*,int) ;
 int FUNC_15 (int*,int) ;
 int FUNC_16 (int*,int) ;

void FUNC_17(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3)
{
 wchar_t VAR_4[VAR_0];
 UNI_TOKEN_LIST *VAR_5;
 bool VAR_6 = 0;
 bool VAR_7 = 0;



 bool VAR_8 = 0;
 UINT VAR_9;
 SK *VAR_10;

 if (VAR_1 == ((void*)0) || VAR_3 == 0)
 {
  return;
 }


 FUNC_11(VAR_4, sizeof(VAR_4), VAR_3);
 FUNC_0(VAR_4);
 FUNC_13(VAR_4);


 if (FUNC_8(VAR_4, L"./") || FUNC_8(VAR_4, L".\\") ||
  FUNC_8(VAR_4, L"../") || FUNC_8(VAR_4, L"..\\") ||
  FUNC_10(VAR_4, L".") == 0 || FUNC_10(VAR_4, L"..") == 0)
 {
  wchar_t VAR_11[VAR_0];
  FUNC_16(VAR_11, sizeof(VAR_11));




  FUNC_14(VAR_11, sizeof(VAR_11));


  if (FUNC_8(VAR_4, L".."))
  {
   FUNC_9(VAR_11, sizeof(VAR_11), L"/../");
   FUNC_9(VAR_11, sizeof(VAR_11), VAR_4 + 2);
  }
  else
  {
   FUNC_9(VAR_11, sizeof(VAR_11), L"/");
   FUNC_9(VAR_11, sizeof(VAR_11), VAR_4);
  }

  FUNC_11(VAR_4, sizeof(VAR_4), VAR_11);
 }


 if (FUNC_8(VAR_4, L"~/") || FUNC_8(VAR_4, L"~\\"))
 {
  wchar_t VAR_12[VAR_0];
  FUNC_1(VAR_12, sizeof(VAR_12));
  FUNC_9(VAR_12, sizeof(VAR_12), L"/");
  FUNC_9(VAR_12, sizeof(VAR_12), VAR_4 + 2);
  FUNC_11(VAR_4, sizeof(VAR_4), VAR_12);
 }

 if (FUNC_8(VAR_4, L"//") || FUNC_8(VAR_4, L"\\\\"))
 {

  VAR_6 = 1;
  VAR_8 = 1;
 }
 else if (FUNC_8(VAR_4, L"/") || FUNC_8(VAR_4, L"\\"))
 {

  VAR_7 = 1;
  VAR_8 = 1;
 }
 if (FUNC_12(VAR_4) == 1 && (VAR_4[0] == L'/' || VAR_4[0] == L'\\'))
 {
  VAR_4[0] = 0;
 }


 VAR_5 = FUNC_7(VAR_4, L"/\\");

 VAR_10 = FUNC_2();

 for (VAR_9 = 0;VAR_9 < VAR_5->NumTokens;VAR_9++)
 {
  wchar_t *VAR_13 = VAR_5->Token[VAR_9];

  if (FUNC_10(VAR_13, L".") == 0)
  {
   continue;
  }
  else if (FUNC_10(VAR_13, L"..") == 0)
  {
   if (VAR_10->num_item >= 1 && (VAR_6 == 0 || VAR_10->num_item >= 2))
   {
    FUNC_3(VAR_10);
   }
  }
  else
  {
   FUNC_4(VAR_10, VAR_13);
  }
 }


 FUNC_11(VAR_4, sizeof(VAR_4), L"");

 if (VAR_6)
 {
  FUNC_9(VAR_4, sizeof(VAR_4), L"//");
 }
 else if (VAR_7)
 {
  FUNC_9(VAR_4, sizeof(VAR_4), L"/");
 }
 for (VAR_9 = 0;VAR_9 < VAR_10->num_item;VAR_9++)
 {
  FUNC_9(VAR_4, sizeof(VAR_4), (wchar_t *)VAR_10->p[VAR_9]);
  if (VAR_9 != (VAR_10->num_item - 1))
  {
   FUNC_9(VAR_4, sizeof(VAR_4), L"/");
  }
 }

 FUNC_5(VAR_10);

 FUNC_6(VAR_5);

 FUNC_0(VAR_4);

 FUNC_11(VAR_1, VAR_2, VAR_4);
}
