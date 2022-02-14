
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**) ;
 char* FUNC_1 (char const**,char*) ;
 int FUNC_2 (void*,int ,char*,char const*) ;

__attribute__((used)) static char *FUNC_3(const char **VAR_1, void *VAR_2)
{
    const char *VAR_3 = *VAR_1;
    char *VAR_4;
    (*VAR_1)++;

    VAR_4 = FUNC_1(VAR_1, "]");
    if (!VAR_4)
        goto fail;

    if (!VAR_4[0]) {
        FUNC_2(VAR_2, VAR_0,
               "Bad (empty?) label found in the following: \"%s\".\n", VAR_3);
        goto fail;
    }

    if (*(*VAR_1)++ != ']') {
        FUNC_2(VAR_2, VAR_0,
               "Mismatched '[' found in the following: \"%s\".\n", VAR_3);
    fail:
        FUNC_0(&VAR_4);
    }

    return VAR_4;
}
