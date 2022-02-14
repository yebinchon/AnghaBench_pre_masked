
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (char*,char*) ;

char * FUNC_3(double VAR_0, signed char VAR_1, unsigned char VAR_2, char *VAR_3) {
    bool VAR_4 = 0;

    if (FUNC_1(VAR_0)) {
        FUNC_2(VAR_3, "nan");
        return VAR_3;
    }
    if (FUNC_0(VAR_0)) {
        FUNC_2(VAR_3, "inf");
        return VAR_3;
    }

    char* VAR_5 = VAR_3;

    int VAR_6 = VAR_1;
    if (VAR_2 > 0) {
        VAR_6 -= (VAR_2+1);
    }


    if (VAR_0 < 0.0) {
        VAR_4 = 1;
        VAR_6--;
        VAR_0 = -VAR_0;
    }



    double VAR_7 = 2.0;
    for (uint8_t VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
        VAR_7 *= 10.0;
    VAR_7 = 1.0 / VAR_7;

    VAR_0 += VAR_7;


    double VAR_9 = 1.0;
    int VAR_10 = 1;
    while (VAR_0 >= 10.0 * VAR_9) {
        VAR_9 *= 10.0;
        VAR_10++;
    }

    VAR_0 /= VAR_9;
    VAR_6 -= VAR_10;


    while (VAR_6-- > 0) {
        *VAR_5++ = ' ';
    }


    if (VAR_4) *VAR_5++ = '-';


    VAR_10 += VAR_2;
    int8_t VAR_11 = 0;
    while (VAR_10-- > 0) {
        VAR_11 = (int8_t)VAR_0;
        if (VAR_11 > 9) VAR_11 = 9;
        *VAR_5++ = (char)('0' | VAR_11);
        if ((VAR_10 == VAR_2) && (VAR_2 > 0)) {
            *VAR_5++ = '.';
        }
        VAR_0 -= VAR_11;
        VAR_0 *= 10.0;
    }


    *VAR_5 = 0;
    return VAR_3;
}
