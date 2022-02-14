
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int** vals; } ;
typedef TYPE_1__ matrix ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int*) ;
 TYPE_1__ FUNC_4 (int,int) ;

matrix FUNC_5(char **VAR_0, int VAR_1, int VAR_2)
{
    matrix VAR_3 = FUNC_4(VAR_1, VAR_2);
    int VAR_4;

    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        char VAR_5[4096];
        FUNC_1(VAR_0[VAR_4], "images", "labels", VAR_5);
        FUNC_1(VAR_5, ".jpg", ".txt", VAR_5);
        FILE *VAR_6 = FUNC_2(VAR_5, "r");
        if (!VAR_6) continue;

        int VAR_7;
        while(FUNC_3(VAR_6, "%d", &VAR_7) == 1){
            if(VAR_7 < VAR_2){
                VAR_3.vals[VAR_4][VAR_7] = 1;
            }
        }
        FUNC_0(VAR_6);
    }

    return VAR_3;
}
