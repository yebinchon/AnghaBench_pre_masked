
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int ptrdiff_t ;


 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (float*,float*,unsigned int*,size_t) ;
 int FUNC_2 (size_t const*,int ,int,int,float*,size_t) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_0, const uint8_t *VAR_1,
                          uint8_t *VAR_2,
                          ptrdiff_t VAR_3, ptrdiff_t VAR_4,
                          ptrdiff_t VAR_5,
                          int VAR_6, int VAR_7,
                          int VAR_8, int VAR_9,
                          float *VAR_10, float *VAR_11,
                          unsigned *VAR_12,
                          size_t VAR_13)
{
    int VAR_14, VAR_15;

    FUNC_2(VAR_0, VAR_3, VAR_6, VAR_7, VAR_10, VAR_13);
    FUNC_2(VAR_1, VAR_4, VAR_8, VAR_9, VAR_11, VAR_13);

    FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13);

    for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
        for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
            VAR_2[VAR_14] = FUNC_0(VAR_12[VAR_0[VAR_14]]);
        }
        VAR_2 += VAR_5;
        VAR_0 += VAR_3;
    }
}
