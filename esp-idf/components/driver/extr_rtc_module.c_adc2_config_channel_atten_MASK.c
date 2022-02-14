
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int adc_atten_t ;
typedef int adc2_channel_t ;
struct TYPE_2__ {int sar_atten2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

esp_err_t FUNC_6(adc2_channel_t VAR_8, adc_atten_t VAR_9)
{
    FUNC_0(VAR_8 < VAR_0, "ADC2 Channel Err", VAR_2);
    FUNC_0(VAR_9 <= VAR_1, "ADC2 Atten Err", VAR_2);

    FUNC_3(VAR_8);
    FUNC_4( &VAR_6 );



    if ( FUNC_2( &VAR_7 ) == -1 ) {

        FUNC_5( &VAR_6 );
        return VAR_3;
    }
    VAR_5.sar_atten2 = ( VAR_5.sar_atten2 & ~(3<<(VAR_8*2)) ) | ((VAR_9&3) << (VAR_8*2));
    FUNC_1( &VAR_7 );

    FUNC_5( &VAR_6 );
    return VAR_4;
}
