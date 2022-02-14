
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ RingbufferType_t ;
typedef int RingbufHandle_t ;
typedef scalar_t__ BaseType_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,size_t*,int ) ;
 scalar_t__ FUNC_3 (int ,void**,void**,size_t*,size_t*,int ) ;
 scalar_t__ FUNC_4 (int ,size_t*,int ,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(RingbufHandle_t VAR_11, RingbufferType_t VAR_12, size_t VAR_13)
{
    for (int VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
        size_t VAR_15 = 0;
        while (VAR_15 < VAR_0) {
            size_t VAR_16, VAR_17;
            char *VAR_18, *VAR_19;


            if (VAR_12 == VAR_3) {
                VAR_18 = (char *)FUNC_2(VAR_11, &VAR_16, VAR_5);
            } else if (VAR_12 == VAR_1) {
                BaseType_t VAR_20 = FUNC_3(VAR_11, (void **)&VAR_18, (void **)&VAR_19, &VAR_16, &VAR_17, VAR_5);
                FUNC_0(VAR_20 == VAR_7, "Failed to receive any item");
            } else {
                VAR_18 = (char *)FUNC_4(VAR_11, &VAR_16, VAR_5, VAR_13);
            }


            FUNC_0(VAR_18 != ((void*)0), "Failed to receive an item");
            if (VAR_12 == VAR_2) {
                FUNC_0(VAR_16 <= VAR_13, "Received data exceeds max size");
            }
            for (int VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {

                FUNC_0(VAR_18[VAR_21] == VAR_6[VAR_15 + VAR_21], "Received data is corrupted");
            }
            VAR_15 += VAR_16;
            FUNC_1(VAR_11, VAR_18);
            if (VAR_12 == VAR_1 && VAR_19 != ((void*)0)) {

                for (int VAR_22 = 0; VAR_22 < VAR_17; VAR_22++) {
                    FUNC_0(VAR_19[VAR_22] == VAR_6[VAR_15 + VAR_22], "Received split data is corrupted");
                }
                VAR_15 += VAR_17;
                FUNC_1(VAR_11, VAR_19);
            }
        }
        FUNC_0(VAR_15 == VAR_0, "Total length of received data is incorrect");
        FUNC_5(VAR_9);
        FUNC_6(VAR_10, VAR_8);
    }
}
