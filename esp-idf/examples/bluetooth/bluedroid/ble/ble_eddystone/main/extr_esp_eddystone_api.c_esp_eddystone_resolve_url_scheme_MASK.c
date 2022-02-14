
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 char** VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (size_t const) ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static char* FUNC_2(const uint8_t *VAR_2, const uint8_t *VAR_3)
{
    int VAR_4 = 0;
    static char VAR_5[100] = {0};
    const uint8_t *VAR_6 = VAR_2;

    VAR_4 += FUNC_1(&VAR_5[VAR_4], "%s", VAR_1[*VAR_6++]);

    for (; VAR_6 <= VAR_3; VAR_6++) {
        if (FUNC_0((*VAR_6))) {
            VAR_4 += FUNC_1(&VAR_5[VAR_4], "%s", VAR_0[*VAR_6]);
        } else {
            VAR_4 += FUNC_1(&VAR_5[VAR_4], "%c", *VAR_6);
        }
    }
    return VAR_5;
}
