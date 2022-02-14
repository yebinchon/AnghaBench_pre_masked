
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ext_types; unsigned int key_usage; } ;
typedef TYPE_1__ mbedtls_x509_crt ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

int FUNC_0( const mbedtls_x509_crt *VAR_4,
                                      unsigned int VAR_5 )
{
    unsigned int VAR_6, VAR_7;
    unsigned int VAR_8 = VAR_3
                          | VAR_2;

    if( ( VAR_4->ext_types & VAR_1 ) == 0 )
        return( 0 );

    VAR_6 = VAR_5 & ~VAR_8;

    if( ( ( VAR_4->key_usage & ~VAR_8 ) & VAR_6 ) != VAR_6 )
        return( VAR_0 );

    VAR_7 = VAR_5 & VAR_8;

    if( ( ( VAR_4->key_usage & VAR_8 ) | VAR_7 ) != VAR_7 )
        return( VAR_0 );

    return( 0 );
}
