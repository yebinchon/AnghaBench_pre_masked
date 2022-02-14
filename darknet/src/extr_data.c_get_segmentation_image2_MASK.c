
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* data; } ;
typedef TYPE_1__ image ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int *,char*,int*,char*) ;
 int FUNC_7 (TYPE_1__,int*,int) ;
 TYPE_1__ FUNC_8 (int,int,int) ;
 int FUNC_9 (TYPE_1__,TYPE_1__,int) ;
 int* FUNC_10 (char*,int*,int ) ;

image FUNC_11(char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    char VAR_4[4096];
    FUNC_2(VAR_0, "images", "mask", VAR_4);
    FUNC_2(VAR_4, "JPEGImages", "mask", VAR_4);
    FUNC_2(VAR_4, ".jpg", ".txt", VAR_4);
    FUNC_2(VAR_4, ".JPG", ".txt", VAR_4);
    FUNC_2(VAR_4, ".JPEG", ".txt", VAR_4);
    image VAR_5 = FUNC_8(VAR_1, VAR_2, VAR_3+1);
    int VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_1*VAR_2; ++VAR_6){
        VAR_5.data[VAR_1*VAR_2*VAR_3 + VAR_6] = 1;
    }
    FILE *VAR_7 = FUNC_3(VAR_4, "r");
    if(!VAR_7) FUNC_1(VAR_4);
    char VAR_8[32788];
    int VAR_9;
    image VAR_10 = FUNC_8(VAR_1, VAR_2, 1);
    while(FUNC_6(VAR_7, "%d %s", &VAR_9, VAR_8) == 2){
        int VAR_11 = 0;
        int *VAR_12 = FUNC_10(VAR_8, &VAR_11, 0);
        FUNC_7(VAR_10, VAR_12, VAR_11);
        FUNC_9(VAR_10, VAR_5, VAR_9);
        for(VAR_6 = 0; VAR_6 < VAR_1*VAR_2; ++VAR_6){
            if(VAR_10.data[VAR_6]) VAR_5.data[VAR_1*VAR_2*VAR_3 + VAR_6] = 0;
        }
        FUNC_4(VAR_12);
    }

    FUNC_0(VAR_7);
    FUNC_5(VAR_10);
    return VAR_5;
}
