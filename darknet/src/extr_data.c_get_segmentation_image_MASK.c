
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int image ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int*,char*) ;
 int FUNC_7 (int ,int*,int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int ,int ,int) ;
 int* FUNC_10 (char*,int*,int ) ;

image FUNC_11(char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    char VAR_4[4096];
    FUNC_2(VAR_0, "images", "mask", VAR_4);
    FUNC_2(VAR_4, "JPEGImages", "mask", VAR_4);
    FUNC_2(VAR_4, ".jpg", ".txt", VAR_4);
    FUNC_2(VAR_4, ".JPG", ".txt", VAR_4);
    FUNC_2(VAR_4, ".JPEG", ".txt", VAR_4);
    image VAR_5 = FUNC_8(VAR_1, VAR_2, VAR_3);
    FILE *VAR_6 = FUNC_3(VAR_4, "r");
    if(!VAR_6) FUNC_1(VAR_4);
    char VAR_7[32788];
    int VAR_8;
    image VAR_9 = FUNC_8(VAR_1, VAR_2, 1);
    while(FUNC_6(VAR_6, "%d %s", &VAR_8, VAR_7) == 2){
        int VAR_10 = 0;
        int *VAR_11 = FUNC_10(VAR_7, &VAR_10, 0);
        FUNC_7(VAR_9, VAR_11, VAR_10);
        FUNC_9(VAR_9, VAR_5, VAR_8);
        FUNC_4(VAR_11);
    }

    FUNC_0(VAR_6);
    FUNC_5(VAR_9);
    return VAR_5;
}
