
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterContext ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (char**) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const**,char*) ;
 int FUNC_4 (int *,int ,char*,char const*) ;
 int FUNC_5 (int *,int *,char*,unsigned int,char**) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_3, AVBPrint *VAR_4, char **VAR_5)
{
    const char *VAR_6 = *VAR_5;
    char *VAR_7[16] = { ((void*)0) };
    unsigned VAR_8 = 0, VAR_9;
    int VAR_10;

    if (*VAR_6 != '{') {
        FUNC_4(VAR_3, VAR_0, "Stray %% near '%s'\n", VAR_6);
        return FUNC_0(VAR_1);
    }
    VAR_6++;
    while (1) {
        if (!(VAR_7[VAR_8++] = FUNC_3(&VAR_6, ":}"))) {
            VAR_10 = FUNC_0(VAR_2);
            goto end;
        }
        if (!*VAR_6) {
            FUNC_4(VAR_3, VAR_0, "Unterminated %%{} near '%s'\n", *VAR_5);
            VAR_10 = FUNC_0(VAR_1);
            goto end;
        }
        if (VAR_8 == FUNC_1(VAR_7))
            FUNC_2(&VAR_7[--VAR_8]);
        if (*VAR_6 == '}')
            break;
        VAR_6++;
    }

    if ((VAR_10 = FUNC_5(VAR_3, VAR_4, VAR_7[0], VAR_8 - 1, VAR_7 + 1)) < 0)
        goto end;
    VAR_10 = 0;
    *VAR_5 = (char *)VAR_6 + 1;

end:
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        FUNC_2(&VAR_7[VAR_9]);
    return VAR_10;
}
