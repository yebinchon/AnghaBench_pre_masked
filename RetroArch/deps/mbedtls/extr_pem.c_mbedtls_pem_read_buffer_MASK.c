
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; size_t buflen; } ;
typedef TYPE_1__ mbedtls_pem_context ;
typedef scalar_t__ mbedtls_cipher_type_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (unsigned char*,size_t,size_t*,unsigned char const*,int) ;
 scalar_t__ FUNC_1 (int,size_t) ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char const*,char*,int) ;
 int FUNC_4 (unsigned char*,int,unsigned char*,size_t,unsigned char const*,size_t) ;
 int FUNC_5 (unsigned char*,unsigned char*,size_t,unsigned char const*,size_t) ;
 int FUNC_6 (unsigned char*,unsigned char*,size_t,unsigned char const*,size_t) ;
 scalar_t__ FUNC_7 (unsigned char const*,unsigned char*,int) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char const*) ;

int FUNC_10( mbedtls_pem_context *VAR_16, const char *VAR_17, const char *VAR_18,
                     const unsigned char *VAR_19, const unsigned char *VAR_20,
                     size_t VAR_21, size_t *VAR_22 )
{
    int VAR_23, VAR_24;
    size_t VAR_25;
    unsigned char *VAR_26;
    const unsigned char *VAR_27, *VAR_28, *VAR_29;





    ((void) VAR_20);
    ((void) VAR_21);



    if( VAR_16 == ((void*)0) )
        return( VAR_8 );

    VAR_27 = (unsigned char *) FUNC_9( (const char *) VAR_19, VAR_17 );

    if( VAR_27 == ((void*)0) )
        return( VAR_12 );

    VAR_28 = (unsigned char *) FUNC_9( (const char *) VAR_19, VAR_18 );

    if( VAR_28 == ((void*)0) || VAR_28 <= VAR_27 )
        return( VAR_12 );

    VAR_27 += FUNC_8( VAR_17 );
    if( *VAR_27 == ' ' ) VAR_27++;
    if( *VAR_27 == '\r' ) VAR_27++;
    if( *VAR_27 == '\n' ) VAR_27++;
    else return( VAR_12 );

    VAR_29 = VAR_28;
    VAR_29 += FUNC_8( VAR_18 );
    if( *VAR_29 == ' ' ) VAR_29++;
    if( *VAR_29 == '\r' ) VAR_29++;
    if( *VAR_29 == '\n' ) VAR_29++;
    *VAR_22 = VAR_29 - VAR_19;

    VAR_24 = 0;

    if( VAR_28 - VAR_27 >= 22 && FUNC_3( VAR_27, "Proc-Type: 4,ENCRYPTED", 22 ) == 0 )
    {
        return( VAR_9 );


    }

    if( VAR_27 >= VAR_28 )
        return( VAR_10 );

    VAR_23 = FUNC_0( ((void*)0), 0, &VAR_25, VAR_27, VAR_28 - VAR_27 );

    if( VAR_23 == VAR_6 )
        return( VAR_10 + VAR_23 );

    if( ( VAR_26 = (unsigned char*)FUNC_1( 1, VAR_25 ) ) == ((void*)0) )
        return( VAR_7 );

    if( ( VAR_23 = FUNC_0( VAR_26, VAR_25, &VAR_25, VAR_27, VAR_28 - VAR_27 ) ) != 0 )
    {
        FUNC_2( VAR_26 );
        return( VAR_10 + VAR_23 );
    }

    if( VAR_24 != 0 )
    {
        FUNC_2( VAR_26 );
        return( VAR_9 );


    }

    VAR_16->buf = VAR_26;
    VAR_16->buflen = VAR_25;

    return( 0 );
}
