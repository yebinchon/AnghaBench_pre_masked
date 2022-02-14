
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t* p; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (unsigned char*,int ,size_t) ;

int FUNC_2( const mbedtls_mpi *VAR_2, unsigned char *VAR_3, size_t VAR_4 )
{
    size_t VAR_5, VAR_6, VAR_7;

    VAR_7 = FUNC_0( VAR_2 );

    if( VAR_4 < VAR_7 )
        return( VAR_0 );

    FUNC_1( VAR_3, 0, VAR_4 );

    for( VAR_5 = VAR_4 - 1, VAR_6 = 0; VAR_7 > 0; VAR_5--, VAR_6++, VAR_7-- )
        VAR_3[VAR_5] = (unsigned char)( VAR_2->p[VAR_6 / VAR_1] >> ((VAR_6 % VAR_1) << 3) );

    return( 0 );
}
