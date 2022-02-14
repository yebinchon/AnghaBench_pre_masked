
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; scalar_t__* p; int * member_2; int member_1; int member_0; } ;
typedef TYPE_1__ mbedtls_x509_bitstring ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned char const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1( unsigned char **VAR_2,
                               const unsigned char *VAR_3,
                               unsigned int *VAR_4)
{
    int VAR_5;
    size_t VAR_6;
    mbedtls_x509_bitstring VAR_7 = { 0, 0, ((void*)0) };

    if( ( VAR_5 = FUNC_0( VAR_2, VAR_3, &VAR_7 ) ) != 0 )
        return( VAR_1 + VAR_5 );

    if( VAR_7.len < 1 )
        return( VAR_1 +
                VAR_0 );


    *VAR_4 = 0;
    for( VAR_6 = 0; VAR_6 < VAR_7.len && VAR_6 < sizeof( unsigned int ); VAR_6++ )
    {
        *VAR_4 |= (unsigned int) VAR_7.p[VAR_6] << (8*VAR_6);
    }

    return( 0 );
}
