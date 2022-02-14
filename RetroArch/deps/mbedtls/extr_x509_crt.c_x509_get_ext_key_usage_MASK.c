
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * p; } ;
struct TYPE_6__ {TYPE_1__ buf; } ;
typedef TYPE_2__ mbedtls_x509_sequence ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char**,unsigned char const*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1( unsigned char **VAR_3,
                               const unsigned char *VAR_4,
                               mbedtls_x509_sequence *VAR_5)
{
    int VAR_6;

    if( ( VAR_6 = FUNC_0( VAR_3, VAR_4, VAR_5, VAR_0 ) ) != 0 )
        return( VAR_2 + VAR_6 );


    if( VAR_5->buf.p == ((void*)0) )
        return( VAR_2 +
                VAR_1 );

    return( 0 );
}
