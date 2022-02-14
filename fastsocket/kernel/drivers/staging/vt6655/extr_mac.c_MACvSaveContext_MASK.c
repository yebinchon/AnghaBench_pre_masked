
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD_PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3 (DWORD_PTR VAR_2, PBYTE VAR_3)
{
    int VAR_4;


    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        FUNC_2((VAR_2 + VAR_4), (VAR_3 + VAR_4));
    }

    FUNC_1(VAR_2);


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        FUNC_2((VAR_2 + VAR_4), (VAR_3 + VAR_0 + VAR_4));
    }

    FUNC_0(VAR_2);
}
