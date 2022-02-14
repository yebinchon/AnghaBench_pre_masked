
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 char FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVIOContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    do {
        uint8_t VAR_3;
        int VAR_4 = 0;

        while ((VAR_3 = FUNC_1(VAR_0))) {
            if (VAR_3 == '\\') {
                if (VAR_4 < VAR_2 - 1)
                    VAR_1[VAR_4++] = VAR_3;
                VAR_3 = FUNC_1(VAR_0);
            } else if (VAR_3 == '\n')
                break;

            if (VAR_4 < VAR_2 - 1)
                VAR_1[VAR_4++] = VAR_3;
        }
        VAR_1[VAR_4] = 0;
    } while (!FUNC_0(VAR_0) && (VAR_1[0] == ';' || VAR_1[0] == '#' || VAR_1[0] == 0));
}
