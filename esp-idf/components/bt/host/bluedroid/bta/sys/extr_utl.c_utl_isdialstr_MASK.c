
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN FUNC_0(const char *VAR_2)
{
    UINT16 VAR_3 = 0;

    for (VAR_3 = 0; VAR_2[VAR_3] != 0; VAR_3++) {
        if (!(((VAR_2[VAR_3] >= '0') && (VAR_2[VAR_3] <= '9'))
                || (VAR_2[VAR_3] == '*') || (VAR_2[VAR_3] == '+') || (VAR_2[VAR_3] == '#') || (VAR_2[VAR_3] == ';')
                || ((VAR_2[VAR_3] >= 'A') && (VAR_2[VAR_3] <= 'C'))
                || ((VAR_2[VAR_3] == 'p') || (VAR_2[VAR_3] == 'P')
                    || (VAR_2[VAR_3] == 'w') || (VAR_2[VAR_3] == 'W')))) {
            return VAR_0;
        }
    }

    return VAR_1;
}
