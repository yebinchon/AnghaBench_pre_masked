
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int txt ;
typedef int str ;
struct TYPE_6__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
struct TYPE_5__ {int * f_dbg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,int,char const*,int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*,int ,int) ;

void FUNC_3( const mbedtls_ssl_context *VAR_2, int VAR_3,
                      const char *VAR_4, int VAR_5, const char *VAR_6,
                      const unsigned char *VAR_7, size_t VAR_8 )
{
    char VAR_9[VAR_0];
    char VAR_10[17];
    size_t VAR_11, VAR_12 = 0;

    if( VAR_2->conf == ((void*)0) || VAR_2->conf->f_dbg == ((void*)0) || VAR_3 > VAR_1 )
        return;

    FUNC_1( VAR_9 + VAR_12, sizeof( VAR_9 ) - VAR_12, "dumping '%s' (%u bytes)\n",
              VAR_6, (unsigned int) VAR_8 );

    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_9 );

    VAR_12 = 0;
    FUNC_2( VAR_10, 0, sizeof( VAR_10 ) );
    for( VAR_11 = 0; VAR_11 < VAR_8; VAR_11++ )
    {
        if( VAR_11 >= 4096 )
            break;

        if( VAR_11 % 16 == 0 )
        {
            if( VAR_11 > 0 )
            {
                FUNC_1( VAR_9 + VAR_12, sizeof( VAR_9 ) - VAR_12, "  %s\n", VAR_10 );
                FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_9 );

                VAR_12 = 0;
                FUNC_2( VAR_10, 0, sizeof( VAR_10 ) );
            }

            VAR_12 += FUNC_1( VAR_9 + VAR_12, sizeof( VAR_9 ) - VAR_12, "%04x: ",
                             (unsigned int) VAR_11 );

        }

        VAR_12 += FUNC_1( VAR_9 + VAR_12, sizeof( VAR_9 ) - VAR_12, " %02x",
                         (unsigned int) VAR_7[VAR_11] );
        VAR_10[VAR_11 % 16] = ( VAR_7[VAR_11] > 31 && VAR_7[VAR_11] < 127 ) ? VAR_7[VAR_11] : '.' ;
    }

    if( VAR_8 > 0 )
    {
        for( ; VAR_11 % 16 != 0; VAR_11++ )
            VAR_12 += FUNC_1( VAR_9 + VAR_12, sizeof( VAR_9 ) - VAR_12, "   " );

        FUNC_1( VAR_9 + VAR_12, sizeof( VAR_9 ) - VAR_12, "  %s\n", VAR_10 );
        FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_9 );
    }
}
