
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int split_state_t ;


 int FUNC_0 () ;


 int VAR_0 ;




size_t FUNC_1(char *VAR_1, char **VAR_2, size_t VAR_3)
{
    const int VAR_4 = '"';
    const int VAR_5 = '\\';
    const int VAR_6 = ' ';
    split_state_t VAR_7 = 128;
    int VAR_8 = 0;
    char *VAR_9 = VAR_1;
    char *VAR_10 = VAR_1;
    for (char *VAR_11 = VAR_1; VAR_8 < VAR_3 - 1; ++VAR_11) {
        int VAR_12 = (unsigned char) *VAR_11;
        if (VAR_12 == 0) {
            break;
        }
        int VAR_13 = -1;

        switch (VAR_7) {
        case 128:
            if (VAR_12 == VAR_6) {

            } else if (VAR_12 == VAR_4) {
                VAR_9 = VAR_10;
                VAR_7 = 130;
            } else if (VAR_12 == VAR_5) {
                VAR_9 = VAR_10;
                VAR_7 = 131;
            } else {
                VAR_9 = VAR_10;
                VAR_7 = 132;
                VAR_13 = VAR_12;
            }
            break;

        case 130:
            if (VAR_12 == VAR_4) {
                FUNC_0();
            } else if (VAR_12 == VAR_5) {
                VAR_7 = 129;
            } else {
                VAR_13 = VAR_12;
            }
            break;

        case 131:
        case 129:
            if (VAR_12 == VAR_5 || VAR_12 == VAR_4 || VAR_12 == VAR_6) {
                VAR_13 = VAR_12;
            } else {

            }
            VAR_7 = (split_state_t) (VAR_7 & (~VAR_0));
            break;

        case 132:
            if (VAR_12 == VAR_6) {
                FUNC_0();
            } else if (VAR_12 == VAR_5) {
                VAR_7 = 131;
            } else {
                VAR_13 = VAR_12;
            }
            break;
        }

        if (VAR_13 >= 0) {
            *VAR_10 = VAR_13;
            ++VAR_10;
        }
    }

    *VAR_10 = 0;

    if (VAR_7 != 128 && VAR_8 < VAR_3 - 1) {
        VAR_2[VAR_8++] = VAR_9;
    }

    VAR_2[VAR_8] = ((void*)0);

    return VAR_8;
}
