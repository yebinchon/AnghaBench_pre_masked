
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;
typedef int TickType_t ;
typedef int RingbufHandle_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,int *) ;
 scalar_t__ FUNC_3 (int ,size_t*,int ) ;
 scalar_t__ FUNC_4 (int ,size_t*) ;

__attribute__((used)) static void FUNC_5(RingbufHandle_t VAR_0, const uint8_t *VAR_1, size_t VAR_2, TickType_t VAR_3, bool VAR_4)
{

    size_t VAR_5;
    uint8_t *VAR_6;
    if (VAR_4) {
        VAR_6 = (uint8_t *)FUNC_4(VAR_0, &VAR_5);
    } else {
        VAR_6 = (uint8_t *)FUNC_3(VAR_0, &VAR_5, VAR_3);
    }
    FUNC_0(VAR_6 != ((void*)0), "Failed to receive item");
    FUNC_0(VAR_5 == VAR_2, "Item size is incorrect");

    for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        FUNC_0(VAR_6[VAR_7] == VAR_1[VAR_7], "Item data is invalid");
    }

    if (VAR_4) {
        FUNC_2(VAR_0, (void *)VAR_6, ((void*)0));
    } else {
        FUNC_1(VAR_0, (void *)VAR_6);
    }

}
