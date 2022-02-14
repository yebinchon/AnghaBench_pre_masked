
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; } ;
typedef TYPE_1__ mbedtls_mpi ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,unsigned char*,int ) ;
 size_t FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*,unsigned char*,size_t) ;

int FUNC_6( unsigned char **VAR_2, unsigned char *VAR_3, const mbedtls_mpi *VAR_4 )
{
    int VAR_5;
    size_t VAR_6 = 0;


    VAR_6 = FUNC_4( VAR_4 );

    if( *VAR_2 < VAR_3 || (size_t)( *VAR_2 - VAR_3 ) < VAR_6 )
        return( VAR_1 );

    (*VAR_2) -= VAR_6;
    FUNC_1( FUNC_5( VAR_4, *VAR_2, VAR_6 ) );




    if( VAR_4->s ==1 && **VAR_2 & 0x80 )
    {
        if( *VAR_2 - VAR_3 < 1 )
            return( VAR_1 );

        *--(*VAR_2) = 0x00;
        VAR_6 += 1;
    }

    FUNC_0( VAR_6, FUNC_2( VAR_2, VAR_3, VAR_6 ) );
    FUNC_0( VAR_6, FUNC_3( VAR_2, VAR_3, VAR_0 ) );

    VAR_5 = (int) VAR_6;

cleanup:
    return( VAR_5 );
}
