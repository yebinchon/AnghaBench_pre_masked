
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;

int FUNC_5( esp_aes_context *VAR_2,
                        int VAR_3,
                        size_t VAR_4,
                        unsigned char VAR_5[16],
                        const unsigned char *VAR_6,
                        unsigned char *VAR_7 )
{
    unsigned char VAR_8;
    unsigned char VAR_9[17];

    FUNC_0();

    FUNC_3(VAR_2, VAR_1);

    while ( VAR_4-- ) {
        FUNC_4( VAR_9, VAR_5, 16 );
        FUNC_1(VAR_5, VAR_5);

        if ( VAR_3 == VAR_0 ) {
            VAR_9[16] = *VAR_6;
        }

        VAR_8 = *VAR_7++ = (unsigned char)( VAR_5[0] ^ *VAR_6++ );

        if ( VAR_3 == VAR_1 ) {
            VAR_9[16] = VAR_8;
        }

        FUNC_4( VAR_5, VAR_9 + 1, 16 );
    }

    FUNC_2();

    return 0;
}
