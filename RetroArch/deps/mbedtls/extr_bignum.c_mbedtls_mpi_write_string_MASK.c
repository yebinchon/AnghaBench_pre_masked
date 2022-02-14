
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int s; size_t n; size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int,char**) ;

int FUNC_6( const mbedtls_mpi *VAR_3, int VAR_4,
                              char *VAR_5, size_t VAR_6, size_t *VAR_7 )
{
    int VAR_8 = 0;
    size_t VAR_9;
    char *VAR_10;
    mbedtls_mpi VAR_11;

    if( VAR_4 < 2 || VAR_4 > 16 )
        return( VAR_0 );

    VAR_9 = FUNC_1( VAR_3 );
    if( VAR_4 >= 4 ) VAR_9 >>= 1;
    if( VAR_4 >= 16 ) VAR_9 >>= 1;





    VAR_9 += 3 + ( ( VAR_9 + 1 ) & 1 );

    if( VAR_6 < VAR_9 )
    {
        *VAR_7 = VAR_9;
        return( VAR_1 );
    }

    VAR_10 = VAR_5;
    FUNC_4( &VAR_11 );

    if( VAR_3->s == -1 )
        *VAR_10++ = '-';

    if( VAR_4 == 16 )
    {
        int VAR_12;
        size_t VAR_13, VAR_14, VAR_15;

        for( VAR_13 = VAR_3->n, VAR_15 = 0; VAR_13 > 0; VAR_13-- )
        {
            for( VAR_14 = VAR_2; VAR_14 > 0; VAR_14-- )
            {
                VAR_12 = ( VAR_3->p[VAR_13 - 1] >> ( ( VAR_14 - 1 ) << 3) ) & 0xFF;

                if( VAR_12 == 0 && VAR_15 == 0 && ( VAR_13 + VAR_14 ) != 2 )
                    continue;

                *(VAR_10++) = "0123456789ABCDEF" [VAR_12 / 16];
                *(VAR_10++) = "0123456789ABCDEF" [VAR_12 % 16];
                VAR_15 = 1;
            }
        }
    }
    else
    {
        FUNC_0( FUNC_2( &VAR_11, VAR_3 ) );

        if( VAR_11.s == -1 )
            VAR_11.s = 1;

        FUNC_0( FUNC_5( &VAR_11, VAR_4, &VAR_10 ) );
    }

    *VAR_10++ = '\0';
    *VAR_7 = VAR_10 - VAR_5;

cleanup:

    FUNC_3( &VAR_11 );

    return( VAR_8 );
}
