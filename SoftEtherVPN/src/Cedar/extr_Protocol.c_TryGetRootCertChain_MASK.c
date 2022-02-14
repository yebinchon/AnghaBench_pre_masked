
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int hex_a ;
typedef int hex ;
typedef int fn ;
typedef int exedir ;
typedef int dirname ;
struct TYPE_17__ {scalar_t__ root_cert; int subject_name; } ;
typedef TYPE_1__ X ;
typedef size_t UINT ;
typedef int UCHAR ;
struct TYPE_19__ {int Folder; char* FileNameW; } ;
struct TYPE_18__ {size_t NumFiles; TYPE_3__** File; } ;
typedef int LIST ;
typedef TYPE_2__ DIRLIST ;
typedef TYPE_3__ DIRENT ;
typedef int BUF ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int *,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (char*,size_t,char*) ;
 int FUNC_6 (int *,char*) ;
 TYPE_2__* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*,int,int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (TYPE_1__*,int *,int) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_16 (int *,size_t) ;
 size_t FUNC_17 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_18 (char*) ;
 int * FUNC_19 (int) ;
 int VAR_3 ;
 int FUNC_20 (char*,int,char*) ;
 int FUNC_21 (int *,TYPE_1__*,int *) ;
 scalar_t__ FUNC_22 (char*,int ) ;
 int FUNC_23 (char*,int,char*) ;
 int FUNC_24 (char*,int,int ) ;
 int * FUNC_25 (TYPE_1__*,int) ;

bool FUNC_26(LIST *VAR_4, X *VAR_5, bool VAR_6, X **VAR_7)
{
 bool VAR_8 = 0;
 LIST *VAR_9 = ((void*)0);
 LIST *VAR_10 = ((void*)0);

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }

 VAR_9 = FUNC_19(0);

 VAR_8 = FUNC_21(VAR_4, VAR_5, VAR_9);

 if (VAR_8)
 {
  UINT VAR_11;
  DIRLIST *VAR_12;
  wchar_t VAR_13[VAR_2];
  wchar_t VAR_14[VAR_2];

  FUNC_13(VAR_14, sizeof(VAR_14));
  FUNC_3(VAR_13, sizeof(VAR_13), VAR_14, L"chain_certs");
  FUNC_18(VAR_13);

  if (VAR_6)
  {

   VAR_12 = FUNC_7(VAR_13);
   if (VAR_12 != ((void*)0))
   {
    for (VAR_11 = 0;VAR_11 < VAR_12->NumFiles;VAR_11++)
    {
     DIRENT *VAR_15 = VAR_12->File[VAR_11];

     if (VAR_15->Folder == 0)
     {
      if (FUNC_22(VAR_15->FileNameW, VAR_0))
      {
       wchar_t VAR_16[VAR_2];

       FUNC_3(VAR_16, sizeof(VAR_16), VAR_13, VAR_15->FileNameW);

       FUNC_8(VAR_16);
      }
     }
    }

    FUNC_11(VAR_12);
   }
  }

  VAR_10 = FUNC_19(0);
  FUNC_0(VAR_10);

  for (VAR_11 = 0;VAR_11 < FUNC_17(VAR_9);VAR_11++)
  {
   wchar_t VAR_17[VAR_2];
   X *VAR_18 = FUNC_16(VAR_9, VAR_11);

   FUNC_12(VAR_17, sizeof(VAR_17), VAR_18->subject_name);

   FUNC_5("depth = %u, subject = %S\n", VAR_11, VAR_17);

   if (VAR_6 && FUNC_4(VAR_5, VAR_18) == 0 && FUNC_15(VAR_10, VAR_18) == 0)
   {
    wchar_t VAR_19[VAR_1];
    char VAR_20[128];
    wchar_t VAR_21[128];
    UCHAR VAR_22[VAR_3];
    wchar_t VAR_23[VAR_2];
    BUF *VAR_24;

    FUNC_14(VAR_18, VAR_22, 1);
    FUNC_1(VAR_20, sizeof(VAR_20), VAR_22, VAR_3);
    FUNC_20(VAR_21, sizeof(VAR_21), VAR_20);

    FUNC_24(VAR_19, sizeof(VAR_19), VAR_0);
    FUNC_23(VAR_19, sizeof(VAR_19), VAR_21);
    FUNC_23(VAR_19, sizeof(VAR_19), L".cer");

    FUNC_3(VAR_23, sizeof(VAR_23), VAR_13, VAR_19);

    VAR_24 = FUNC_25(VAR_18, 1);

    FUNC_6(VAR_24, VAR_23);

    FUNC_9(VAR_24);
   }

   if (VAR_18->root_cert)
   {
    if (VAR_7 != ((void*)0))
    {
     *VAR_7 = FUNC_2(VAR_18);
    }
   }
  }
 }

 FUNC_10(VAR_9);

 FUNC_10(VAR_10);

 return VAR_8;
}
