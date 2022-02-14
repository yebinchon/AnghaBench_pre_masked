
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int u ;
typedef int tmp ;
typedef int st ;
typedef int org ;
typedef int l ;
typedef int cn ;
typedef int c ;
typedef size_t UINT ;
struct TYPE_12__ {int Size; int Buf; } ;
struct TYPE_11__ {int DigestSHA1; int DigestMD5; int Serial; int Name; } ;
struct TYPE_10__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int LIST ;
typedef int FOLDER ;
typedef TYPE_2__ CRL ;
typedef TYPE_3__ BUF ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,char*,char*,int) ;
 int FUNC_3 (int *,char*,int *,int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 TYPE_2__* FUNC_13 (int) ;

void FUNC_14(LIST *VAR_3, FOLDER *VAR_4)
{

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_3);
 {
  UINT VAR_5;
  TOKEN_LIST *VAR_6;

  VAR_6 = FUNC_0(VAR_4);

  for (VAR_5 = 0;VAR_5 < VAR_6->NumTokens;VAR_5++)
  {
   CRL *VAR_7;
   FOLDER *VAR_8 = FUNC_1(VAR_4, VAR_6->Token[VAR_5]);
   wchar_t VAR_9[VAR_0], VAR_10[VAR_0], VAR_11[VAR_0], VAR_12[VAR_0],
    VAR_13[VAR_0], VAR_14[VAR_0];
   char VAR_15[VAR_0];

   if (VAR_8 != ((void*)0))
   {
    BUF *VAR_16;

    VAR_7 = FUNC_13(sizeof(CRL));

    FUNC_3(VAR_8, "CommonName", VAR_9, sizeof(VAR_9));
    FUNC_3(VAR_8, "Organization", VAR_10, sizeof(VAR_10));
    FUNC_3(VAR_8, "Unit", VAR_11, sizeof(VAR_11));
    FUNC_3(VAR_8, "Country", VAR_12, sizeof(VAR_12));
    FUNC_3(VAR_8, "State", VAR_13, sizeof(VAR_13));
    FUNC_3(VAR_8, "Local", VAR_14, sizeof(VAR_14));

    VAR_7->Name = FUNC_9(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

    if (FUNC_2(VAR_8, "Serial", VAR_15, sizeof(VAR_15)))
    {
     VAR_16 = FUNC_11(VAR_15);

     if (VAR_16 != ((void*)0))
     {
      if (VAR_16->Size >= 1)
      {
       VAR_7->Serial = FUNC_10(VAR_16->Buf, VAR_16->Size);
      }

      FUNC_5(VAR_16);
     }
    }

    if (FUNC_2(VAR_8, "DigestMD5", VAR_15, sizeof(VAR_15)))
    {
     VAR_16 = FUNC_11(VAR_15);

     if (VAR_16 != ((void*)0))
     {
      if (VAR_16->Size == VAR_1)
      {
       FUNC_4(VAR_7->DigestMD5, VAR_16->Buf, VAR_1);
      }

      FUNC_5(VAR_16);
     }
    }

    if (FUNC_2(VAR_8, "DigestSHA1", VAR_15, sizeof(VAR_15)))
    {
     VAR_16 = FUNC_11(VAR_15);

     if (VAR_16 != ((void*)0))
     {
      if (VAR_16->Size == VAR_2)
      {
       FUNC_4(VAR_7->DigestSHA1, VAR_16->Buf, VAR_2);
      }

      FUNC_5(VAR_16);
     }
    }

    FUNC_7(VAR_3, VAR_7);
   }
  }

  FUNC_6(VAR_6);
 }
 FUNC_12(VAR_3);
}
