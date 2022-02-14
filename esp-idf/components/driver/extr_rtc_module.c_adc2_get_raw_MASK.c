
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int esp_err_t ;
typedef int adc_bits_width_t ;
typedef scalar_t__ adc2_channel_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

esp_err_t FUNC_10(adc2_channel_t VAR_8, adc_bits_width_t VAR_9, int* VAR_10)
{
    uint16_t VAR_11 = 0;
    FUNC_0(VAR_8 < VAR_0, "ADC Channel Err", VAR_3);


    FUNC_6();


    FUNC_8(&VAR_6);


    if ( FUNC_2( &VAR_7 ) == -1 ) {
        FUNC_9( &VAR_6 );
        return VAR_4;
    }
    FUNC_3( VAR_9 );
    FUNC_7( VAR_2, VAR_1 );

    VAR_11 = FUNC_5( VAR_2, VAR_8 );
    FUNC_1( &VAR_7 );
    FUNC_9(&VAR_6);

    *VAR_10 = (int)VAR_11;
    return VAR_5;
}
