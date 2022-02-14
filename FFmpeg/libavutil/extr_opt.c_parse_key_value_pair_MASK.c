
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const**,char const*) ;
 int FUNC_4 (void*,int ,char*,char*,...) ;
 int FUNC_5 (void*,char*,char*,int ) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int FUNC_7(void *VAR_6, const char **VAR_7,
                                const char *VAR_8, const char *VAR_9)
{
    char *VAR_10 = FUNC_3(VAR_7, VAR_8);
    char *VAR_11;
    int VAR_12;

    if (!VAR_10)
        return FUNC_0(VAR_5);

    if (*VAR_10 && FUNC_6(*VAR_7, VAR_8)) {
        (*VAR_7)++;
        VAR_11 = FUNC_3(VAR_7, VAR_9);
        if (!VAR_11) {
            FUNC_2(&VAR_10);
            return FUNC_0(VAR_5);
        }
    } else {
        FUNC_4(VAR_6, VAR_2, "Missing key or no key/value separator found after key '%s'\n", VAR_10);
        FUNC_1(VAR_10);
        return FUNC_0(VAR_4);
    }

    FUNC_4(VAR_6, VAR_1, "Setting entry with key '%s' to value '%s'\n", VAR_10, VAR_11);

    VAR_12 = FUNC_5(VAR_6, VAR_10, VAR_11, VAR_3);
    if (VAR_12 == VAR_0)
        FUNC_4(VAR_6, VAR_2, "Key '%s' not found.\n", VAR_10);

    FUNC_1(VAR_10);
    FUNC_1(VAR_11);
    return VAR_12;
}
