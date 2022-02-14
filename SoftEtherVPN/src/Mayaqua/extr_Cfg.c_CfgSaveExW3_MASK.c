
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int OsType; } ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int LashHash; } ;
typedef int IO ;
typedef int FOLDER ;
typedef TYPE_1__ CFG_RW ;
typedef TYPE_2__ BUF ;


 TYPE_2__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_3__* FUNC_10 () ;
 int VAR_0 ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_1 ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,int,char*,int *) ;
 int FUNC_14 (int ,int) ;

bool FUNC_15(CFG_RW *VAR_2, FOLDER *VAR_3, wchar_t *VAR_4, UINT *VAR_5, bool VAR_6)
{
 wchar_t VAR_7[VAR_0];
 bool VAR_8 = !VAR_6;
 UCHAR VAR_9[VAR_1];
 BUF *VAR_10;
 IO *VAR_11;
 bool VAR_12 = 1;
 UINT VAR_13 = 0;

 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }
 if (VAR_5 == ((void*)0))
 {
  VAR_5 = &VAR_13;
 }


 VAR_10 = FUNC_0(VAR_3, VAR_8);
 if (VAR_10 == ((void*)0))
 {
  return 0;
 }

 FUNC_12(VAR_9, VAR_10->Buf, VAR_10->Size);


 if (VAR_2 != ((void*)0))
 {
  if (FUNC_1(VAR_9, VAR_2->LashHash, VAR_1) == 0)
  {

   VAR_12 = 0;
  }
  else
  {
   FUNC_2(VAR_2->LashHash, VAR_9, VAR_1);
  }
 }

 if (VAR_12 || FUNC_11(FUNC_10()->OsType))
 {

  FUNC_13(VAR_7, sizeof(VAR_7), L"%s.log", VAR_4);


  FUNC_4(VAR_4, VAR_7, 1);


  VAR_11 = FUNC_5(VAR_4);
  if (VAR_11 != ((void*)0))
  {
   if (FUNC_8(VAR_11, VAR_10->Buf, VAR_10->Size) == 0)
   {

    FUNC_3(VAR_11);
    FUNC_6(VAR_4);
    FUNC_7(VAR_7, VAR_4);

    if (VAR_2 != ((void*)0))
    {
     FUNC_14(VAR_2->LashHash, sizeof(VAR_2->LashHash));
    }
   }
   else
   {

    FUNC_3(VAR_11);


    FUNC_6(VAR_7);
   }
  }
  else
  {

   FUNC_7(VAR_7, VAR_4);

   if (VAR_2 != ((void*)0))
   {
    FUNC_14(VAR_2->LashHash, sizeof(VAR_2->LashHash));
   }
  }
 }

 *VAR_5 = VAR_10->Size;


 FUNC_9(VAR_10);

 return VAR_12;
}
