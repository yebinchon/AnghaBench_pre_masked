
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* p; int len; } ;
struct TYPE_5__ {scalar_t__* p; int len; } ;
struct TYPE_7__ {TYPE_2__ oid; TYPE_1__ val; } ;
typedef TYPE_3__ mbedtls_asn1_named_data ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char**,unsigned char*,int) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,unsigned char*,scalar_t__*,int) ;
 int FUNC_4 (unsigned char**,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5( unsigned char **VAR_4, unsigned char *VAR_5,
                                 mbedtls_asn1_named_data *VAR_6 )
{
    int VAR_7;
    size_t VAR_8 = 0;

    FUNC_0( VAR_8, FUNC_3( VAR_4, VAR_5, VAR_6->val.p + 1,
                                              VAR_6->val.len - 1 ) );
    FUNC_0( VAR_8, FUNC_2( VAR_4, VAR_5, VAR_6->val.len - 1 ) );
    FUNC_0( VAR_8, FUNC_4( VAR_4, VAR_5, VAR_1 ) );

    if( VAR_6->val.p[0] != 0 )
    {
        FUNC_0( VAR_8, FUNC_1( VAR_4, VAR_5, 1 ) );
    }

    FUNC_0( VAR_8, FUNC_3( VAR_4, VAR_5, VAR_6->oid.p,
                                              VAR_6->oid.len ) );
    FUNC_0( VAR_8, FUNC_2( VAR_4, VAR_5, VAR_6->oid.len ) );
    FUNC_0( VAR_8, FUNC_4( VAR_4, VAR_5, VAR_2 ) );

    FUNC_0( VAR_8, FUNC_2( VAR_4, VAR_5, VAR_8 ) );
    FUNC_0( VAR_8, FUNC_4( VAR_4, VAR_5, VAR_0 |
                                                 VAR_3 ) );

    return( (int) VAR_8 );
}
