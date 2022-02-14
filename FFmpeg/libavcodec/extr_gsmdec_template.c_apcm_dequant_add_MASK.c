
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16_t ;
typedef int GetBitContext ;


 scalar_t__** VAR_0 ;
 size_t** VAR_1 ;
 int FUNC_0 (int *,int const) ;

__attribute__((used)) static void FUNC_1(GetBitContext *VAR_2, int16_t *VAR_3, const int *VAR_4)
{
    int VAR_5, VAR_6;
    int VAR_7 = FUNC_0(VAR_2, 6);
    const int16_t *VAR_8 = VAR_0[VAR_7];
    for (VAR_5 = 0; VAR_5 < 13; VAR_5++) {
        VAR_6 = FUNC_0(VAR_2, VAR_4[VAR_5]);
        VAR_3[3 * VAR_5] += VAR_8[VAR_1[VAR_4[VAR_5]][VAR_6]];
    }
}
