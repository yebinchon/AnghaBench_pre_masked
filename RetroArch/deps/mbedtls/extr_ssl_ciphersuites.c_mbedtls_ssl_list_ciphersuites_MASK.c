
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cipher; } ;
typedef TYPE_1__ mbedtls_ssl_ciphersuite_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 TYPE_1__* FUNC_0 (int const) ;
 int VAR_3 ;
 int* VAR_4 ;

const int *FUNC_1( void )
{




    if( VAR_3 == 0 )
    {
        const int *VAR_5;
        int *VAR_6;

        for( VAR_5 = VAR_2, VAR_6 = VAR_4;
             *VAR_5 != 0 && VAR_6 < VAR_4 + VAR_0 - 1;
             VAR_5++ )
        {





            if( FUNC_0( *VAR_5 ) != ((void*)0) )

                *(VAR_6++) = *VAR_5;
        }
        *VAR_6 = 0;

        VAR_3 = 1;
    }

    return( VAR_4 );
}
