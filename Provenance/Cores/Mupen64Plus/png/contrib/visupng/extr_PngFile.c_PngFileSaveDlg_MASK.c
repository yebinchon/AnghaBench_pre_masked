
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; void* lpstrFileTitle; void* lpstrFile; int hwndOwner; } ;
typedef void* PTSTR ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

BOOL FUNC_1 (HWND VAR_3, PTSTR VAR_4, PTSTR VAR_5)
{
    VAR_2.hwndOwner = VAR_3;
    VAR_2.lpstrFile = VAR_4;
    VAR_2.lpstrFileTitle = VAR_5;
    VAR_2.Flags = VAR_0 | VAR_1;

    return FUNC_0 (&VAR_2);
}
