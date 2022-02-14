
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;
typedef int TickType_t ;
typedef int RingbufHandle_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,int *) ;
 scalar_t__ FUNC_3 (int ,void**,void**,size_t*,size_t*,int ) ;
 scalar_t__ FUNC_4 (int ,void**,void**,size_t*,size_t*) ;

__attribute__((used)) static void FUNC_5(RingbufHandle_t VAR_1, const uint8_t *VAR_2, size_t VAR_3, TickType_t VAR_4, bool VAR_5)
{

    size_t VAR_6, VAR_7;
    uint8_t *VAR_8, *VAR_9;
    BaseType_t VAR_10;
    if (VAR_5) {
        VAR_10 = FUNC_4(VAR_1, (void**)&VAR_8, (void **)&VAR_9, &VAR_6, &VAR_7);
    } else {
        VAR_10 = FUNC_3(VAR_1, (void**)&VAR_8, (void **)&VAR_9, &VAR_6, &VAR_7, VAR_4);
    }

    FUNC_0(VAR_10 == VAR_0, "Failed to receive item");
    FUNC_0(VAR_8 != ((void*)0), "Failed to receive item");


    if (VAR_9 == ((void*)0)) {
        FUNC_0(VAR_6 == VAR_3, "Item size is incorrect");
        for (int VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
            FUNC_0(VAR_8[VAR_11] == VAR_2[VAR_11], "Item data is invalid");
        }

        if (VAR_5) {
            FUNC_2(VAR_1, (void *)VAR_8, ((void*)0));
        } else {
            FUNC_1(VAR_1, (void *)VAR_8);
        }
    } else {

        FUNC_0(VAR_6 + VAR_7 == VAR_3, "Total item size is incorrect");
        for (int VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
            FUNC_0(VAR_8[VAR_12] == VAR_2[VAR_12], "Head item data is invalid");
        }
        for (int VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
            FUNC_0(VAR_9[VAR_13] == VAR_2[VAR_6 + VAR_13], "Head item data is invalid");
        }

        if (VAR_5) {
            FUNC_2(VAR_1, (void *)VAR_8, ((void*)0));
            FUNC_2(VAR_1, (void *)VAR_9, ((void*)0));
        } else {
            FUNC_1(VAR_1, (void *)VAR_8);
            FUNC_1(VAR_1, (void *)VAR_9);
        }
    }
}
