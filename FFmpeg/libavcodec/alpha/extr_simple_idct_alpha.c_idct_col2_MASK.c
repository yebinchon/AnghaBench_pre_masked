
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static inline void FUNC_2(int16_t *VAR_2)
{
    int VAR_3;
    uint64_t VAR_4, VAR_5;

    for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
        int VAR_6 = VAR_2[VAR_3] + (1 << (VAR_0 - 1)) / VAR_1;

        VAR_6 *= VAR_1;
        VAR_2[VAR_3] = VAR_6 >> VAR_0;
    }

    VAR_4 = FUNC_0(VAR_2 + 0 * 4); VAR_5 = FUNC_0(VAR_2 + 1 * 4);
    FUNC_1(VAR_4, VAR_2 + 2 * 4); FUNC_1(VAR_5, VAR_2 + 3 * 4);
    FUNC_1(VAR_4, VAR_2 + 4 * 4); FUNC_1(VAR_5, VAR_2 + 5 * 4);
    FUNC_1(VAR_4, VAR_2 + 6 * 4); FUNC_1(VAR_5, VAR_2 + 7 * 4);
    FUNC_1(VAR_4, VAR_2 + 8 * 4); FUNC_1(VAR_5, VAR_2 + 9 * 4);
    FUNC_1(VAR_4, VAR_2 + 10 * 4); FUNC_1(VAR_5, VAR_2 + 11 * 4);
    FUNC_1(VAR_4, VAR_2 + 12 * 4); FUNC_1(VAR_5, VAR_2 + 13 * 4);
    FUNC_1(VAR_4, VAR_2 + 14 * 4); FUNC_1(VAR_5, VAR_2 + 15 * 4);
}
