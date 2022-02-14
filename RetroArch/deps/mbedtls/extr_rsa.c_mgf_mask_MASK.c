
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int md_info; } ;
typedef TYPE_1__ mbedtls_md_context_t ;
typedef int mask ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_6( unsigned char *VAR_1, size_t VAR_2, unsigned char *VAR_3,
                      size_t VAR_4, mbedtls_md_context_t *VAR_5 )
{
    unsigned char VAR_6[VAR_0];
    unsigned char VAR_7[4];
    unsigned char *VAR_8;
    unsigned int VAR_9;
    size_t VAR_10, VAR_11;

    FUNC_5( VAR_6, 0, VAR_0 );
    FUNC_5( VAR_7, 0, 4 );

    VAR_9 = FUNC_1( VAR_5->md_info );


    VAR_8 = VAR_1;

    while( VAR_2 > 0 )
    {
        VAR_11 = VAR_9;
        if( VAR_2 < VAR_9 )
            VAR_11 = VAR_2;

        FUNC_2( VAR_5 );
        FUNC_3( VAR_5, VAR_3, VAR_4 );
        FUNC_3( VAR_5, VAR_7, 4 );
        FUNC_0( VAR_5, VAR_6 );

        for( VAR_10 = 0; VAR_10 < VAR_11; ++VAR_10 )
            *VAR_8++ ^= VAR_6[VAR_10];

        VAR_7[3]++;

        VAR_2 -= VAR_11;
    }

    FUNC_4( VAR_6, sizeof( VAR_6 ) );
}
