
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, int VAR_1,
                             AVIOContext *VAR_2, int *VAR_3)
{
    while (VAR_1 > 0) {
        int VAR_4 = VAR_1;
        if (VAR_4 > 14)
            VAR_4 = 14;
        FUNC_0(VAR_2, 1);
        FUNC_0(VAR_2, VAR_4);
        FUNC_1(VAR_2, VAR_0, VAR_4);
        VAR_0 += VAR_4;
        VAR_1 -= VAR_4;

        for (; VAR_4 < 14; VAR_4++)
            FUNC_0(VAR_2, 0);

        (*VAR_3)++;
    }
}
