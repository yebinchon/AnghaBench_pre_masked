
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;


 int VAR_0 ;
 int const FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t* VAR_1[256 + 2*VAR_0], const int VAR_2,
                       const int64_t VAR_3, void *VAR_4)
{
    int VAR_5;
    uint8_t *VAR_6 = VAR_4;

    VAR_6 -= VAR_2 * (VAR_3 >> 9);

    for (VAR_5 = 0; VAR_5 < 256 + 2*VAR_0; VAR_5++) {
        int64_t VAR_7 = FUNC_0(VAR_5-VAR_0)*VAR_3;
        VAR_1[VAR_5] = VAR_6 + VAR_2 * (VAR_7 >> 16);
    }
}
