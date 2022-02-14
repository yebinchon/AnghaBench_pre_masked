
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,int ,char*,...) ;
 scalar_t__* FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__*,char*,int) ;
 char* FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_8(void *VAR_3, int64_t **VAR_4, int *VAR_5,
                       const char *VAR_6)
{
    char *VAR_7;
    int VAR_8, VAR_9 = 0;
    char *VAR_10 = FUNC_6(VAR_6);
    char *VAR_11 = ((void*)0);

    if (!VAR_10)
        return FUNC_0(VAR_2);



    *VAR_5 = 1;
    for (VAR_7 = VAR_10; *VAR_7; VAR_7++)
        if (*VAR_7 == ',')
            (*VAR_5)++;

    *VAR_4 = FUNC_4(*VAR_5, sizeof(**VAR_4));
    if (!*VAR_4) {
        FUNC_3(VAR_3, VAR_0, "Could not allocate forced times array\n");
        VAR_9 = FUNC_0(VAR_2); goto end;
    }

    VAR_7 = VAR_10;
    for (VAR_8 = 0; VAR_8 < *VAR_5; VAR_8++) {
        int64_t VAR_12;
        char *VAR_13 = FUNC_7(VAR_7, ",", &VAR_11);
        VAR_7 = ((void*)0);

        if (!VAR_13 || !VAR_13[0]) {
            FUNC_3(VAR_3, VAR_0, "Empty time specification in times list %s\n",
                   VAR_6);
            VAR_9 = FUNC_0(VAR_1); goto end;
        }

        VAR_9 = FUNC_5(&VAR_12, VAR_13, 1);
        if (VAR_9 < 0) {
            FUNC_3(VAR_3, VAR_0,
                   "Invalid time duration specification '%s' in times list %s\n", VAR_13, VAR_6);
            VAR_9 = FUNC_0(VAR_1); goto end;
        }
        (*VAR_4)[VAR_8] = VAR_12;


        if (VAR_8 && (*VAR_4)[VAR_8-1] > (*VAR_4)[VAR_8]) {
            FUNC_3(VAR_3, VAR_0,
                   "Specified time %f is greater than the following time %f\n",
                   (float)((*VAR_4)[VAR_8])/1000000, (float)((*VAR_4)[VAR_8-1])/1000000);
            VAR_9 = FUNC_0(VAR_1); goto end;
        }
    }

end:
    FUNC_2(VAR_10);
    return VAR_9;
}
