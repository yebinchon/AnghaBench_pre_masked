
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ptrdiff_t ;
typedef int int16_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline void FUNC_1(int16_t *VAR_0, ptrdiff_t VAR_1,
                          int16_t *VAR_2, ptrdiff_t VAR_3,
                          int16_t *VAR_4, ptrdiff_t VAR_5,
                          int VAR_6, int VAR_7)
{
    int16_t VAR_8;
    int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
        if (VAR_9 == 0) {
            VAR_8 = (11*VAR_2[0*VAR_3] - 4*VAR_2[1*VAR_3] + VAR_2[2*VAR_3] + 4) >> 3;
            VAR_0[(2*VAR_9+0)*VAR_1] = (VAR_8 + VAR_4[0*VAR_5]) >> 1;
            if (VAR_7)
                VAR_0[(2*VAR_9+0)*VAR_1] = FUNC_0(VAR_0[(2*VAR_9+0)*VAR_1], VAR_7);

            VAR_8 = ( 5*VAR_2[0*VAR_3] + 4*VAR_2[1*VAR_3] - VAR_2[2*VAR_3] + 4) >> 3;
            VAR_0[(2*VAR_9+1)*VAR_1] = (VAR_8 - VAR_4[0*VAR_5]) >> 1;
            if (VAR_7)
                VAR_0[(2*VAR_9+1)*VAR_1] = FUNC_0(VAR_0[(2*VAR_9+1)*VAR_1], VAR_7);
        } else if (VAR_9 == VAR_6-1) {
            VAR_8 = ( 5*VAR_2[VAR_9*VAR_3] + 4*VAR_2[(VAR_9-1)*VAR_3] - VAR_2[(VAR_9-2)*VAR_3] + 4) >> 3;
            VAR_0[(2*VAR_9+0)*VAR_1] = (VAR_8 + VAR_4[VAR_9*VAR_5]) >> 1;
            if (VAR_7)
                VAR_0[(2*VAR_9+0)*VAR_1] = FUNC_0(VAR_0[(2*VAR_9+0)*VAR_1], VAR_7);

            VAR_8 = (11*VAR_2[VAR_9*VAR_3] - 4*VAR_2[(VAR_9-1)*VAR_3] + VAR_2[(VAR_9-2)*VAR_3] + 4) >> 3;
            VAR_0[(2*VAR_9+1)*VAR_1] = (VAR_8 - VAR_4[VAR_9*VAR_5]) >> 1;
            if (VAR_7)
                VAR_0[(2*VAR_9+1)*VAR_1] = FUNC_0(VAR_0[(2*VAR_9+1)*VAR_1], VAR_7);
        } else {
            VAR_8 = (VAR_2[(VAR_9-1)*VAR_3] - VAR_2[(VAR_9+1)*VAR_3] + 4) >> 3;
            VAR_0[(2*VAR_9+0)*VAR_1] = (VAR_8 + VAR_2[VAR_9*VAR_3] + VAR_4[VAR_9*VAR_5]) >> 1;
            if (VAR_7)
                VAR_0[(2*VAR_9+0)*VAR_1] = FUNC_0(VAR_0[(2*VAR_9+0)*VAR_1], VAR_7);

            VAR_8 = (VAR_2[(VAR_9+1)*VAR_3] - VAR_2[(VAR_9-1)*VAR_3] + 4) >> 3;
            VAR_0[(2*VAR_9+1)*VAR_1] = (VAR_8 + VAR_2[VAR_9*VAR_3] - VAR_4[VAR_9*VAR_5]) >> 1;
            if (VAR_7)
                VAR_0[(2*VAR_9+1)*VAR_1] = FUNC_0(VAR_0[(2*VAR_9+1)*VAR_1], VAR_7);
        }
    }
}
