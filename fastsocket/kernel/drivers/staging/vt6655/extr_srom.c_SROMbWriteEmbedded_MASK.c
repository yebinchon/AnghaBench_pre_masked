
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__ DWORD_PTR ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

BOOL FUNC_3 (DWORD_PTR VAR_15, BYTE VAR_16, BYTE VAR_17)
{
    WORD VAR_18, VAR_19;
    BYTE VAR_20;

    BYTE VAR_21;

    FUNC_1(VAR_15 + VAR_7, &VAR_21);

    FUNC_2(VAR_15 + VAR_7, (VAR_21 & (~VAR_3)));
    for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++) {
        FUNC_2(VAR_15 + VAR_11, VAR_1);
        FUNC_2(VAR_15 + VAR_10, VAR_16);
        FUNC_2(VAR_15 + VAR_9, VAR_17);


        FUNC_2(VAR_15 + VAR_8, VAR_5);

        for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
            FUNC_1(VAR_15 + VAR_8, &VAR_20);
            if (VAR_20 & (VAR_4 | VAR_6))
                break;
            FUNC_0(VAR_0);
        }

        if ((VAR_18 < VAR_14) &&
             ( !(VAR_20 & VAR_6))) {
            break;
        }
    }
    if (VAR_19 == VAR_13) {
        FUNC_2(VAR_15 + VAR_7, VAR_21);
        return VAR_2;
    }
    FUNC_2(VAR_15 + VAR_7, VAR_21);
    return VAR_12;
}
