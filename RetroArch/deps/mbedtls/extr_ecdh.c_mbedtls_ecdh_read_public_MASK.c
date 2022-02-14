
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Qp; int grp; } ;
typedef TYPE_1__ mbedtls_ecdh_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,unsigned char const**,size_t) ;

int FUNC_1( mbedtls_ecdh_context *VAR_1,
                      const unsigned char *VAR_2, size_t VAR_3 )
{
    int VAR_4;
    const unsigned char *VAR_5 = VAR_2;

    if( VAR_1 == ((void*)0) )
        return( VAR_0 );

    if( ( VAR_4 = FUNC_0( &VAR_1->grp, &VAR_1->Qp, &VAR_5, VAR_3 ) ) != 0 )
        return( VAR_4 );

    if( (size_t)( VAR_5 - VAR_2 ) != VAR_3 )
        return( VAR_0 );

    return( 0 );
}
