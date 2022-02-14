
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int tag; size_t len; scalar_t__ p; } ;
typedef TYPE_1__ mbedtls_x509_buf ;
typedef int mbedtls_md_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_1 (unsigned char**,unsigned char const*,int*) ;
 int FUNC_2 (unsigned char**,unsigned char const*,size_t*,int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (unsigned char**,unsigned char const*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (unsigned char**,unsigned char const*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;

int FUNC_7( const mbedtls_x509_buf *VAR_10,
                                mbedtls_md_type_t *VAR_11, mbedtls_md_type_t *VAR_12,
                                int *VAR_13 )
{
    int VAR_14;
    unsigned char *VAR_15;
    const unsigned char *VAR_16, *VAR_17;
    size_t VAR_18;
    mbedtls_x509_buf VAR_19, VAR_20;


    *VAR_11 = VAR_8;
    *VAR_12 = VAR_8;
    *VAR_13 = 20;


    if( VAR_10->tag != ( VAR_0 | VAR_2 ) )
        return( VAR_7 +
                VAR_4 );

    VAR_15 = (unsigned char *) VAR_10->p;
    VAR_16 = VAR_15 + VAR_10->len;

    if( VAR_15 == VAR_16 )
        return( 0 );




    if( ( VAR_14 = FUNC_2( &VAR_15, VAR_16, &VAR_18,
                    VAR_1 | VAR_0 | 0 ) ) == 0 )
    {
        VAR_17 = VAR_15 + VAR_18;


        if( ( VAR_14 = FUNC_5( &VAR_15, VAR_17, &VAR_19 ) ) != 0 )
            return( VAR_14 );

        if( ( VAR_14 = FUNC_3( &VAR_19, VAR_11 ) ) != 0 )
            return( VAR_7 + VAR_14 );

        if( VAR_15 != VAR_17 )
            return( VAR_7 +
                    VAR_3 );
    }
    else if( VAR_14 != VAR_4 )
        return( VAR_7 + VAR_14 );

    if( VAR_15 == VAR_16 )
        return( 0 );




    if( ( VAR_14 = FUNC_2( &VAR_15, VAR_16, &VAR_18,
                    VAR_1 | VAR_0 | 1 ) ) == 0 )
    {
        VAR_17 = VAR_15 + VAR_18;


        if( ( VAR_14 = FUNC_4( &VAR_15, VAR_17, &VAR_19, &VAR_20 ) ) != 0 )
            return( VAR_14 );


        if( FUNC_0( VAR_9, &VAR_19 ) != 0 )
            return( VAR_6 +
                    VAR_5 );


        if( ( VAR_14 = FUNC_6( &VAR_20, VAR_12 ) ) != 0 )
            return( VAR_14 );

        if( VAR_15 != VAR_17 )
            return( VAR_7 +
                    VAR_3 );
    }
    else if( VAR_14 != VAR_4 )
        return( VAR_7 + VAR_14 );

    if( VAR_15 == VAR_16 )
        return( 0 );




    if( ( VAR_14 = FUNC_2( &VAR_15, VAR_16, &VAR_18,
                    VAR_1 | VAR_0 | 2 ) ) == 0 )
    {
        VAR_17 = VAR_15 + VAR_18;

        if( ( VAR_14 = FUNC_1( &VAR_15, VAR_17, VAR_13 ) ) != 0 )
            return( VAR_7 + VAR_14 );

        if( VAR_15 != VAR_17 )
            return( VAR_7 +
                    VAR_3 );
    }
    else if( VAR_14 != VAR_4 )
        return( VAR_7 + VAR_14 );

    if( VAR_15 == VAR_16 )
        return( 0 );




    if( ( VAR_14 = FUNC_2( &VAR_15, VAR_16, &VAR_18,
                    VAR_1 | VAR_0 | 3 ) ) == 0 )
    {
        int VAR_21;

        VAR_17 = VAR_15 + VAR_18;

        if( ( VAR_14 = FUNC_1( &VAR_15, VAR_17, &VAR_21 ) ) != 0 )
            return( VAR_7 + VAR_14 );

        if( VAR_15 != VAR_17 )
            return( VAR_7 +
                    VAR_3 );

        if( VAR_21 != 1 )
            return( VAR_7 );
    }
    else if( VAR_14 != VAR_4 )
        return( VAR_7 + VAR_14 );

    if( VAR_15 != VAR_16 )
        return( VAR_7 +
                VAR_3 );

    return( 0 );
}
