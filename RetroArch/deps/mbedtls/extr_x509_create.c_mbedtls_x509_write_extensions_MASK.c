
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ mbedtls_asn1_named_data ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (unsigned char**,unsigned char*,TYPE_1__*) ;

int FUNC_2( unsigned char **VAR_0, unsigned char *VAR_1,
                           mbedtls_asn1_named_data *VAR_2 )
{
    int VAR_3;
    size_t VAR_4 = 0;
    mbedtls_asn1_named_data *VAR_5 = VAR_2;

    while( VAR_5 != ((void*)0) )
    {
        FUNC_0( VAR_4, FUNC_1( VAR_0, VAR_1, VAR_5 ) );
        VAR_5 = VAR_5->next;
    }

    return( (int) VAR_4 );
}
