
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int,int,int) ;

int FUNC_2(uint8_t **VAR_0, int *VAR_1,
                           const uint8_t *VAR_2, int VAR_3, int VAR_4,
                           enum AVSampleFormat VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_8 = FUNC_0(VAR_5);
    VAR_9 = FUNC_1(&VAR_10, VAR_3, VAR_4,
                                          VAR_5, VAR_6);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_0[0] = (uint8_t *)VAR_2;
    for (VAR_7 = 1; VAR_8 && VAR_7 < VAR_3; VAR_7++)
        VAR_0[VAR_7] = VAR_0[VAR_7-1] + VAR_10;

    if (VAR_1)
        *VAR_1 = VAR_10;

    return VAR_9;
}
