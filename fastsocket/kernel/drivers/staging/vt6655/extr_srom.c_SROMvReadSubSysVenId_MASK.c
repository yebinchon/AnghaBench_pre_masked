
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PDWORD ;
typedef int * PBYTE ;
typedef int DWORD_PTR ;


 int FUNC_0 (int ,int) ;

void FUNC_1 (DWORD_PTR VAR_0, PDWORD VAR_1)
{
    PBYTE VAR_2;

    VAR_2 = (PBYTE)VAR_1;

    *VAR_2 = FUNC_0(VAR_0, 6);
    *(VAR_2+1) = FUNC_0(VAR_0, 7);

    *(VAR_2+2) = FUNC_0(VAR_0, 8);
    *(VAR_2+3) = FUNC_0(VAR_0, 9);
}
