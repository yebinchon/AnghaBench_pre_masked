
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* p; } ;
struct TYPE_7__ {TYPE_1__ val; } ;
typedef TYPE_2__ mbedtls_asn1_named_data ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__**,char const*,size_t,int *,size_t) ;
 int FUNC_1 (int*,unsigned char const*,size_t) ;

int FUNC_2( mbedtls_asn1_named_data **VAR_1, const char *VAR_2, size_t VAR_3,
                        int VAR_4, const unsigned char *VAR_5, size_t VAR_6 )
{
    mbedtls_asn1_named_data *VAR_7;

    if( ( VAR_7 = FUNC_0( VAR_1, VAR_2, VAR_3,
                                       ((void*)0), VAR_6 + 1 ) ) == ((void*)0) )
    {
        return( VAR_0 );
    }

    VAR_7->val.p[0] = VAR_4;
    FUNC_1( VAR_7->val.p + 1, VAR_5, VAR_6 );

    return( 0 );
}
