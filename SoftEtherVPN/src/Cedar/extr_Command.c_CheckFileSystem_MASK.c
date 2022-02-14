
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char wchar_t ;
typedef int filename ;
typedef int exe_dir ;
typedef int exe ;
typedef size_t UINT ;
typedef size_t UCHAR ;
struct TYPE_10__ {size_t Size; scalar_t__ Buf; } ;
struct TYPE_9__ {size_t NumFiles; TYPE_1__** File; } ;
struct TYPE_8__ {int FileName; } ;
typedef int IO ;
typedef TYPE_2__ DIRLIST ;
typedef TYPE_3__ BUF ;


 int FUNC_0 (char*,int,int ,char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 TYPE_2__* FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,size_t*,size_t) ;
 int FUNC_9 (size_t*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,int) ;
 int VAR_0 ;
 size_t* FUNC_14 (size_t) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;
 TYPE_3__* FUNC_17 (char*) ;

bool FUNC_18()
{
 bool VAR_1 = 0;
 char VAR_2[VAR_0];
 char VAR_3[VAR_0];
 DIRLIST *VAR_4;
 UINT VAR_5;

 FUNC_13(VAR_2, sizeof(VAR_2));
 FUNC_12(VAR_3, sizeof(VAR_3));

 VAR_4 = FUNC_2(VAR_3);
 for (VAR_5 = 0;VAR_5 < VAR_4->NumFiles;VAR_5++)
 {
  if (FUNC_1(VAR_2, VAR_4->File[VAR_5]->FileName))
  {
   VAR_1 = 1;
   break;
  }
 }
 FUNC_11(VAR_4);

 if (VAR_1 == 0)
 {
  FUNC_16("EnumDir Failed.\n");
  return 0;
 }
 else
 {
  UINT VAR_6 = 1234567;
  UCHAR *VAR_7;
  IO *VAR_8;

  wchar_t *VAR_9 = L"/tmp/vpn_checker_tmp";





  VAR_7 = FUNC_14(VAR_6);
  for (VAR_5 = 0;VAR_5 < VAR_6;VAR_5++)
  {
   VAR_7[VAR_5] = VAR_5 % 256;
  }

  VAR_8 = FUNC_4(VAR_9);
  if (VAR_8 == ((void*)0))
  {
   FUNC_16("FileCreate Failed.\n");
   FUNC_9(VAR_7);
   return 0;
  }
  else
  {
   FUNC_8(VAR_8, VAR_7, VAR_6);
   FUNC_9(VAR_7);
   FUNC_3(VAR_8);

   VAR_8 = FUNC_6(VAR_9, 0);
   if (FUNC_7(VAR_8) != 1234567)
   {
    FUNC_16("FileSize Failed.\n");
    FUNC_3(VAR_8);
    return 0;
   }
   else
   {
    BUF *VAR_10;

    FUNC_3(VAR_8);
    VAR_10 = FUNC_17(VAR_9);
    if(VAR_10 == ((void*)0))
    {
     return 0;
    }

    for (VAR_5 = 0;VAR_5 < VAR_10->Size;VAR_5++)
    {
     UCHAR VAR_11 = ((UCHAR *)VAR_10->Buf)[VAR_5];

     if (VAR_11 != (VAR_5 % 256))
     {
      FUNC_16("FileToBuf Failed.\n");
      FUNC_10(VAR_10);
      return 0;
     }
    }

    FUNC_10(VAR_10);
   }
  }

  FUNC_5(VAR_9);
 }

 return VAR_1;
}
