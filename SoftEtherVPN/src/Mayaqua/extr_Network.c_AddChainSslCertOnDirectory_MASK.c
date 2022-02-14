
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int txtname ;
typedef int tmp ;
struct ssl_ctx_st {int dummy; } ;
typedef int exedir ;
typedef int dirname ;
typedef int X ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Folder; char* FileNameW; } ;
struct TYPE_5__ {size_t NumFiles; TYPE_2__** File; } ;
typedef int LIST ;
typedef TYPE_1__ DIRLIST ;
typedef TYPE_2__ DIRENT ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ssl_ctx_st*,int *) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int,int *,char*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (char*,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int *,size_t) ;
 size_t FUNC_15 (int *) ;
 int VAR_0 ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int VAR_1 ;

void FUNC_19(struct ssl_ctx_st *VAR_2)
{
 wchar_t VAR_3[VAR_0];
 wchar_t VAR_4[VAR_0];
 wchar_t VAR_5[VAR_0];
 DIRLIST *VAR_6;
 LIST *VAR_7;
 UINT VAR_8;


 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_7 = FUNC_17(((void*)0));

 FUNC_11(VAR_4, sizeof(VAR_4));

 FUNC_4(VAR_3, sizeof(VAR_3), VAR_4, L"chain_certs");

 FUNC_16(VAR_3);

 FUNC_4(VAR_5, sizeof(VAR_5), VAR_3, L"Readme_Chain_Certs.txt");

 if (FUNC_13(VAR_5) == 0)
 {
  FUNC_6(L"|chain_certs.txt", VAR_5);
 }

 VAR_6 = FUNC_5(VAR_3);

 if (VAR_6 != ((void*)0))
 {
  for (VAR_8 = 0;VAR_8 < VAR_6->NumFiles;VAR_8++)
  {
   DIRENT *VAR_9 = VAR_6->File[VAR_8];

   if (VAR_9->Folder == 0)
   {
    wchar_t VAR_10[VAR_0];
    X *VAR_11;

    FUNC_4(VAR_10, sizeof(VAR_10), VAR_3, VAR_9->FileNameW);

    VAR_11 = FUNC_7(VAR_10);

    if (VAR_11 != ((void*)0))
    {
     UINT VAR_12;
     bool VAR_13 = 0;
     UCHAR VAR_14[VAR_1];

     FUNC_12(VAR_11, VAR_14, 1);

     for (VAR_12 = 0;VAR_12 < FUNC_15(VAR_7);VAR_12++)
     {
      UCHAR *VAR_15 = FUNC_14(VAR_7, VAR_12);

      if (FUNC_3(VAR_14, VAR_15, VAR_1) == 0)
      {
       VAR_13 = 1;
      }
     }

     if (VAR_13 == 0)
     {
      FUNC_1(VAR_2, VAR_11);

      FUNC_0(VAR_7, FUNC_2(VAR_14, VAR_1));
     }

     FUNC_10(VAR_11);
    }
   }
  }

  FUNC_9(VAR_6);
 }

 for (VAR_8 = 0;VAR_8 < FUNC_15(VAR_7);VAR_8++)
 {
  UCHAR *VAR_16 = FUNC_14(VAR_7, VAR_8);

  FUNC_8(VAR_16);
 }

 FUNC_18(VAR_7);
}
