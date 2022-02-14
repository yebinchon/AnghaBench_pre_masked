
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int newfile ;
typedef int header ;
typedef int hash1 ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_9__ {int Size; scalar_t__ Buf; } ;
typedef int IO ;
typedef int FOLDER ;
typedef TYPE_1__ BUF ;


 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,void*,int) ;
 scalar_t__ FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_1 ;
 void* FUNC_11 (int) ;
 TYPE_1__* FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int *,int) ;
 int VAR_2 ;
 int FUNC_14 (TYPE_1__*,int,int ) ;
 int FUNC_15 (int *,int *,int) ;
 int * VAR_3 ;
 int FUNC_16 (int *,int,char*,int *) ;
 int FUNC_17 (TYPE_1__*,void*,int) ;

FOLDER *FUNC_18(wchar_t *VAR_4)
{
 wchar_t VAR_5[VAR_1];
 wchar_t VAR_6[VAR_1];
 BUF *VAR_7;
 IO *VAR_8;
 UINT VAR_9;
 void *VAR_10;
 FOLDER *VAR_11;
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 UCHAR VAR_14[8];
 bool VAR_15 = 0;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_16(VAR_6, sizeof(VAR_6), L"%s.new", VAR_4);

 FUNC_16(VAR_5, sizeof(VAR_5), L"%s.log", VAR_4);


 VAR_8 = FUNC_5(VAR_6, 0);
 if (VAR_8 == ((void*)0))
 {
  UINT VAR_16;

  VAR_8 = FUNC_5(VAR_5, 0);

  if (VAR_8 != ((void*)0))
  {

   VAR_16 = FUNC_8(VAR_8);
   if (VAR_16 >= 2)
   {
    char VAR_17;

    if (FUNC_7(VAR_8, VAR_0, VAR_16 - 1) && FUNC_6(VAR_8, &VAR_17, 1) && VAR_17 == 0x1A && FUNC_7(VAR_8, VAR_0, 0))
    {

     VAR_15 = 1;
    }
    else
    {

     FUNC_3(VAR_8);
     VAR_8 = ((void*)0);
    }
   }
  }
 }
 else
 {
  VAR_12 = 1;
 }
 if (VAR_8 == ((void*)0))
 {

  VAR_8 = FUNC_5(VAR_4, 0);
 }
 else
 {

  if (FUNC_8(VAR_8) == 0)
  {
   FUNC_3(VAR_8);
   VAR_8 = FUNC_5(VAR_4, 0);
  }
 }
 if (VAR_8 == ((void*)0))
 {

  return ((void*)0);
 }


 VAR_9 = FUNC_8(VAR_8);
 if (VAR_15)
 {

  VAR_9 -= 1;
 }
 VAR_10 = FUNC_11(VAR_9);
 FUNC_6(VAR_8, VAR_10, VAR_9);
 VAR_7 = FUNC_12();
 FUNC_17(VAR_7, VAR_10, VAR_9);
 FUNC_14(VAR_7, 0, 0);


 FUNC_3(VAR_8);

 if (VAR_12)
 {

  FUNC_4(VAR_6);
 }


 FUNC_13(VAR_7, VAR_14, sizeof(VAR_14));
 if (FUNC_2(VAR_14, VAR_3, 8) == 0)
 {
  UCHAR VAR_18[VAR_2], VAR_19[VAR_2];
  VAR_13 = 1;


  FUNC_13(VAR_7, VAR_18, sizeof(VAR_18));

  FUNC_15(VAR_19, ((UCHAR *)VAR_7->Buf) + 8 + VAR_2, VAR_7->Size - 8 - VAR_2);

  if (FUNC_2(VAR_18, VAR_19, VAR_2) != 0)
  {

   FUNC_10(VAR_7);
   return ((void*)0);
  }
 }

 FUNC_14(VAR_7, 0, 0);

 if (VAR_13)
 {
  FUNC_14(VAR_7, 8 + VAR_2, 0);
 }


 if (VAR_13 == 0)
 {

  VAR_11 = FUNC_1(VAR_7);
 }
 else
 {

  VAR_11 = FUNC_0(VAR_7);
 }


 FUNC_9(VAR_10);
 FUNC_10(VAR_7);

 FUNC_4(VAR_6);

 return VAR_11;
}
