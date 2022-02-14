
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, const uint8_t *VAR_1,
                                 const uint8_t *VAR_2, ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        uint32_t VAR_6, VAR_7;

        VAR_6 = FUNC_0(&VAR_1[VAR_5 * VAR_3]);
        VAR_7 = FUNC_0(&VAR_2[VAR_5 * VAR_3]);
        FUNC_1(&VAR_0[VAR_5 * VAR_3], FUNC_2(VAR_6, VAR_7));
        VAR_6 = FUNC_0(&VAR_1[VAR_5 * VAR_3 + 4]);
        VAR_7 = FUNC_0(&VAR_2[VAR_5 * VAR_3 + 4]);
        FUNC_1(&VAR_0[VAR_5 * VAR_3 + 4], FUNC_2(VAR_6, VAR_7));
    }
}
