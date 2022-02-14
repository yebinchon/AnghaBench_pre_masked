
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int gpio_num_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ,int*) ;
 scalar_t__ FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int,int*) ;
 char* FUNC_7 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int) ;

void FUNC_10(void)
{
    uint8_t VAR_8=0;
    int VAR_9;
    esp_err_t VAR_10;

    gpio_num_t VAR_11, VAR_12;

    VAR_10 = FUNC_2( VAR_0, &VAR_11 );
    FUNC_3( VAR_10 == VAR_6 );
    VAR_10 = FUNC_6( VAR_3, &VAR_12 );
    FUNC_3( VAR_10 == VAR_6 );

    FUNC_8("ADC channel %d @ GPIO %d, DAC channel %d @ GPIO %d.\n", VAR_0, VAR_11,
                VAR_3, VAR_12 );

    FUNC_4( VAR_3 );


    FUNC_8("adc2_init...\n");
    FUNC_0( VAR_0, VAR_1 );

    FUNC_9(2 * VAR_7);

    FUNC_8("start conversion.\n");
    while(1) {
        FUNC_5( VAR_3, VAR_8++ );
        VAR_10 = FUNC_1( VAR_0, VAR_2, &VAR_9);
        if ( VAR_10 == VAR_6 ) {
            FUNC_8("%d: %d\n", VAR_8, VAR_9 );
        } else if ( VAR_10 == VAR_4 ) {
            FUNC_8("%s: ADC2 not initialized yet.\n", FUNC_7(VAR_10));
        } else if ( VAR_10 == VAR_5 ) {

            FUNC_8("%s: ADC2 is in use by Wi-Fi.\n", FUNC_7(VAR_10));
        } else {
            FUNC_8("%s\n", FUNC_7(VAR_10));
        }

        FUNC_9( 2 * VAR_7 );
    }
}
