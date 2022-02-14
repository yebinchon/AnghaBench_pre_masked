
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__ DWORD_PTR ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

BYTE FUNC_3(DWORD_PTR VAR_13, BYTE VAR_14)
{
    WORD VAR_15, VAR_16;
    BYTE VAR_17;
    BYTE VAR_18;
    BYTE VAR_19;

    VAR_18 = 0xFF;
    FUNC_1(VAR_13 + VAR_6, &VAR_19);

    FUNC_2(VAR_13 + VAR_6, (VAR_19 & (~VAR_2)));
    for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
        FUNC_2(VAR_13 + VAR_10, VAR_1);
        FUNC_2(VAR_13 + VAR_9, VAR_14);


        FUNC_2(VAR_13 + VAR_7, VAR_4);

        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
            FUNC_1(VAR_13 + VAR_7, &VAR_17);
            if (VAR_17 & (VAR_3 | VAR_5))
                break;
            FUNC_0(VAR_0);
        }
        if ((VAR_15 < VAR_12) &&
             ( !(VAR_17 & VAR_5))) {
            break;
        }
    }
    FUNC_1(VAR_13 + VAR_8, &VAR_18);
    FUNC_2(VAR_13 + VAR_6, VAR_19);
    return VAR_18;
}
