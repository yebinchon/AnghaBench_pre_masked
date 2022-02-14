
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int UINT ;
typedef scalar_t__ DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;

BOOL FUNC_3 (DWORD_PTR VAR_17, BYTE VAR_18, UINT VAR_19)
{
    int VAR_20;
    BYTE VAR_21 = 0;
    BYTE VAR_22 = 0;

    FUNC_2(VAR_17 + VAR_4, 0);
    switch (VAR_18) {
        case 131:
        case 129:

            if (VAR_19 > VAR_2)
                return VAR_3;

            VAR_21 = VAR_0 + 2;
            VAR_22 = 0;
            if (VAR_21 > (VAR_5 - VAR_22)) {
                return VAR_3;
            }

            for (VAR_20 = 0; VAR_20 < VAR_0; VAR_20++ ) {
                FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_11[VAR_20]);
            }
            FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_9[VAR_19-1]);
            VAR_20 ++;
            FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_10[VAR_19-1]);
            break;



        case 130:
            VAR_21 = VAR_1 + 3;
            VAR_22 = 0;
            if (VAR_21 > (VAR_5 - VAR_22)) {
                return VAR_3;
            }

            if (VAR_19 <= VAR_2)
            {
                for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++ ) {
                    FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_15[VAR_20]);
                }
            }
            else
            {
                for (VAR_20 = 0; VAR_20 < VAR_1; VAR_20++ ) {
                    FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_16[VAR_20]);
                }
            }

            FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_12[VAR_19-1]);
            VAR_20 ++;
            FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_13[VAR_19-1]);
            VAR_20 ++;
            FUNC_0(VAR_17, (WORD)(VAR_6 + VAR_20), VAR_14[VAR_19-1]);
            break;


        case 128 :
            return VAR_8;
            break;

        default:
            return VAR_3;
            break;
    }

    FUNC_0(VAR_17, VAR_7, (DWORD)FUNC_1(VAR_22, VAR_21));

    return VAR_8;
}
