
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    const uint8_t *VAR_3 = VAR_0;
    uint8_t *VAR_4 = VAR_1;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_4 += 6, VAR_3 -= 6) {
        int64_t VAR_6 = FUNC_0(VAR_3);

        FUNC_1(VAR_4, VAR_6);
    }
}
