
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PBYTE ;
typedef int DWORD_PTR ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1 (DWORD_PTR VAR_1, PBYTE VAR_2)
{
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        *VAR_2 = FUNC_0(VAR_1,(BYTE) VAR_3);
        VAR_2++;
    }
}
