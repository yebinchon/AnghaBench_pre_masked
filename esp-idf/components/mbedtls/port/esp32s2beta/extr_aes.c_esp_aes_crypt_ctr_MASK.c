
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_aes_context ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

int FUNC_4( esp_aes_context *VAR_1,
                       size_t VAR_2,
                       size_t *VAR_3,
                       unsigned char VAR_4[16],
                       unsigned char VAR_5[16],
                       const unsigned char *VAR_6,
                       unsigned char *VAR_7 )
{
    int VAR_8, VAR_9;
    size_t VAR_10 = *VAR_3;

    FUNC_0();

    FUNC_3(VAR_1, VAR_0);

    while ( VAR_2-- ) {
        if ( VAR_10 == 0 ) {
            FUNC_1(VAR_4, VAR_5);

            for ( VAR_9 = 16; VAR_9 > 0; VAR_9-- )
                if ( ++VAR_4[VAR_9 - 1] != 0 ) {
                    break;
                }
        }
        VAR_8 = *VAR_6++;
        *VAR_7++ = (unsigned char)( VAR_8 ^ VAR_5[VAR_10] );

        VAR_10 = ( VAR_10 + 1 ) & 0x0F;
    }

    *VAR_3 = VAR_10;

    FUNC_2();

    return 0;
}
