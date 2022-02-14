
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int p; } ;
struct TYPE_6__ {int len; scalar_t__ p; } ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_1__ val; TYPE_2__ oid; } ;
typedef TYPE_3__ mbedtls_asn1_named_data ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char**,unsigned char*,int) ;
 int FUNC_3 (unsigned char**,unsigned char*,char*,int ,int ,int ) ;

int FUNC_4( unsigned char **VAR_2, unsigned char *VAR_3,
                      mbedtls_asn1_named_data *VAR_4 )
{
    int VAR_5;
    size_t VAR_6 = 0;
    mbedtls_asn1_named_data *VAR_7 = VAR_4;

    while( VAR_7 != ((void*)0) )
    {
        FUNC_0( VAR_6, FUNC_3( VAR_2, VAR_3, (char *) VAR_7->oid.p,
                                            VAR_7->oid.len,
                                            VAR_7->val.p, VAR_7->val.len ) );
        VAR_7 = VAR_7->next;
    }

    FUNC_0( VAR_6, FUNC_1( VAR_2, VAR_3, VAR_6 ) );
    FUNC_0( VAR_6, FUNC_2( VAR_2, VAR_3, VAR_0 |
                                                 VAR_1 ) );

    return( (int) VAR_6 );
}
