
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT16 ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static BOOLEAN FUNC_1(char *VAR_2, BOOLEAN *VAR_3)
{
    INT16 VAR_4[4] = {-1, -1, -1, -1};
    int VAR_5;
    char *VAR_6;

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {

        for (VAR_6 = VAR_2; *VAR_6 != ',' && *VAR_6 != 0; VAR_6++);

        *VAR_6 = 0;
        VAR_4[VAR_5] = FUNC_0(VAR_2);
        VAR_2 = VAR_6 + 1;
        if (VAR_2 == 0) {
            break;
        }
    }

    if (VAR_4[0] < 0 || VAR_4[3] < 0) {
        return VAR_0;
    }
    if ((VAR_4[0] == 3) && ((VAR_4[3] == 1) || (VAR_4[3] == 0))) {
        *VAR_3 = (BOOLEAN) VAR_4[3];
    }
    return VAR_1;
}
