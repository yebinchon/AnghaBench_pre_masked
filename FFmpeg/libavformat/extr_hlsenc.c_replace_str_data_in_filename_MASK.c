
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int) ;
 scalar_t__ FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_5(char **VAR_1, const char *VAR_2, char VAR_3, const char *VAR_4)
{
    const char *VAR_5;
    char *VAR_6;
    char VAR_7;
    int VAR_8;
    int VAR_9 = 0;
    AVBPrint VAR_10;

    FUNC_2(&VAR_10, 0, VAR_0);

    VAR_5 = VAR_2;
    for (;;) {
        VAR_7 = *VAR_5;
        if (VAR_7 == '\0')
            break;
        if (VAR_7 == '%' && *(VAR_5+1) == '%')
            VAR_8 = 2;
        else if (VAR_7 == '%' && *(VAR_5+1) == VAR_3) {
            FUNC_4(&VAR_10, "%s", VAR_4);
            VAR_5 += 2;
            VAR_8 = 0;
            VAR_9 ++;
        } else
            VAR_8 = 1;

        if (VAR_8 > 0) {
            FUNC_0(&VAR_10, VAR_5, VAR_8);
            VAR_5 += VAR_8;
        }
    }
    if (!FUNC_3(&VAR_10)) {
        FUNC_1(&VAR_10, ((void*)0));
        return -1;
    }
    if (FUNC_1(&VAR_10, &VAR_6) < 0 || !VAR_6)
        return -1;
    *VAR_1 = VAR_6;
    return VAR_9;
}
