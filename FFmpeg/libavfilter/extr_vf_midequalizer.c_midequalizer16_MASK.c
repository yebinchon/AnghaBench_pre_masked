
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (float*,float*,unsigned int*,size_t) ;
 int FUNC_1 (size_t const*,int,int,int,float*,size_t) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, const uint8_t *VAR_1,
                           uint8_t *VAR_2,
                           ptrdiff_t VAR_3, ptrdiff_t VAR_4,
                           ptrdiff_t VAR_5,
                           int VAR_6, int VAR_7,
                           int VAR_8, int VAR_9,
                           float *VAR_10, float *VAR_11,
                           unsigned *VAR_12,
                           size_t VAR_13)
{
    const uint16_t *VAR_14 = (const uint16_t *)VAR_0;
    uint16_t *VAR_15 = (uint16_t *)VAR_2;
    int VAR_16, VAR_17;

    FUNC_1(VAR_14, VAR_3 / 2, VAR_6, VAR_7, VAR_10, VAR_13);
    FUNC_1((const uint16_t *)VAR_1, VAR_4 / 2, VAR_8, VAR_9, VAR_11, VAR_13);

    FUNC_0(VAR_10, VAR_11, VAR_12, VAR_13);

    for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
        for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
            VAR_15[VAR_16] = VAR_12[VAR_14[VAR_16]];
        }
        VAR_15 += VAR_5 / 2;
        VAR_14 += VAR_3 / 2;
    }
}
