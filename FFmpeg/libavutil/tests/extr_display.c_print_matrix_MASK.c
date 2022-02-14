
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(int32_t VAR_0[9])
{
    int VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < 3; ++VAR_1) {
        for (VAR_2 = 0; VAR_2 < 3 - 1; ++VAR_2)
            FUNC_0("%d ", VAR_0[VAR_1*3 + VAR_2]);

        FUNC_0("%d\n", VAR_0[VAR_1*3 + VAR_2]);
    }
}
