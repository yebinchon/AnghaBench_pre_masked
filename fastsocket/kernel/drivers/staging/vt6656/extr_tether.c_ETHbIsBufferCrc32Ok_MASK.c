
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * PDWORD ;
typedef int PBYTE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

BOOL FUNC_2 (PBYTE VAR_2, UINT VAR_3)
{
    DWORD VAR_4;

    VAR_4 = FUNC_0(VAR_2, VAR_3 - 4);
    if (FUNC_1(*((PDWORD)(VAR_2 + VAR_3 - 4))) != VAR_4) {
        return VAR_0;
    }
    return VAR_1;
}
