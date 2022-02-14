
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int VALUE ;
typedef int UINT ;
typedef char BYTE ;
typedef int BUF ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 int * FUNC_3 (void*,int) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (int) ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (char*) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,int) ;





 char* FUNC_12 (int ) ;

VALUE *FUNC_13(BUF *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 BYTE *VAR_4;
 void *VAR_5;
 char *VAR_6;
 wchar_t *VAR_7;
 UINT VAR_8;
 UINT VAR_9;
 UINT VAR_10;
 VALUE *VAR_11 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 switch (VAR_2)
 {
 case 131:
  VAR_11 = FUNC_5(FUNC_9(VAR_1));
  break;
 case 130:
  VAR_11 = FUNC_4(FUNC_10(VAR_1));
  break;
 case 132:
  VAR_9 = FUNC_9(VAR_1);
  if (VAR_9 > VAR_0)
  {

   break;
  }
  VAR_5 = FUNC_2(VAR_9);
  if (FUNC_8(VAR_1, VAR_5, VAR_9) != VAR_9)
  {

   FUNC_1(VAR_5);
   break;
  }
  VAR_11 = FUNC_3(VAR_5, VAR_9);
  FUNC_1(VAR_5);
  break;
 case 129:
  VAR_3 = FUNC_9(VAR_1);
  if (VAR_3 > (VAR_0 - 1))
  {

   break;
  }
  VAR_6 = FUNC_2(VAR_3 + 1);

  if (FUNC_8(VAR_1, VAR_6, VAR_3) != VAR_3)
  {

   FUNC_1(VAR_6);
   break;
  }
  VAR_6[VAR_3] = 0;
  VAR_11 = FUNC_6(VAR_6);
  FUNC_1(VAR_6);
  break;
 case 128:
  VAR_10 = FUNC_9(VAR_1);
  if (VAR_10 > VAR_0)
  {

   break;
  }

  VAR_4 = FUNC_12(VAR_10 + 1);
  if (FUNC_8(VAR_1, VAR_4, VAR_10) != VAR_10)
  {

   FUNC_1(VAR_4);
   break;
  }

  VAR_8 = FUNC_0(VAR_4, VAR_10);
  if (VAR_8 == 0)
  {
   FUNC_1(VAR_4);
   break;
  }
  VAR_7 = FUNC_2(VAR_8);
  FUNC_11(VAR_7, VAR_8, VAR_4, VAR_10);
  FUNC_1(VAR_4);
  VAR_11 = FUNC_7(VAR_7);
  FUNC_1(VAR_7);
  break;
 }

 return VAR_11;
}
