
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ux ;
typedef int uu ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**) ;
 scalar_t__ FUNC_4 (void*,int *,int) ;
 scalar_t__ FUNC_5 (void*,int *,scalar_t__) ;
 int FUNC_6 (void*,int ) ;
 scalar_t__ FUNC_7 (void*,int *,int) ;

int32_t FUNC_8(uint8_t *VAR_4, int32_t VAR_5, uint8_t *VAR_6,
    int32_t VAR_7, int32_t VAR_8, uint8_t *VAR_9, int32_t VAR_10)
{
    void *VAR_11 = ((void*)0);
    void *VAR_12 = ((void*)0);
    void *VAR_13 = ((void*)0);
    int32_t VAR_14 = VAR_2;
    uint16_t VAR_15 = 0;
    uint16_t VAR_16 = 0;
    uint16_t VAR_17 = 0;
    uint16_t VAR_18 = 0;
    uint8_t VAR_19[VAR_1];
    uint8_t VAR_20[VAR_1];

    if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0) || VAR_9 == ((void*)0))
        return VAR_3;

    FUNC_0(VAR_9, 0, VAR_10);

    FUNC_2(&VAR_11);
    FUNC_2(&VAR_12);
    FUNC_2(&VAR_13);

    FUNC_6(VAR_11, VAR_0);
    FUNC_6(VAR_12, VAR_0);
    FUNC_6(VAR_13, VAR_0);

    VAR_14 = FUNC_5(VAR_11, VAR_4, VAR_5);
    if (VAR_14 == VAR_2)
        VAR_14 = FUNC_5(VAR_12, VAR_4, VAR_5);
    if (VAR_14 == VAR_2)
        VAR_14 = FUNC_7(VAR_12, VAR_6, VAR_7);

    VAR_18 = 1 + ((uint16_t)VAR_10 - 1) / VAR_1;

    for (VAR_15 = 0; (VAR_14 == VAR_2) && (VAR_15 < VAR_18); VAR_15 += 1)
    {
        FUNC_0(VAR_20, 0, sizeof(VAR_20));

        VAR_14 = FUNC_1(VAR_12, VAR_13);
        if (VAR_14 != VAR_2)
            break;

        VAR_19[0] = (uint8_t)((VAR_15 + 1) >> 24);
        VAR_19[1] = (uint8_t)((VAR_15 + 1) >> 16);
        VAR_19[2] = (uint8_t)((VAR_15 + 1) >> 8);
        VAR_19[3] = (uint8_t)(VAR_15 + 1);

        for (VAR_16 = 0, VAR_17 = 4; VAR_16 < VAR_8; VAR_16 += 1)
        {
            VAR_14 = FUNC_7(VAR_13, VAR_19, VAR_17);
            if (VAR_14 == VAR_2)
                VAR_14 = FUNC_4(VAR_13, VAR_19, sizeof(VAR_19));
            if (VAR_14 != VAR_2)
                break;

            for(VAR_17 = 0; VAR_17 < VAR_1; VAR_17 += 1)
                VAR_20[VAR_17] ^= VAR_19[VAR_17];

            VAR_14 = FUNC_1(VAR_11, VAR_13);
            if (VAR_14 != VAR_2)
                break;
        }

        if (VAR_14 != VAR_2)
            break;

        VAR_16 = 0;
        VAR_17 = VAR_15 * VAR_1;

        while (VAR_16 < VAR_1 && VAR_17 < VAR_10)
            VAR_9[VAR_17++] = VAR_20[VAR_16++];
    }



    FUNC_3(&VAR_13);
    FUNC_3(&VAR_11);
    FUNC_3(&VAR_12);

    return VAR_14;
}
