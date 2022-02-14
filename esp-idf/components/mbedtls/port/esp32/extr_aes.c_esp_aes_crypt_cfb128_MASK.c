
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ key_in_hardware; } ;
typedef TYPE_1__ esp_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5( esp_aes_context *VAR_3,
                          int VAR_4,
                          size_t VAR_5,
                          size_t *VAR_6,
                          unsigned char VAR_7[16],
                          const unsigned char *VAR_8,
                          unsigned char *VAR_9 )
{
    int VAR_10;
    size_t VAR_11 = *VAR_6;

    if (!FUNC_4(VAR_3)) {
        return VAR_2;
    }

    FUNC_0();
    VAR_3->key_in_hardware = 0;

    FUNC_3(VAR_3, VAR_1);

    if ( VAR_4 == VAR_0 ) {
        while ( VAR_5-- ) {
            if ( VAR_11 == 0 ) {
                FUNC_1(VAR_3, VAR_7, VAR_7);
            }

            VAR_10 = *VAR_8++;
            *VAR_9++ = (unsigned char)( VAR_10 ^ VAR_7[VAR_11] );
            VAR_7[VAR_11] = (unsigned char) VAR_10;

            VAR_11 = ( VAR_11 + 1 ) & 0x0F;
        }
    } else {
        while ( VAR_5-- ) {
            if ( VAR_11 == 0 ) {
                FUNC_1(VAR_3, VAR_7, VAR_7);
            }

            VAR_7[VAR_11] = *VAR_9++ = (unsigned char)( VAR_7[VAR_11] ^ *VAR_8++ );

            VAR_11 = ( VAR_11 + 1 ) & 0x0F;
        }
    }

    *VAR_6 = VAR_11;

    FUNC_2();

    return 0;
}
