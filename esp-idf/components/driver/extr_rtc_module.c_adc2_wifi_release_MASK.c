
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ VAR_3 ;

esp_err_t FUNC_3(void)
{
    FUNC_1((uint32_t*)VAR_3 != ((void*)0), "wifi release called before acquire", VAR_0 );

    FUNC_2( &VAR_3 );
    FUNC_0( VAR_2, "Wi-Fi returns adc2 lock." );
    return VAR_1;
}
