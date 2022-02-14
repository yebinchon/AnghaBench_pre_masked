
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long FUNC_0( const char* VAR_0 ) {
    long VAR_1 = 0;
    int VAR_2 = 0;

    while ( ( *VAR_0 == ' ' ) || ( ( unsigned int )( *VAR_0 - 9 ) < 5u ) ) {
        ++VAR_0;
    }

    switch ( *VAR_0 ) {
        case '-' : VAR_2 = -1;
        case '+' : ++VAR_0;
    }

    while ( ( unsigned int )( *VAR_0 - '0' ) < 10u ) {
        VAR_1 = VAR_1 * 10 + *VAR_0 - '0';
        ++VAR_0;
    }

    return VAR_2 ? -VAR_1 : VAR_1;
}
