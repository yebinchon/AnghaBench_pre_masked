
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int WPARAM ;
struct TYPE_5__ {int WindowsShutdowning; } ;
typedef TYPE_1__ VI_INSTALL_DLG ;
typedef int UINT ;
typedef scalar_t__ LPARAM ;
typedef int * HWND ;



 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
UINT FUNC_8(HWND VAR_1, UINT VAR_2, WPARAM VAR_3, LPARAM VAR_4, void *VAR_5)
{
 VI_INSTALL_DLG *VAR_6 = (VI_INSTALL_DLG *)VAR_5;
 UINT VAR_7;
 wchar_t *VAR_8;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 switch (VAR_2)
 {
 case 134:
  FUNC_5(VAR_1, VAR_5);
  break;

 case 132:
  switch (VAR_3)
  {
  case 1:
   FUNC_0(VAR_1, 1);
   FUNC_6(VAR_1, VAR_6);
   break;
  }
  break;

 case 129:

  VAR_7 = (UINT)VAR_4;
  FUNC_2(VAR_1, VAR_0, FUNC_1(VAR_7, 0, 100));
  break;

 case 128:

  VAR_8 = (wchar_t *)VAR_4;
  FUNC_3(VAR_1, (UINT)VAR_3, VAR_8);
  break;

 case 131:

  FUNC_4(VAR_1, VAR_6);
  break;

 case 130:

  FUNC_7(VAR_1, VAR_6);
  break;

 case 135:
  switch (VAR_3)
  {
  case 137:
   FUNC_4(VAR_1, VAR_6);
   break;
  }
  break;

 case 133:
  VAR_6->WindowsShutdowning = 1;
  break;

 case 136:
  break;
 }

 return 0;
}
