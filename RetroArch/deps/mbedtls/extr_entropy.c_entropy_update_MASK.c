
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int accumulator; } ;
typedef TYPE_1__ mbedtls_entropy_context ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,size_t,unsigned char*,int ) ;
 int FUNC_1 (int *,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char const*,size_t,unsigned char*,int ) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_4( mbedtls_entropy_context *VAR_1, unsigned char VAR_2,
                           const unsigned char *VAR_3, size_t VAR_4 )
{
    unsigned char VAR_5[2];
    unsigned char VAR_6[VAR_0];
    size_t VAR_7 = VAR_4;
    const unsigned char *VAR_8 = VAR_3;

    if( VAR_7 > VAR_0 )
    {



        FUNC_0( VAR_3, VAR_4, VAR_6, 0 );

        VAR_8 = VAR_6;
        VAR_7 = VAR_0;
    }

    VAR_5[0] = VAR_2;
    VAR_5[1] = VAR_7 & 0xFF;





    FUNC_1( &VAR_1->accumulator, VAR_5, 2 );
    FUNC_1( &VAR_1->accumulator, VAR_8, VAR_7 );


    return( 0 );
}
