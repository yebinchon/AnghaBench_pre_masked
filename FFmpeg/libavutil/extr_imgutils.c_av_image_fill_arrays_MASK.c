
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int ,int *) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int **,int,int,int *,int*) ;

int FUNC_4(uint8_t *VAR_0[4], int VAR_1[4],
                         const uint8_t *VAR_2, enum AVPixelFormat VAR_3,
                         int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    VAR_7 = FUNC_1(VAR_4, VAR_5, 0, ((void*)0));
    if (VAR_7 < 0)
        return VAR_7;

    VAR_7 = FUNC_2(VAR_1, VAR_3, VAR_4);
    if (VAR_7 < 0)
        return VAR_7;

    for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
        VAR_1[VAR_8] = FUNC_0(VAR_1[VAR_8], VAR_6);

    return FUNC_3(VAR_0, VAR_3, VAR_5, (uint8_t *)VAR_2, VAR_1);
}
