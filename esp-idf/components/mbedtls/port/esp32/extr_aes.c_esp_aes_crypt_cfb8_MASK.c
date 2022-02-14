
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
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6( esp_aes_context *VAR_3,
                        int VAR_4,
                        size_t VAR_5,
                        unsigned char VAR_6[16],
                        const unsigned char *VAR_7,
                        unsigned char *VAR_8 )
{
    unsigned char VAR_9;
    unsigned char VAR_10[17];

    if (!FUNC_5(VAR_3)) {
        return VAR_2;
    }

    FUNC_0();
    VAR_3->key_in_hardware = 0;

    FUNC_3(VAR_3, VAR_1);

    while ( VAR_5-- ) {
        FUNC_4( VAR_10, VAR_6, 16 );
        FUNC_1(VAR_3, VAR_6, VAR_6);

        if ( VAR_4 == VAR_0 ) {
            VAR_10[16] = *VAR_7;
        }

        VAR_9 = *VAR_8++ = (unsigned char)( VAR_6[0] ^ *VAR_7++ );

        if ( VAR_4 == VAR_1 ) {
            VAR_10[16] = VAR_9;
        }

        FUNC_4( VAR_6, VAR_10 + 1, 16 );
    }

    FUNC_2();

    return 0;
}
