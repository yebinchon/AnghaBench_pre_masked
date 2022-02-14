
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,size_t,size_t) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_2 (scalar_t__*,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, size_t VAR_1, uint8_t *VAR_2,
                         size_t VAR_3)
{
    int VAR_4 = 1;
    int VAR_5;

    if (!VAR_3)
        return;


    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if (VAR_2[VAR_5] != VAR_2[0]) {
            VAR_4 = 0;
            break;
        }
    }
    if (VAR_4)
        VAR_3 = 1;

    if (VAR_3 == 1) {
        FUNC_2(VAR_0, VAR_2[0], VAR_1);
    } else {
        if (VAR_3 > VAR_1)
            VAR_3 = VAR_1;
        FUNC_1(VAR_0, VAR_2, VAR_3);
        FUNC_0(VAR_0 + VAR_3, VAR_3, VAR_1 - VAR_3);
    }
}
