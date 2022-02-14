
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 int FUNC_0 (unsigned int) ;
 long FUNC_1 (char*,char**,int ) ;

int FUNC_2( const char* VAR_0, struct in_addr* VAR_1 ) {
    int VAR_2;
    unsigned int VAR_3 = 0;
    char* VAR_4= ( char* )VAR_0;

    for ( VAR_2 = 24; ; ) {
        long VAR_5;

        VAR_5 = FUNC_1( VAR_4, &VAR_4, 0 );

        if ( *VAR_4 == 0 ) {
            VAR_3 |= VAR_5;

            break;
        } else if ( *VAR_4 == '.' ) {
            if ( VAR_5 > 255 ) {
                return 0;
            }

            VAR_3 |= ( VAR_5 << VAR_2 );

            if ( VAR_2 > 0 ) {
                VAR_2 -= 8;
            }

            ++VAR_4;

            continue;
        }

        return 0;
    }

    VAR_1->s_addr = FUNC_0( VAR_3 );

    return 1;
}
