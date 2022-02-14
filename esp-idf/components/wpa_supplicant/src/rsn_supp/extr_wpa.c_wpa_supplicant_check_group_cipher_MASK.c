
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;

int FUNC_2(int VAR_5,
                         int VAR_6, int VAR_7,
                         int *VAR_8,
                         enum wpa_alg *VAR_9)
{
    int VAR_10 = 0;

    switch (VAR_5) {
    case 131:
        if (VAR_6 != 16 || VAR_7 < 16) {
            VAR_10 = -1;
            break;
        }
        *VAR_8 = 6;
        *VAR_9 = VAR_1;
        break;
    case 130:
        if (VAR_6 != 32 || VAR_7 < 32) {
            VAR_10 = -1;
            break;
        }
        *VAR_8 = 6;
        *VAR_9 = VAR_2;
        break;
    case 129:
        if (VAR_6 != 13 || VAR_7 < 13) {
            VAR_10 = -1;
            break;
        }
        *VAR_8 = 0;
        *VAR_9 = VAR_3;
        break;
    case 128:
        if (VAR_6 != 5 || VAR_7 < 5) {
            VAR_10 = -1;
            break;
        }
        *VAR_8 = 0;
        *VAR_9 = VAR_4;
        break;
    default:




        return -1;
    }

    if (VAR_10 < 0 ) {





    }

    return VAR_10;
}
