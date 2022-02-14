
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

void FUNC_4 (DWORD_PTR VAR_4, DWORD VAR_5)
{
WORD VAR_6;
BYTE VAR_7;
BYTE VAR_8;

    FUNC_1(VAR_4 + VAR_1, &VAR_8);
    if (VAR_8 & VAR_0) {
        FUNC_2(VAR_4 + VAR_1+2, VAR_0);
    }
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        FUNC_1(VAR_4 + VAR_1, &VAR_7);
        if ( !(VAR_7 & VAR_0))
            break;
    }
    if (VAR_6 == VAR_3) {
        FUNC_0(0x25);
    }
    FUNC_3(VAR_4 + VAR_2, VAR_5);
    if (VAR_8 & VAR_0) {
        FUNC_2(VAR_4 + VAR_1, VAR_0);
    }
}
