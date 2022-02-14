
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int*) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_4 ;

BOOL FUNC_2 (DWORD_PTR VAR_5, DWORD VAR_6)
{
    WORD VAR_7;
    DWORD VAR_8;

    FUNC_1(VAR_5 + VAR_2, VAR_6);


    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        FUNC_0(VAR_5 + VAR_2, &VAR_8);
        if (VAR_8 & VAR_1)
            break;
    }

    if (VAR_7 == VAR_4) {

        return VAR_0;
    }
    return VAR_3;
}
