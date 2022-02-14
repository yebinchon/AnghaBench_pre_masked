
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int* PBYTE ;
typedef int DWORD ;
typedef size_t BYTE ;


 int* VAR_0 ;

DWORD FUNC_0 (PBYTE VAR_1, UINT VAR_2, DWORD VAR_3)
{
    DWORD VAR_4;

    VAR_4 = VAR_3;
    while (VAR_2--) {
        VAR_4 = VAR_0[(BYTE)((VAR_4 ^ (*VAR_1)) & 0xFF)] ^ (VAR_4 >> 8);
        VAR_1++;
    }

    return VAR_4;
}
