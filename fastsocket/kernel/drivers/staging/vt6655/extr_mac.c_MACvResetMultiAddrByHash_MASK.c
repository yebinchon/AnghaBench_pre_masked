
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int DWORD_PTR ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3 (DWORD_PTR VAR_0, BYTE VAR_1)
{
    UINT VAR_2;
    BYTE VAR_3;
    BYTE VAR_4;


    VAR_2 = VAR_1 / 8;
    FUNC_0(VAR_2 < 8);

    VAR_3 = 1;
    VAR_3 <<= (VAR_1 % 8);

    VAR_4 = FUNC_1(VAR_0, VAR_2);
    FUNC_2(VAR_0, VAR_2, (BYTE)(VAR_4 & (~VAR_3)));
}
