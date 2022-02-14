
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int Palette ;


 scalar_t__ FUNC_0 (int *,int *,int const*,int) ;

__attribute__((used)) static inline int FUNC_1(Palette * VAR_0, uint8_t * VAR_1,
                                 const uint8_t * VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0, VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_5 += FUNC_0(VAR_0, VAR_1 + VAR_5, VAR_2 + 3 * VAR_6, VAR_4);
    }
    return VAR_5;
}
