
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_3; int right; int left; int bottom; int top; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(DWORD VAR_1, DWORD VAR_2,
                              int VAR_3, int VAR_4,
                              int* VAR_5, int* VAR_6)
{
    RECT VAR_7 = { 0, 0, VAR_3, VAR_4 };
    FUNC_0(&VAR_7, VAR_1, VAR_0, VAR_2);
    *VAR_5 = VAR_7.right - VAR_7.left;
    *VAR_6 = VAR_7.bottom - VAR_7.top;
}
