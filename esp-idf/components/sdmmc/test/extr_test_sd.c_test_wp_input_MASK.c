
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sdmmc_host_t ;
typedef int sdmmc_card_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ,int,int) ;
 int * FUNC_7 (int,int,int ) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int const*,int *) ;
 int FUNC_10 (int *,int **,int ,int) ;
 int FUNC_11 (int *,int **,int ,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(int VAR_6, const sdmmc_host_t* VAR_7)
{
    sdmmc_card_t* VAR_8 = FUNC_8(sizeof(sdmmc_card_t));
    FUNC_2(VAR_8);




    FUNC_6(VAR_6, VAR_5, 0, 0);
    FUNC_1(VAR_1, FUNC_0(VAR_6));


    FUNC_1(VAR_2, FUNC_0(VAR_6));
    FUNC_4(FUNC_9(VAR_7, VAR_8));

    uint32_t* VAR_9 = FUNC_7(1, 512, VAR_4);


    FUNC_1(VAR_3, FUNC_0(VAR_6));
    FUNC_12(1000);
    FUNC_4(FUNC_11(VAR_8, &VAR_9, 0, 1));


    FUNC_1(VAR_2, FUNC_0(VAR_6));
    FUNC_12(1000);
    FUNC_3(VAR_0, FUNC_11(VAR_8, &VAR_9, 0, 1));

    FUNC_4(FUNC_10(VAR_8, &VAR_9, 0, 1));

    FUNC_5(VAR_9);
    FUNC_5(VAR_8);
}
