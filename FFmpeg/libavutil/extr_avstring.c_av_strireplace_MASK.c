
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char const*,char const*) ;
 size_t FUNC_5 (char const*) ;

char *FUNC_6(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    char *VAR_4 = ((void*)0);
    const char *VAR_5, *VAR_6 = VAR_1;
    size_t VAR_7 = FUNC_5(VAR_3), VAR_8 = FUNC_5(VAR_2);
    AVBPrint VAR_9;

    FUNC_2(&VAR_9, 1, VAR_0);
    while ((VAR_5 = FUNC_4(VAR_6, VAR_2))) {
        FUNC_0(&VAR_9, VAR_6, VAR_5 - VAR_6);
        VAR_6 = VAR_5 + VAR_8;
        FUNC_0(&VAR_9, VAR_3, VAR_7);
    }
    FUNC_0(&VAR_9, VAR_6, FUNC_5(VAR_6));
    if (!FUNC_3(&VAR_9)) {
        FUNC_1(&VAR_9, ((void*)0));
    } else {
        FUNC_1(&VAR_9, &VAR_4);
    }

    return VAR_4;
}
