
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int out ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int const,int const,int const,int const,int ,int ,int ,int ,int,int,int,int,int) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2,
                      const uint8_t *VAR_3)
{
    int VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;



    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (!VAR_0[0] && !VAR_0[1] && !VAR_0[2] && !VAR_0[3]) {
            FUNC_1(VAR_1, 0, 4 * sizeof(VAR_1[0]));
        } else {
            FUNC_0(VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3],
                      VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3],
                      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        }
        VAR_0 += 4;
        VAR_1 += VAR_2;
    }

}
