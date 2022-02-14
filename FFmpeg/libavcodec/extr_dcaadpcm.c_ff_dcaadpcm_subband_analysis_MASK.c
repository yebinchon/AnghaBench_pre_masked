
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int32_t ;
typedef int DCAADPCMEncContext ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int *,int*,int) ;
 int FUNC_3 (int const*,int *,int) ;
 int FUNC_4 (int const,int) ;

int FUNC_5(const DCAADPCMEncContext *VAR_1, const int32_t *VAR_2, int VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6;
    int32_t VAR_7[16 + VAR_0];
    int32_t VAR_8[16 + VAR_0];

    int32_t VAR_9 = 0;
    int VAR_10;
    uint64_t VAR_11 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_3 + VAR_0; VAR_6++)
        VAR_9 |= FUNC_0(VAR_2[VAR_6]);


    VAR_10 = FUNC_1(VAR_9) - 11;

    for (VAR_6 = 0; VAR_6 < VAR_3 + VAR_0; VAR_6++) {
        VAR_7[VAR_6] = FUNC_4(VAR_2[VAR_6], 7);
        VAR_8[VAR_6] = FUNC_4(VAR_2[VAR_6], VAR_10);
    }

    VAR_5 = FUNC_3(VAR_1, VAR_8, VAR_3);

    if (VAR_5 < 0)
        return -1;

    VAR_11 = FUNC_2(VAR_5, VAR_7, VAR_4, VAR_3);



    if (VAR_11 < 10)
        return -1;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
        VAR_4[VAR_6] <<= 7;

    return VAR_5;
}
