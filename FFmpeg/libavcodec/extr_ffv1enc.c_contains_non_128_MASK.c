
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(uint8_t (*VAR_1)[VAR_0],
                            int VAR_2)
{
    if (!VAR_1)
        return 0;
    for (int VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
            if (VAR_1[VAR_3][VAR_4] != 128)
                return 1;
    return 0;
}
