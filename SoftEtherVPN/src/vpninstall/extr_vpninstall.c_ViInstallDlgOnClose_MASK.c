
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DialogCanceling; scalar_t__ NoClose; } ;
typedef TYPE_1__ VI_INSTALL_DLG ;
typedef int * HWND ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(HWND VAR_1, VI_INSTALL_DLG *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->DialogCanceling)
 {
  return;
 }
 if (VAR_2->NoClose)
 {
  return;
 }

 VAR_2->DialogCanceling = 1;


 FUNC_0(VAR_1, VAR_0);


 FUNC_2(VAR_2);


 FUNC_1(VAR_1, 0);
}
