
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int G; } ;
struct TYPE_8__ {int d; TYPE_2__ grp; int Q; } ;
typedef TYPE_1__ mbedtls_ecp_keypair ;
typedef int mbedtls_asn1_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char**,unsigned char*,size_t*) ;
 int FUNC_1 (unsigned char**,unsigned char*,int*) ;
 int FUNC_2 (unsigned char**,unsigned char*,size_t*,int) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char**,unsigned char*,int *) ;
 int FUNC_8 (unsigned char**,unsigned char*,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_10( mbedtls_ecp_keypair *VAR_9,
                                  const unsigned char *VAR_10,
                                  size_t VAR_11 )
{
    int VAR_12;
    int VAR_13, VAR_14;
    size_t VAR_15;
    mbedtls_asn1_buf VAR_16;
    unsigned char *VAR_17 = (unsigned char *) VAR_10;
    unsigned char *VAR_18 = VAR_17 + VAR_11;
    unsigned char *VAR_19;
    if( ( VAR_12 = FUNC_2( &VAR_17, VAR_18, &VAR_15,
            VAR_0 | VAR_3 ) ) != 0 )
    {
        return( VAR_7 + VAR_12 );
    }

    VAR_18 = VAR_17 + VAR_15;

    if( ( VAR_12 = FUNC_1( &VAR_17, VAR_18, &VAR_13 ) ) != 0 )
        return( VAR_7 + VAR_12 );

    if( VAR_13 != 1 )
        return( VAR_8 );

    if( ( VAR_12 = FUNC_2( &VAR_17, VAR_18, &VAR_15, VAR_2 ) ) != 0 )
        return( VAR_7 + VAR_12 );

    if( ( VAR_12 = FUNC_6( &VAR_9->d, VAR_17, VAR_15 ) ) != 0 )
    {
        FUNC_4( VAR_9 );
        return( VAR_7 + VAR_12 );
    }

    VAR_17 += VAR_15;

    VAR_14 = 0;
    if( VAR_17 != VAR_18 )
    {



        if( ( VAR_12 = FUNC_2( &VAR_17, VAR_18, &VAR_15,
                        VAR_1 | VAR_0 | 0 ) ) == 0 )
        {
            if( ( VAR_12 = FUNC_7( &VAR_17, VAR_17 + VAR_15, &VAR_16) ) != 0 ||
                ( VAR_12 = FUNC_9( &VAR_16, &VAR_9->grp ) ) != 0 )
            {
                FUNC_4( VAR_9 );
                return( VAR_12 );
            }
        }
        else if( VAR_12 != VAR_5 )
        {
            FUNC_4( VAR_9 );
            return( VAR_7 + VAR_12 );
        }





        if( ( VAR_12 = FUNC_2( &VAR_17, VAR_18, &VAR_15,
                        VAR_1 | VAR_0 | 1 ) ) == 0 )
        {
            VAR_19 = VAR_17 + VAR_15;

            if( ( VAR_12 = FUNC_0( &VAR_17, VAR_19, &VAR_15 ) ) != 0 )
                return( VAR_7 + VAR_12 );

            if( VAR_17 + VAR_15 != VAR_19 )
                return( VAR_7 +
                        VAR_4 );

            if( ( VAR_12 = FUNC_8( &VAR_17, VAR_19, VAR_9 ) ) == 0 )
                VAR_14 = 1;
            else
            {




                if( VAR_12 != VAR_6 )
                    return( VAR_7 );
            }
        }
        else if( VAR_12 != VAR_5 )
        {
            FUNC_4( VAR_9 );
            return( VAR_7 + VAR_12 );
        }
    }

    if( ! VAR_14 &&
        ( VAR_12 = FUNC_5( &VAR_9->grp, &VAR_9->Q, &VAR_9->d, &VAR_9->grp.G,
                                                      ((void*)0), ((void*)0) ) ) != 0 )
    {
        FUNC_4( VAR_9 );
        return( VAR_7 + VAR_12 );
    }

    if( ( VAR_12 = FUNC_3( &VAR_9->grp, &VAR_9->d ) ) != 0 )
    {
        FUNC_4( VAR_9 );
        return( VAR_12 );
    }

    return( 0 );
}
