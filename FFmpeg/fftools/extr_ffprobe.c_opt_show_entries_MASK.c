
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const**,char*) ;
 int FUNC_5 (int *,int ,char*,char const*,...) ;
 int FUNC_6 (char*,int,int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_4, const char *VAR_5, const char *VAR_6)
{
    const char *VAR_7 = VAR_6;
    int VAR_8 = 0;

    while (*VAR_7) {
        AVDictionary *VAR_9 = ((void*)0);
        char *VAR_10 = FUNC_4(&VAR_7, "=:");
        int VAR_11 = 0;

        if (!VAR_10) {
            FUNC_5(((void*)0), VAR_1,
                   "Missing section name for option '%s'\n", VAR_5);
            return FUNC_0(VAR_3);
        }

        if (*VAR_7 == '=') {
            VAR_7++;
            while (*VAR_7 && *VAR_7 != ':') {
                char *VAR_12 = FUNC_4(&VAR_7, ",:");
                if (!VAR_12)
                    break;
                FUNC_5(((void*)0), VAR_2,
                       "Adding '%s' to the entries to show in section '%s'\n",
                       VAR_12, VAR_10);
                FUNC_2(&VAR_9, VAR_12, "", VAR_0);
                if (*VAR_7 == ',')
                    VAR_7++;
            }
        } else {
            VAR_11 = 1;
        }

        VAR_8 = FUNC_6(VAR_10, VAR_11, VAR_9);
        if (VAR_8 == 0) {
            FUNC_5(((void*)0), VAR_1, "No match for section '%s'\n", VAR_10);
            VAR_8 = FUNC_0(VAR_3);
        }
        FUNC_1(&VAR_9);
        FUNC_3(VAR_10);

        if (VAR_8 <= 0)
            break;
        if (*VAR_7)
            VAR_7++;
    }

    return VAR_8;
}
