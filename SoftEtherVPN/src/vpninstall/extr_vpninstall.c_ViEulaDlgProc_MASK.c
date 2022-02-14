
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int WPARAM ;
typedef int UINT ;
typedef int LPARAM ;
typedef int * HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int,int ,int ,int ) ;
 int FUNC_6 (int *,int,int *) ;



 int * FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_11 ;

UINT FUNC_8(HWND VAR_12, UINT VAR_13, WPARAM VAR_14, LPARAM VAR_15, void *VAR_16)
{
 wchar_t *VAR_17 = (wchar_t *)VAR_16;

 if (VAR_12 == ((void*)0))
 {
  return 0;
 }

 switch (VAR_13)
 {
 case 128:
  FUNC_6(VAR_12, 0, FUNC_7(VAR_2+VAR_11));
  FUNC_6(VAR_12, VAR_9, FUNC_7(VAR_5+VAR_11));
  FUNC_6(VAR_12, VAR_8, FUNC_7(VAR_6+VAR_11));
  FUNC_6(VAR_12, VAR_10, FUNC_7(VAR_7+VAR_11));
  FUNC_6(VAR_12, 131, FUNC_7(VAR_3+VAR_11));
  FUNC_6(VAR_12, 132, FUNC_7(VAR_4+VAR_11));

  FUNC_2(VAR_12, VAR_8, 0, 1);
  FUNC_6(VAR_12, VAR_1, VAR_17);
  FUNC_4(VAR_12, VAR_1);
  FUNC_5(VAR_12, VAR_1, VAR_0, 0, 0);
  FUNC_0(VAR_12);
  break;

 case 129:
  switch (VAR_14)
  {
  case 131:
   FUNC_3(VAR_12, 1);
   break;

  case 132:
   FUNC_1(VAR_12);
   break;
  }
  break;

 case 130:
  FUNC_3(VAR_12, 0);
  break;
 }

 return 0;
}
