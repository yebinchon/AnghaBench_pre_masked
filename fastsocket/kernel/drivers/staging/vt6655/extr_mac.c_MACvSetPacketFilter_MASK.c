
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;

void FUNC_5 (DWORD_PTR VAR_14, WORD VAR_15)
{
    BYTE VAR_16;
    BYTE VAR_17 = 0;




    if (VAR_15 & VAR_4) {

        FUNC_1(VAR_14);
        FUNC_4(VAR_14 + VAR_0, 0L);
        FUNC_4(VAR_14 + VAR_0 + sizeof(DWORD), 0L);
        FUNC_0(VAR_14);
    }

    if (VAR_15 & (VAR_7 | VAR_2)) {

        FUNC_1(VAR_14);
        FUNC_4(VAR_14 + VAR_0, 0xFFFFFFFFL);
        FUNC_4(VAR_14 + VAR_0 + sizeof(DWORD), 0xFFFFFFFFL);
        FUNC_0(VAR_14);
    }

    if (VAR_15 & VAR_7) {

        VAR_17 |= (VAR_12 | VAR_13 | VAR_11 | VAR_8);

        VAR_17 &= ~VAR_9;
    }

    if (VAR_15 & (VAR_2 | VAR_6))
        VAR_17 |= VAR_11;

    if (VAR_15 & VAR_3)
        VAR_17 |= VAR_8;

    if (VAR_15 & VAR_5)
        VAR_17 |= VAR_10;

    FUNC_2(VAR_14 + VAR_1, &VAR_16);
    if (VAR_17 != VAR_16) {

        FUNC_3(VAR_14 + VAR_1, VAR_17);
    }
}
