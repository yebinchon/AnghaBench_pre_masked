
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mbedtls_pk_type_t ;
typedef int mbedtls_pk_info_t ;
typedef int mbedtls_pk_context ;
typedef int mbedtls_asn1_buf ;
struct TYPE_3__ {int grp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (unsigned char**,unsigned char*,int*) ;
 int FUNC_1 (unsigned char**,unsigned char*,size_t*,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (unsigned char**,unsigned char*,scalar_t__*,int *) ;
 int FUNC_8 (int ,unsigned char*,size_t) ;
 int FUNC_9 (TYPE_1__*,unsigned char*,size_t) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(
                                    mbedtls_pk_context *VAR_11,
                                    const unsigned char* VAR_12,
                                    size_t VAR_13 )
{
    int VAR_14, VAR_15;
    size_t VAR_16;
    mbedtls_asn1_buf VAR_17;
    unsigned char *VAR_18 = (unsigned char *) VAR_12;
    unsigned char *VAR_19 = VAR_18 + VAR_13;
    mbedtls_pk_type_t VAR_20 = VAR_9;
    const mbedtls_pk_info_t *VAR_21;
    if( ( VAR_14 = FUNC_1( &VAR_18, VAR_19, &VAR_16,
            VAR_0 | VAR_2 ) ) != 0 )
    {
        return( VAR_4 + VAR_14 );
    }

    VAR_19 = VAR_18 + VAR_16;

    if( ( VAR_14 = FUNC_0( &VAR_18, VAR_19, &VAR_15 ) ) != 0 )
        return( VAR_4 + VAR_14 );

    if( VAR_15 != 0 )
        return( VAR_5 + VAR_14 );

    if( ( VAR_14 = FUNC_7( &VAR_18, VAR_19, &VAR_20, &VAR_17 ) ) != 0 )
        return( VAR_4 + VAR_14 );

    if( ( VAR_14 = FUNC_1( &VAR_18, VAR_19, &VAR_16, VAR_1 ) ) != 0 )
        return( VAR_4 + VAR_14 );

    if( VAR_16 < 1 )
        return( VAR_4 +
                VAR_3 );

    if( ( VAR_21 = FUNC_4( VAR_20 ) ) == ((void*)0) )
        return( VAR_6 );

    if( ( VAR_14 = FUNC_6( VAR_11, VAR_21 ) ) != 0 )
        return( VAR_14 );
        return( VAR_6 );

    return( 0 );
}
