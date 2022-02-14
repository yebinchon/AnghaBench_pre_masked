
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int sdmmc_card_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int *) ;
 int FUNC_3 (int *,int ,int,int const,int *) ;

__attribute__((used)) static void FUNC_4(sdmmc_card_t* VAR_3, int VAR_4, uint16_t VAR_5)
{
    const uint8_t* VAR_6 = (const uint8_t*) &VAR_5;
    uint16_t VAR_7 = 0;
    uint8_t* VAR_8 = (uint8_t*) &VAR_7;
    uint32_t VAR_9 = VAR_2 * VAR_4;
    FUNC_1( FUNC_3(VAR_3, 0, VAR_9 + VAR_1, VAR_6[0], ((void*)0)));
    FUNC_1( FUNC_3(VAR_3, 0, VAR_9 + VAR_0, VAR_6[1], ((void*)0)));
    FUNC_1( FUNC_2(VAR_3, 0, VAR_9 + VAR_1, &VAR_8[0]));
    FUNC_1( FUNC_2(VAR_3, 0, VAR_9 + VAR_0, &VAR_8[1]));
    FUNC_0(VAR_5, VAR_7);
}
