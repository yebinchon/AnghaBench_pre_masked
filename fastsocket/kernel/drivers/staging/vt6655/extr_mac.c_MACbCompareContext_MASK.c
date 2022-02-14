
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* PDWORD ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;

BOOL FUNC_1 (DWORD_PTR VAR_6, PBYTE VAR_7)
{
    DWORD VAR_8;





    FUNC_0(VAR_6 + VAR_4, &VAR_8);
    if (VAR_8 != *(PDWORD)(VAR_7 + VAR_4)) {
        return VAR_0;
    }

    FUNC_0(VAR_6 + VAR_1, &VAR_8);
    if (VAR_8 != *(PDWORD)(VAR_7 + VAR_1)) {
        return VAR_0;
    }

    FUNC_0(VAR_6 + VAR_2, &VAR_8);
    if (VAR_8 != *(PDWORD)(VAR_7 + VAR_2)) {
        return VAR_0;
    }

    FUNC_0(VAR_6 + VAR_3, &VAR_8);
    if (VAR_8 != *(PDWORD)(VAR_7 + VAR_3)) {
        return VAR_0;
    }


    return VAR_5;
}
