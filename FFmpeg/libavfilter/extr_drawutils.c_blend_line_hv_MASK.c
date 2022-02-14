
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,unsigned int,unsigned int,int const*,int,int,int,int,unsigned int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int VAR_1,
                          unsigned VAR_2, unsigned VAR_3,
                          const uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7,
                          unsigned VAR_8, unsigned VAR_9,
                          int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14;

    if (VAR_11) {
        FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                    VAR_11, VAR_13, VAR_8 + VAR_9, VAR_10);
        VAR_0 += VAR_1;
        VAR_10 += VAR_11;
    }
    for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
        FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                    1 << VAR_8, VAR_13, VAR_8 + VAR_9, VAR_10);
        VAR_0 += VAR_1;
        VAR_10 += 1 << VAR_8;
    }
    if (VAR_12)
        FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                    VAR_12, VAR_13, VAR_8 + VAR_9, VAR_10);
}
