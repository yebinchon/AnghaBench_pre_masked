
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subject_key; } ;
typedef TYPE_1__ mbedtls_x509write_cert ;
typedef int buf ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_3 (unsigned char**,unsigned char*,int ) ;
 int FUNC_4 (unsigned char**,unsigned char*,int ) ;
 int FUNC_5 (unsigned char*,size_t,unsigned char*) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,int ,int) ;

int FUNC_8( mbedtls_x509write_cert *VAR_3 )
{
    int VAR_4;
    unsigned char VAR_5[VAR_1 * 2 + 20];
    unsigned char *VAR_6 = VAR_5 + sizeof(VAR_5);
    size_t VAR_7 = 0;

    FUNC_7( VAR_5, 0, sizeof(VAR_5) );
    FUNC_0( VAR_7, FUNC_4( &VAR_6, VAR_5, VAR_3->subject_key ) );

    FUNC_5( VAR_5 + sizeof(VAR_5) - VAR_7, VAR_7, VAR_5 + sizeof(VAR_5) - 20 );
    VAR_6 = VAR_5 + sizeof(VAR_5) - 20;
    VAR_7 = 20;

    FUNC_0( VAR_7, FUNC_2( &VAR_6, VAR_5, VAR_7 ) );
    FUNC_0( VAR_7, FUNC_3( &VAR_6, VAR_5, VAR_0 ) );

    return FUNC_6( VAR_3, VAR_2,
                                        FUNC_1( VAR_2 ),
                                        0, VAR_5 + sizeof(VAR_5) - VAR_7, VAR_7 );
}
