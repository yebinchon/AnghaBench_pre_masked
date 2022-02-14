
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint32_t ;
struct TYPE_6__ {int md_info; } ;
typedef TYPE_1__ mbedtls_md_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,unsigned char*) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_1__*,unsigned char const*,unsigned char) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,int ,int) ;

int FUNC_6( mbedtls_md_context_t *VAR_2, const unsigned char *VAR_3,
                       size_t VAR_4, const unsigned char *VAR_5, size_t VAR_6,
                       unsigned int VAR_7,
                       uint32_t VAR_8, unsigned char *VAR_9 )
{
    int VAR_10, VAR_11;
    unsigned int VAR_12;
    unsigned char VAR_13[VAR_1];
    unsigned char VAR_14[VAR_1];
    unsigned char VAR_15 = FUNC_0( VAR_2->md_info );
    size_t VAR_16;
    unsigned char *VAR_17 = VAR_9;
    unsigned char VAR_18[4];

    FUNC_5( VAR_18, 0, 4 );
    VAR_18[3] = 1;

    if( VAR_7 > 0xFFFFFFFF )
        return( VAR_0 );

    while( VAR_8 )
    {

        if( ( VAR_10 = FUNC_2( VAR_2, VAR_3, VAR_4 ) ) != 0 )
            return( VAR_10 );

        if( ( VAR_10 = FUNC_3( VAR_2, VAR_5, VAR_6 ) ) != 0 )
            return( VAR_10 );

        if( ( VAR_10 = FUNC_3( VAR_2, VAR_18, 4 ) ) != 0 )
            return( VAR_10 );

        if( ( VAR_10 = FUNC_1( VAR_2, VAR_14 ) ) != 0 )
            return( VAR_10 );

        FUNC_4( VAR_13, VAR_14, VAR_15 );

        for( VAR_12 = 1; VAR_12 < VAR_7; VAR_12++ )
        {

            if( ( VAR_10 = FUNC_2( VAR_2, VAR_3, VAR_4 ) ) != 0 )
                return( VAR_10 );

            if( ( VAR_10 = FUNC_3( VAR_2, VAR_13, VAR_15 ) ) != 0 )
                return( VAR_10 );

            if( ( VAR_10 = FUNC_1( VAR_2, VAR_13 ) ) != 0 )
                return( VAR_10 );


            for( VAR_11 = 0; VAR_11 < VAR_15; VAR_11++ )
                VAR_14[VAR_11] ^= VAR_13[VAR_11];
        }

        VAR_16 = ( VAR_8 < VAR_15 ) ? VAR_8 : VAR_15;
        FUNC_4( VAR_17, VAR_14, VAR_16 );

        VAR_8 -= (uint32_t) VAR_16;
        VAR_17 += VAR_16;

        for( VAR_12 = 4; VAR_12 > 0; VAR_12-- )
            if( ++VAR_18[VAR_12 - 1] != 0 )
                break;
    }

    return( 0 );
}
