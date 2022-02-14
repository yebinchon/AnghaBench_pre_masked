
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__*,size_t) ;
 int FUNC_4 (scalar_t__*,int *,int ) ;

__attribute__((used)) static uint16_t FUNC_5(uint8_t *VAR_0, size_t VAR_1)
{
    FUNC_1( VAR_0 != ((void*)0));

    if (VAR_1 < 4) {
        return 0;
    }
    for (int VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 4) {
        uint32_t VAR_3 = FUNC_2();
        FUNC_4(VAR_0 + VAR_2, &VAR_3, FUNC_0(VAR_1 - VAR_2, 4));
    }

    uint16_t VAR_4 = FUNC_3((uint8_t*)VAR_0, (VAR_1 - 2));

    VAR_0[VAR_1 - 2] = (uint8_t)(VAR_4 & 0xFF);
    VAR_0[VAR_1 - 1] = (uint8_t)(VAR_4 >> 8);
    return VAR_4;
}
