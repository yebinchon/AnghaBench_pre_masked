
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int n; int* p; } ;
typedef TYPE_1__ const mbedtls_mpi ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*,int,int (*) (void*,unsigned char*,size_t),void*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 size_t FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_11 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*,size_t) ;
 int FUNC_13 (TYPE_1__ const*,TYPE_1__ const*,int) ;

__attribute__((used)) static int FUNC_14( const mbedtls_mpi *VAR_2,
                             int (*VAR_3)(void *, unsigned char *, size_t),
                             void *VAR_4 )
{
    int VAR_5, VAR_6;
    size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    mbedtls_mpi VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

    FUNC_8( &VAR_12 ); FUNC_8( &VAR_13 ); FUNC_8( &VAR_14 ); FUNC_8( &VAR_15 );
    FUNC_8( &VAR_16 );





    FUNC_0( FUNC_13( &VAR_12, VAR_2, 1 ) );
    VAR_11 = FUNC_9( &VAR_12 );
    FUNC_0( FUNC_4( &VAR_13, &VAR_12 ) );
    FUNC_0( FUNC_12( &VAR_13, VAR_11 ) );

    VAR_7 = FUNC_1( VAR_2 );



    VAR_10 = ( ( VAR_7 >= 1300 ) ? 2 : ( VAR_7 >= 850 ) ? 3 :
          ( VAR_7 >= 650 ) ? 4 : ( VAR_7 >= 350 ) ? 8 :
          ( VAR_7 >= 250 ) ? 12 : ( VAR_7 >= 150 ) ? 18 : 27 );

    for( VAR_7 = 0; VAR_7 < VAR_10; VAR_7++ )
    {



        FUNC_0( FUNC_6( &VAR_15, VAR_2->n * VAR_1, VAR_3, VAR_4 ) );

        if( FUNC_3( &VAR_15, &VAR_12 ) >= 0 )
        {
            VAR_8 = FUNC_1( &VAR_15 ) - FUNC_1( &VAR_12 );
            FUNC_0( FUNC_12( &VAR_15, VAR_8 + 1 ) );
        }
        VAR_15.p[0] |= 3;

        VAR_6 = 0;
        do {
            FUNC_0( FUNC_6( &VAR_15, VAR_2->n * VAR_1, VAR_3, VAR_4 ) );

            VAR_8 = FUNC_1( &VAR_15 );
            VAR_9 = FUNC_1( &VAR_12 );
            if (VAR_8 > VAR_9) {
                FUNC_0( FUNC_12( &VAR_15, VAR_8 - VAR_9 ) );
            }

            if (VAR_6++ > 30) {
                return VAR_0;
            }

        } while ( FUNC_3( &VAR_15, &VAR_12 ) >= 0 ||
                  FUNC_2( &VAR_15, 1 ) <= 0 );




        FUNC_0( FUNC_5( &VAR_15, &VAR_15, &VAR_13, VAR_2, &VAR_16 ) );

        if( FUNC_3( &VAR_15, &VAR_12 ) == 0 ||
            FUNC_2( &VAR_15, 1 ) == 0 )
            continue;

        VAR_8 = 1;
        while( VAR_8 < VAR_11 && FUNC_3( &VAR_15, &VAR_12 ) != 0 )
        {



            FUNC_0( FUNC_11( &VAR_14, &VAR_15, &VAR_15 ) );
            FUNC_0( FUNC_10( &VAR_15, &VAR_14, VAR_2 ) );

            if( FUNC_2( &VAR_15, 1 ) == 0 )
                break;

            VAR_8++;
        }




        if( FUNC_3( &VAR_15, &VAR_12 ) != 0 ||
            FUNC_2( &VAR_15, 1 ) == 0 )
        {
            VAR_5 = VAR_0;
            break;
        }
    }

cleanup:
    FUNC_7( &VAR_12 ); FUNC_7( &VAR_13 ); FUNC_7( &VAR_14 ); FUNC_7( &VAR_15 );
    FUNC_7( &VAR_16 );

    return( VAR_5 );
}
