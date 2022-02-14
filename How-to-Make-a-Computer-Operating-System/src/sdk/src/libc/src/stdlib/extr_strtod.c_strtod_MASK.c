
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

double FUNC_1( const char* VAR_0, char** VAR_1 ) {
    register const char* VAR_2 = VAR_0;
    register long double VAR_3 = 0.L;
    int VAR_4 = +1;
    long double VAR_5;
    unsigned int VAR_6;

    while ( FUNC_0(*VAR_2) ) {
        VAR_2++;
    }

    switch ( *VAR_2 ) {
        case '-': VAR_4 = -1;
        case '+': VAR_2++;
        default : break;
    }

    while ( (unsigned int)(*VAR_2 - '0') < 10u )
        VAR_3 = VAR_3*10 + (*VAR_2++ - '0');

    if ( *VAR_2 == '.' ) {
        VAR_5 = 1.;

        VAR_2++;
        while ( (unsigned int)(*VAR_2 - '0') < 10u ) {
            VAR_5 *= 0.1;
            VAR_3 += (*VAR_2++ - '0') * VAR_5;
        }
    }

    if ( (*VAR_2 | 32) == 'e' ) {
        VAR_6 = 0;
        VAR_5 = 10.L;

        switch (*++VAR_2) {
        case '-': VAR_5 = 0.1;
        case '+': VAR_2++;
                  break;
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                  break;
        default : VAR_3 = 0.L;
                  VAR_2 = VAR_0;
                  goto done;
        }

        while ( (unsigned int)(*VAR_2 - '0') < 10u )
            VAR_6 = 10 * VAR_6 + (*VAR_2++ - '0');

        while ( 1 ) {
            if ( VAR_6 & 1 )
                VAR_3 *= VAR_5;
            if ( (VAR_6 >>= 1) == 0 )
                break;
            VAR_5 *= VAR_5;
        }
    }

done:
    if ( VAR_1 != ((void*)0) )
        *VAR_1 = (char*)VAR_2;

    return VAR_3 * VAR_4;
}
