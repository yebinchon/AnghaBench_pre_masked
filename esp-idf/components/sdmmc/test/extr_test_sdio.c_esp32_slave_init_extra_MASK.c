
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sdmmc_card_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(sdmmc_card_t* VAR_5)
{
    FUNC_1("Initialize some ESP32 SDIO slave registers\n");

    uint32_t VAR_6;
    FUNC_0( FUNC_2(VAR_5, VAR_1, &VAR_6) );
    VAR_6 &= ~(VAR_2 | VAR_4);
    FUNC_0( FUNC_3(VAR_5, VAR_1, VAR_6) );

    FUNC_0( FUNC_2(VAR_5, VAR_0, &VAR_6) );
    VAR_6 |= VAR_3;
    FUNC_0( FUNC_3(VAR_5, VAR_0, VAR_6) );
}
