
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
typedef int PixContext ;
typedef int ArithCoder ;


 int FUNC_0 (int*,int const) ;
 int FUNC_1 (int *,int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int*,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(ArithCoder *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                         int VAR_3, int VAR_4, int VAR_5, int VAR_6, ptrdiff_t VAR_7,
                         ptrdiff_t VAR_8, PixContext *VAR_9,
                         const uint32_t *VAR_10)
{
    int VAR_11, VAR_12, VAR_13;
    uint8_t *VAR_14 = VAR_2 + VAR_3 * 3 + VAR_4 * VAR_8;

    VAR_1 += VAR_3 + VAR_4 * VAR_7;

    for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
        for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
            if (!VAR_11 && !VAR_12)
                VAR_13 = FUNC_1(VAR_0, VAR_9, ((void*)0), 0, 0);
            else
                VAR_13 = FUNC_2(VAR_0, VAR_9, VAR_1 + VAR_11, VAR_7,
                                            VAR_11, VAR_12, VAR_5 - VAR_11 - 1);
            if (VAR_13 < 0)
                return VAR_13;
            VAR_1[VAR_11] = VAR_13;

            if (VAR_2)
                FUNC_0(VAR_14 + VAR_11 * 3, VAR_10[VAR_13]);
        }
        VAR_1 += VAR_7;
        VAR_14 += VAR_8;
    }

    return 0;
}
