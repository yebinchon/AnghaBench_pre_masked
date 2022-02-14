
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int name ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int *,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;





 int VAR_0 ;
 int FUNC_8 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int *,int ) ;
 int * FUNC_14 (scalar_t__) ;

void FUNC_15(BUF *VAR_1, FOLDER *VAR_2)
{
 char VAR_3[VAR_0];
 FOLDER *VAR_4;
 UINT VAR_5, VAR_6;
 UINT VAR_7;
 UCHAR *VAR_8;
 wchar_t *VAR_9;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_11(VAR_1, VAR_3, sizeof(VAR_3));
 VAR_4 = FUNC_6(VAR_2, VAR_3);


 VAR_5 = FUNC_9(VAR_1);
 for (VAR_6 = 0;VAR_6 < VAR_5;VAR_6++)
 {

  FUNC_15(VAR_1, VAR_4);
 }


 VAR_5 = FUNC_9(VAR_1);
 for (VAR_6 = 0;VAR_6 < VAR_5;VAR_6++)
 {
  UINT VAR_10;


  FUNC_11(VAR_1, VAR_3, sizeof(VAR_3));

  VAR_10 = FUNC_9(VAR_1);

  switch (VAR_10)
  {
  case 130:

   FUNC_3(VAR_4, VAR_3, FUNC_9(VAR_1));
   break;

  case 129:

   FUNC_4(VAR_4, VAR_3, FUNC_10(VAR_1));
   break;

  case 131:

   VAR_7 = FUNC_9(VAR_1);
   VAR_8 = FUNC_14(VAR_7);
   FUNC_8(VAR_1, VAR_8, VAR_7);
   FUNC_2(VAR_4, VAR_3, VAR_8, VAR_7);
   FUNC_7(VAR_8);
   break;

  case 128:

   VAR_7 = FUNC_9(VAR_1);
   VAR_8 = FUNC_14(VAR_7 + 1);
   FUNC_8(VAR_1, VAR_8, VAR_7);
   VAR_9 = FUNC_14(FUNC_0(VAR_8, FUNC_12(VAR_8)) + 4);
   FUNC_13(VAR_9, 0, VAR_8, FUNC_12(VAR_8));
   FUNC_5(VAR_4, VAR_3, VAR_9);
   FUNC_7(VAR_9);
   FUNC_7(VAR_8);
   break;

  case 132:

   FUNC_1(VAR_4, VAR_3, FUNC_9(VAR_1) == 0 ? 0 : 1);
   break;
  }
 }
}
