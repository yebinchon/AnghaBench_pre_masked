
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD_PTR ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int) ;

void FUNC_3 (DWORD_PTR VAR_1, BYTE VAR_2)
{
    BYTE VAR_3;

    FUNC_0(VAR_2 < 4);


    FUNC_1(VAR_1 + VAR_0, &VAR_3);
    VAR_3 = (VAR_3 & 0xFC) | VAR_2;
    FUNC_2(VAR_1 + VAR_0, VAR_3);
}
