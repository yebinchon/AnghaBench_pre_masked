
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned char*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5( esp_aes_context *VAR_3,
                           size_t VAR_4,
                           size_t *VAR_5,
                           unsigned char VAR_6[16],
                           const unsigned char *VAR_7,
                           unsigned char *VAR_8 )
{
    int VAR_9 = 0;
    size_t VAR_10;

    if ( VAR_3 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0) ||
        VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ) {
            return VAR_1;
    }

    VAR_10 = *VAR_5;

    if( VAR_10 > 15 ) {
        return( VAR_1 );
    }

    if (!FUNC_4(VAR_3)) {
        return VAR_2;
    }

    FUNC_0();

    FUNC_3(VAR_3, VAR_0);

    while( VAR_4-- ) {
        if( VAR_10 == 0 ) {
            FUNC_1(VAR_3, VAR_6, VAR_6);
        }
        *VAR_8++ = *VAR_7++ ^ VAR_6[VAR_10];

        VAR_10 = ( VAR_10 + 1 ) & 0x0F;
    }

    *VAR_5 = VAR_10;

    FUNC_2();

    return( VAR_9 );
}
