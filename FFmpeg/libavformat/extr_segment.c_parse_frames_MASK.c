
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 long VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,int ,char*,...) ;
 int* FUNC_4 (int,int) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char*,char**) ;
 long FUNC_7 (char*,char**,int) ;

__attribute__((used)) static int FUNC_8(void *VAR_4, int **VAR_5, int *VAR_6,
                        const char *VAR_7)
{
    char *VAR_8;
    int VAR_9, VAR_10 = 0;
    char *VAR_11 = FUNC_5(VAR_7);
    char *VAR_12 = ((void*)0);

    if (!VAR_11)
        return FUNC_0(VAR_2);



    *VAR_6 = 1;
    for (VAR_8 = VAR_11; *VAR_8; VAR_8++)
        if (*VAR_8 == ',')
            (*VAR_6)++;

    *VAR_5 = FUNC_4(*VAR_6, sizeof(**VAR_5));
    if (!*VAR_5) {
        FUNC_3(VAR_4, VAR_0, "Could not allocate forced frames array\n");
        VAR_10 = FUNC_0(VAR_2); goto end;
    }

    VAR_8 = VAR_11;
    for (VAR_9 = 0; VAR_9 < *VAR_6; VAR_9++) {
        long int VAR_13;
        char *VAR_14;
        char *VAR_15 = FUNC_6(VAR_8, ",", &VAR_12);

        VAR_8 = ((void*)0);
        if (!VAR_15) {
            FUNC_3(VAR_4, VAR_0, "Empty frame specification in frame list %s\n",
                   VAR_7);
            VAR_10 = FUNC_0(VAR_1); goto end;
        }
        VAR_13 = FUNC_7(VAR_15, &VAR_14, 10);
        if (*VAR_14 || VAR_13 <= 0 || VAR_13 >= VAR_3) {
            FUNC_3(VAR_4, VAR_0,
                   "Invalid argument '%s', must be a positive integer <= INT64_MAX\n",
                   VAR_15);
            VAR_10 = FUNC_0(VAR_1); goto end;
        }
        (*VAR_5)[VAR_9] = VAR_13;


        if (VAR_9 && (*VAR_5)[VAR_9-1] > (*VAR_5)[VAR_9]) {
            FUNC_3(VAR_4, VAR_0,
                   "Specified frame %d is greater than the following frame %d\n",
                   (*VAR_5)[VAR_9], (*VAR_5)[VAR_9-1]);
            VAR_10 = FUNC_0(VAR_1); goto end;
        }
    }

end:
    FUNC_2(VAR_11);
    return VAR_10;
}
