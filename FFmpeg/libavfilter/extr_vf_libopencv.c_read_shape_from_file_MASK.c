
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*,char**,size_t*,int ,void*) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int ,char*,...) ;
 char* FUNC_7 (int) ;
 int* FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(int *VAR_6, int *VAR_7, int **VAR_8, const char *VAR_9,
                                void *VAR_10)
{
    uint8_t *VAR_11, *VAR_12, *VAR_13;
    size_t VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18;

    if ((VAR_15 = FUNC_2(VAR_9, &VAR_11, &VAR_14, 0, VAR_10)) < 0)
        return VAR_15;


    VAR_18 = 0;
    for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
        if (VAR_11[VAR_16] == '\n') {
            if (*VAR_7 == VAR_4) {
                FUNC_6(VAR_10, VAR_2, "Overflow on the number of rows in the file\n");
                VAR_15 = VAR_0;
                goto end;
            }
            ++(*VAR_7);
            *VAR_6 = FUNC_1(*VAR_6, VAR_18);
            VAR_18 = 0;
        } else if (VAR_18 == VAR_4) {
            FUNC_6(VAR_10, VAR_2, "Overflow on the number of columns in the file\n");
            return VAR_0;
        }
        VAR_18++;
    }
    if (*VAR_7 > (VAR_5 / sizeof(int) / *VAR_6)) {
        FUNC_6(VAR_10, VAR_2, "File with size %dx%d is too big\n",
               *VAR_7, *VAR_6);
        VAR_15 = VAR_0;
        goto end;
    }
    if (!(*VAR_8 = FUNC_8(sizeof(int) * *VAR_7, *VAR_6))) {
        VAR_15 = FUNC_0(VAR_3);
        goto end;
    }


    VAR_12 = VAR_11;
    VAR_13 = VAR_11 + VAR_14-1;
    for (VAR_16 = 0; VAR_16 < *VAR_7; VAR_16++) {
        for (VAR_17 = 0;; VAR_17++) {
            if (VAR_12 > VAR_13 || *VAR_12 == '\n') {
                VAR_12++;
                break;
            } else
                (*VAR_8)[*VAR_6*VAR_16 + VAR_17] = !!FUNC_5(*(VAR_12++));
        }
    }

end:
    FUNC_3(VAR_11, VAR_14);
    return 0;
}
