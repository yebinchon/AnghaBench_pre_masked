
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
 int FUNC_3 (int *,int ) ;

int FUNC_4( esp_aes_context *VAR_2,
                          int VAR_3,
                          size_t VAR_4,
                          size_t *VAR_5,
                          unsigned char VAR_6[16],
                          const unsigned char *VAR_7,
                          unsigned char *VAR_8 )
{
    int VAR_9;
    size_t VAR_10 = *VAR_5;

    FUNC_0();

    FUNC_3(VAR_2, VAR_1);

    if ( VAR_3 == VAR_0 ) {
        while ( VAR_4-- ) {
            if ( VAR_10 == 0 ) {
                FUNC_1(VAR_6, VAR_6 );
            }

            VAR_9 = *VAR_7++;
            *VAR_8++ = (unsigned char)( VAR_9 ^ VAR_6[VAR_10] );
            VAR_6[VAR_10] = (unsigned char) VAR_9;

            VAR_10 = ( VAR_10 + 1 ) & 0x0F;
        }
    } else {
        while ( VAR_4-- ) {
            if ( VAR_10 == 0 ) {
                FUNC_1(VAR_6, VAR_6 );
            }

            VAR_6[VAR_10] = *VAR_8++ = (unsigned char)( VAR_6[VAR_10] ^ *VAR_7++ );

            VAR_10 = ( VAR_10 + 1 ) & 0x0F;
        }
    }

    *VAR_5 = VAR_10;

    FUNC_2();

    return 0;
}
