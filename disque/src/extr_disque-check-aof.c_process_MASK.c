
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,long*) ;
 int FUNC_6 (int *,char**) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

off_t FUNC_9(FILE *VAR_1) {
    long VAR_2;
    off_t VAR_3 = 0;
    int VAR_4, VAR_5 = 0;
    char *VAR_6;

    while(1) {
        if (!VAR_5) VAR_3 = FUNC_3(VAR_1);
        if (!FUNC_5(VAR_1, &VAR_2)) break;

        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
            if (!FUNC_6(VAR_1,&VAR_6)) break;
            if (VAR_4 == 0) {
                if (FUNC_7(VAR_6, "multi") == 0) {
                    if (VAR_5++) {
                        FUNC_0("Unexpected MULTI");
                        break;
                    }
                } else if (FUNC_7(VAR_6, "exec") == 0) {
                    if (--VAR_5) {
                        FUNC_0("Unexpected EXEC");
                        break;
                    }
                }
            }
            FUNC_2(VAR_6);
        }


        if (VAR_4 < VAR_2) {
            if (VAR_6) FUNC_2(VAR_6);
            break;
        }
    }

    if (FUNC_1(VAR_1) && VAR_5 && FUNC_8(VAR_0) == 0) {
        FUNC_0("Reached EOF before reading EXEC for MULTI");
    }
    if (FUNC_8(VAR_0) > 0) {
        FUNC_4("%s\n", VAR_0);
    }
    return VAR_3;
}
