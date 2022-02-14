
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(const char *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_0 && VAR_0[VAR_2]; VAR_2++) {
        if (VAR_0[VAR_2] == '/' && VAR_0[VAR_2+1] == '*') {
            VAR_2 += 2;
            while ( VAR_0 && VAR_0[VAR_2] && (VAR_0[VAR_2] != '*' || VAR_0[VAR_2+1] != '/') )
                VAR_2++;
            VAR_2++;
        } else if (VAR_0[VAR_2] == '/' && VAR_0[VAR_2+1] == '/') {
            VAR_2 += 2;
            while ( VAR_0 && VAR_0[VAR_2] && VAR_0[VAR_2] != '\n' )
                VAR_2++;
        } else {
            for (VAR_3 = 0; VAR_1 && VAR_1[VAR_3]; VAR_3++) {
                if (VAR_0[VAR_2] == VAR_1[VAR_3])
                    break;
            }
            if (VAR_1 && VAR_1[VAR_3])
                break;
        }
    }
    return VAR_2;
}
