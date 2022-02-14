
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int issuer_key; } ;
typedef TYPE_1__ mbedtls_x509write_cert ;
typedef int buf ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,unsigned char*,int) ;
 int FUNC_4 (unsigned char**,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,size_t,unsigned char*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,int ,int) ;

int FUNC_8( mbedtls_x509write_cert *VAR_5 )
{
    int VAR_6;
    unsigned char VAR_7[VAR_3 * 2 + 20];
    unsigned char *VAR_8 = VAR_7 + sizeof(VAR_7);
    size_t VAR_9 = 0;

    FUNC_7( VAR_7, 0, sizeof(VAR_7) );
    FUNC_0( VAR_9, FUNC_4( &VAR_8, VAR_7, VAR_5->issuer_key ) );

    FUNC_5( VAR_7 + sizeof(VAR_7) - VAR_9, VAR_9, VAR_7 + sizeof(VAR_7) - 20 );
    VAR_8 = VAR_7 + sizeof(VAR_7) - 20;
    VAR_9 = 20;

    FUNC_0( VAR_9, FUNC_2( &VAR_8, VAR_7, VAR_9 ) );
    FUNC_0( VAR_9, FUNC_3( &VAR_8, VAR_7, VAR_1 | 0 ) );

    FUNC_0( VAR_9, FUNC_2( &VAR_8, VAR_7, VAR_9 ) );
    FUNC_0( VAR_9, FUNC_3( &VAR_8, VAR_7, VAR_0 |
                                                VAR_2 ) );

    return FUNC_6( VAR_5, VAR_4,
                                   FUNC_1( VAR_4 ),
                                   0, VAR_7 + sizeof(VAR_7) - VAR_9, VAR_9 );
}
