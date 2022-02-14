
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(const int32_t *VAR_0, const int32_t *VAR_1, int VAR_2,
                                int VAR_3)
{
    int VAR_4, VAR_5;
    int32_t VAR_6, VAR_7;
    uint64_t VAR_8[4];
    uint64_t VAR_9[4];
    int VAR_10;


    VAR_8[0] = VAR_8[1] = VAR_8[2] = VAR_8[3] = 0;
    for (VAR_4 = 2; VAR_4 < VAR_2; VAR_4++) {
        VAR_6 = VAR_0[VAR_4] - 2*VAR_0[VAR_4-1] + VAR_0[VAR_4-2];
        VAR_7 = VAR_1[VAR_4] - 2*VAR_1[VAR_4-1] + VAR_1[VAR_4-2];
        VAR_8[2] += FUNC_0((VAR_6 + VAR_7) >> 1);
        VAR_8[3] += FUNC_0(VAR_6 - VAR_7);
        VAR_8[0] += FUNC_0(VAR_6);
        VAR_8[1] += FUNC_0(VAR_7);
    }

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        VAR_10 = FUNC_1(2 * VAR_8[VAR_4], VAR_2, VAR_3);
        VAR_8[VAR_4] = FUNC_2( 2 * VAR_8[VAR_4], VAR_2, VAR_10);
    }


    VAR_9[0] = VAR_8[0] + VAR_8[1];
    VAR_9[1] = VAR_8[0] + VAR_8[3];
    VAR_9[2] = VAR_8[1] + VAR_8[3];
    VAR_9[3] = VAR_8[2] + VAR_8[3];


    VAR_5 = 0;
    for (VAR_4 = 1; VAR_4 < 4; VAR_4++)
        if (VAR_9[VAR_4] < VAR_9[VAR_5])
            VAR_5 = VAR_4;

    return VAR_5;
}
