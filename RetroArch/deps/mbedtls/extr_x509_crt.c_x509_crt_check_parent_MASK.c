
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; int p; } ;
struct TYPE_7__ {int version; int ca_istrue; TYPE_1__ raw; int subject; int issuer; } ;
typedef TYPE_2__ mbedtls_x509_crt ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3( const mbedtls_x509_crt *VAR_1,
                                  const mbedtls_x509_crt *VAR_2,
                                  int VAR_3, int VAR_4 )
{
    int VAR_5;


    if( FUNC_2( &VAR_1->issuer, &VAR_2->subject ) != 0 )
        return( -1 );


    VAR_5 = 1;


    if( VAR_3 && VAR_2->version < 3 )
        VAR_5 = 0;


    if( VAR_3 && VAR_4 &&
        VAR_1->raw.len == VAR_2->raw.len &&
        FUNC_1( VAR_1->raw.p, VAR_2->raw.p, VAR_1->raw.len ) == 0 )
    {
        VAR_5 = 0;
    }

    if( VAR_5 && ! VAR_2->ca_istrue )
        return( -1 );
    return( 0 );
}
