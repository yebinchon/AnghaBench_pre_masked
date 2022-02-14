
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **,char*,char*,int) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const**,char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int FUNC_5(AVDictionary **VAR_1, const char **VAR_2,
                                const char *VAR_3, const char *VAR_4,
                                int VAR_5)
{
    char *VAR_6 = FUNC_3(VAR_2, VAR_3);
    char *VAR_7 = ((void*)0);
    int VAR_8;

    if (VAR_6 && *VAR_6 && FUNC_4(*VAR_2, VAR_3)) {
        (*VAR_2)++;
        VAR_7 = FUNC_3(VAR_2, VAR_4);
    }

    if (VAR_6 && *VAR_6 && VAR_7 && *VAR_7)
        VAR_8 = FUNC_1(VAR_1, VAR_6, VAR_7, VAR_5);
    else
        VAR_8 = FUNC_0(VAR_0);

    FUNC_2(&VAR_6);
    FUNC_2(&VAR_7);

    return VAR_8;
}
