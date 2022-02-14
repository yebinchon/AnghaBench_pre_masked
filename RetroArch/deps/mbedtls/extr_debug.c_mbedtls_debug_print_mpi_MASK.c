
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int str ;
struct TYPE_8__ {TYPE_1__* conf; } ;
typedef TYPE_2__ mbedtls_ssl_context ;
typedef int mbedtls_mpi_uint ;
struct TYPE_9__ {int n; int* p; } ;
typedef TYPE_3__ mbedtls_mpi ;
struct TYPE_7__ {int * f_dbg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,int,char const*,int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,int,char*,...) ;

void FUNC_2( const mbedtls_ssl_context *VAR_2, int VAR_3,
                      const char *VAR_4, int VAR_5,
                      const char *VAR_6, const mbedtls_mpi *VAR_7 )
{
    char VAR_8[VAR_0];
    int VAR_9, VAR_10, VAR_11 = 1;
    size_t VAR_12, VAR_13, VAR_14 = 0;

    if( VAR_2->conf == ((void*)0) || VAR_2->conf->f_dbg == ((void*)0) || VAR_7 == ((void*)0) || VAR_3 > VAR_1 )
        return;

    for( VAR_13 = VAR_7->n - 1; VAR_13 > 0; VAR_13-- )
        if( VAR_7->p[VAR_13] != 0 )
            break;

    for( VAR_9 = ( sizeof(mbedtls_mpi_uint) << 3 ) - 1; VAR_9 >= 0; VAR_9-- )
        if( ( ( VAR_7->p[VAR_13] >> VAR_9 ) & 1 ) != 0 )
            break;

    FUNC_1( VAR_8 + VAR_14, sizeof( VAR_8 ) - VAR_14, "value of '%s' (%d bits) is:\n",
              VAR_6, (int) ( ( VAR_13 * ( sizeof(mbedtls_mpi_uint) << 3 ) ) + VAR_9 + 1 ) );

    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_8 );

    VAR_14 = 0;
    for( VAR_12 = VAR_13 + 1, VAR_9 = 0; VAR_12 > 0; VAR_12-- )
    {
        if( VAR_11 && VAR_7->p[VAR_12 - 1] == 0 )
            continue;

        for( VAR_10 = sizeof( mbedtls_mpi_uint ) - 1; VAR_10 >= 0; VAR_10-- )
        {
            if( VAR_11 && ( ( VAR_7->p[VAR_12 - 1] >> ( VAR_10 << 3 ) ) & 0xFF ) == 0 )
                continue;
            else
                VAR_11 = 0;

            if( VAR_9 % 16 == 0 )
            {
                if( VAR_9 > 0 )
                {
                    FUNC_1( VAR_8 + VAR_14, sizeof( VAR_8 ) - VAR_14, "\n" );
                    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_8 );
                    VAR_14 = 0;
                }
            }

            VAR_14 += FUNC_1( VAR_8 + VAR_14, sizeof( VAR_8 ) - VAR_14, " %02x", (unsigned int)
                             ( VAR_7->p[VAR_12 - 1] >> ( VAR_10 << 3 ) ) & 0xFF );

            VAR_9++;
        }

    }

    if( VAR_11 == 1 )
        VAR_14 += FUNC_1( VAR_8 + VAR_14, sizeof( VAR_8 ) - VAR_14, " 00" );

    FUNC_1( VAR_8 + VAR_14, sizeof( VAR_8 ) - VAR_14, "\n" );
    FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_8 );
}
