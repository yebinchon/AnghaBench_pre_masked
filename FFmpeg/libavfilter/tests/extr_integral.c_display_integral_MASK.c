
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const uint32_t *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
            FUNC_0(" %7x", VAR_0[VAR_5*VAR_3 + VAR_4]);
        FUNC_0("\n");
    }
    FUNC_0("---------------\n");
}
