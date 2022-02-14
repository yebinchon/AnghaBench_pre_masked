
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD_PTR ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (scalar_t__,int) ;

BOOL FUNC_4 (DWORD_PTR VAR_8)
{
    BYTE VAR_9;
    int VAR_10;

    BYTE VAR_11;

    FUNC_2(VAR_8 + VAR_5, &VAR_11);

    FUNC_3(VAR_8 + VAR_5, (VAR_11 | VAR_3));

    FUNC_0(VAR_8, VAR_6, VAR_4);


    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        FUNC_1(VAR_8, VAR_0);
        FUNC_2(VAR_8 + VAR_6, &VAR_9);
        if ( !(VAR_9 & VAR_4))
            break;
    }

    FUNC_3(VAR_8 + VAR_5, VAR_11);

    if (VAR_10 == VAR_1)
        return VAR_2;
    return VAR_7;
}
