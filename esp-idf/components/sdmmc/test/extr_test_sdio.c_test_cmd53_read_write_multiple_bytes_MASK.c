
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int sdmmc_card_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *,size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int,size_t const,int *) ;
 int FUNC_8 (int *,int,size_t const,int *,size_t) ;
 int FUNC_9 (int *,int,size_t const,int *,size_t) ;

__attribute__((used)) static void FUNC_10(sdmmc_card_t* VAR_4, size_t VAR_5)
{
    FUNC_5("Write multiple bytes using CMD53\n");
    const size_t VAR_6 = VAR_2 - VAR_0;

    uint8_t* VAR_7 = FUNC_4(512, VAR_1);
    uint32_t* VAR_8 = (uint32_t*) VAR_7;

    for (size_t VAR_9 = 0; VAR_9 < (VAR_5 + 3) / 4; ++VAR_9) {
        VAR_8[VAR_9] = FUNC_6();
    }

    FUNC_2(FUNC_9(VAR_4, 1, VAR_6, VAR_7, VAR_5));
    FUNC_0(VAR_3, VAR_7, VAR_5);

    FUNC_5("Read back using CMD52\n");
    uint8_t* VAR_10 = FUNC_4(512, VAR_1);
    for (size_t VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11) {
        FUNC_2(FUNC_7(VAR_4, 1, VAR_6 + VAR_11, &VAR_10[VAR_11]));
    }
    FUNC_0(VAR_3, VAR_10, VAR_5);
    FUNC_1(VAR_7, VAR_10, VAR_5);

    FUNC_5("Read back using CMD53\n");
    FUNC_2(FUNC_8(VAR_4, 1, VAR_6, VAR_10, VAR_5));
    FUNC_0(VAR_3, VAR_10, VAR_5);
    FUNC_1(VAR_7, VAR_10, VAR_5);

    FUNC_3(VAR_7);
    FUNC_3(VAR_10);
}
