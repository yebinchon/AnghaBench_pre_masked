
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int,int const,int const) ;
 int* VAR_1 ;

__attribute__((used)) static inline void FUNC_1(uint8_t *VAR_2, const int VAR_3,
                                         const int VAR_4, const int VAR_5)
{
    const uint8_t *VAR_6 = VAR_1 + VAR_0;
    int VAR_7, VAR_8;

    for(VAR_7 = 0; VAR_7 < 4; VAR_7++){
        VAR_8 = ((VAR_2[-2*VAR_3] - VAR_2[1*VAR_3]) - (VAR_2[-1*VAR_3] - VAR_2[0*VAR_3])*4) >> 3;
        VAR_8 = FUNC_0(VAR_8, -VAR_5, VAR_5);
        VAR_2[-1*VAR_3] = VAR_6[VAR_2[-1*VAR_3] + VAR_8];
        VAR_2[ 0*VAR_3] = VAR_6[VAR_2[ 0*VAR_3] - VAR_8];
        VAR_2 += VAR_4;
    }
}
