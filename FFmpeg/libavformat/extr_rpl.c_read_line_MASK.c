
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVIOContext * VAR_0, char* VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++) {
        int VAR_4 = FUNC_1(VAR_0);
        if (VAR_4 == 0)
            break;
        if (VAR_4 == '\n') {
            VAR_1[VAR_3] = '\0';
            return FUNC_0(VAR_0) ? -1 : 0;
        }
        VAR_1[VAR_3] = VAR_4;
    }
    VAR_1[VAR_3] = '\0';
    return -1;
}
