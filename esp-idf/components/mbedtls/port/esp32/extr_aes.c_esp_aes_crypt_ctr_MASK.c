
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ key_in_hardware; } ;
typedef TYPE_1__ esp_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5( esp_aes_context *VAR_2,
                       size_t VAR_3,
                       size_t *VAR_4,
                       unsigned char VAR_5[16],
                       unsigned char VAR_6[16],
                       const unsigned char *VAR_7,
                       unsigned char *VAR_8 )
{
    int VAR_9, VAR_10;
    size_t VAR_11 = *VAR_4;

    if (!FUNC_4(VAR_2)) {
        return VAR_1;
    }

    FUNC_0();
    VAR_2->key_in_hardware = 0;

    FUNC_3(VAR_2, VAR_0);

    while ( VAR_3-- ) {
        if ( VAR_11 == 0 ) {
            FUNC_1(VAR_2, VAR_5, VAR_6);

            for ( VAR_10 = 16; VAR_10 > 0; VAR_10-- )
                if ( ++VAR_5[VAR_10 - 1] != 0 ) {
                    break;
                }
        }
        VAR_9 = *VAR_7++;
        *VAR_8++ = (unsigned char)( VAR_9 ^ VAR_6[VAR_11] );

        VAR_11 = ( VAR_11 + 1 ) & 0x0F;
    }

    *VAR_4 = VAR_11;

    FUNC_2();

    return 0;
}
