
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_x509write_cert ;
typedef int buf ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char**,unsigned char*,int) ;
 int FUNC_3 (unsigned char**,unsigned char*,int) ;
 int FUNC_4 (unsigned char**,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char**,unsigned char*,int) ;
 int FUNC_6 (int *,int ,int ,int ,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char*,int ,int) ;

int FUNC_8( mbedtls_x509write_cert *VAR_4,
                                         int VAR_5, int VAR_6 )
{
    int VAR_7;
    unsigned char VAR_8[9];
    unsigned char *VAR_9 = VAR_8 + sizeof(VAR_8);
    size_t VAR_10 = 0;

    FUNC_7( VAR_8, 0, sizeof(VAR_8) );

    if( VAR_5 && VAR_6 > 127 )
        return( VAR_2 );

    if( VAR_5 )
    {
        if( VAR_6 >= 0 )
        {
            FUNC_0( VAR_10, FUNC_3( &VAR_9, VAR_8, VAR_6 ) );
        }
        FUNC_0( VAR_10, FUNC_2( &VAR_9, VAR_8, 1 ) );
    }

    FUNC_0( VAR_10, FUNC_4( &VAR_9, VAR_8, VAR_10 ) );
    FUNC_0( VAR_10, FUNC_5( &VAR_9, VAR_8, VAR_0 |
                                                VAR_1 ) );

    return FUNC_6( VAR_4, VAR_3,
                                        FUNC_1( VAR_3 ),
                                        0, VAR_8 + sizeof(VAR_8) - VAR_10, VAR_10 );
}
