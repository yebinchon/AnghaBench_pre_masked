
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned int const* VAR_0 ;

__attribute__((used)) static size_t FUNC_1(short const* VAR_1, unsigned VAR_2,
                                    unsigned const* VAR_3, unsigned const VAR_4)
{
    unsigned const VAR_5 = 8 - VAR_2;
    size_t VAR_6 = 0;
    unsigned VAR_7;
    FUNC_0(VAR_2 <= 8);
    for (VAR_7 = 0; VAR_7 <= VAR_4; ++VAR_7) {
        unsigned const VAR_8 = VAR_1[VAR_7] != -1 ? VAR_1[VAR_7] : 1;
        unsigned const VAR_9 = VAR_8 << VAR_5;
        FUNC_0(VAR_9 > 0);
        FUNC_0(VAR_9 < 256);
        VAR_6 += VAR_3[VAR_7] * VAR_0[VAR_9];
    }
    return VAR_6 >> 8;
}
