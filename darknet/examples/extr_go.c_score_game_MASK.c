
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (float*,int *) ;
 int FUNC_8 (char*,char*,char*,float*) ;
 int VAR_0 ;

float FUNC_9(float *VAR_1)
{
    int VAR_2;
    FILE *VAR_3 = FUNC_2("game.txt", "w");
    int VAR_4 = FUNC_7(VAR_1, VAR_3);
    FUNC_3(*VAR_3, "final_score\n");
    FUNC_0(VAR_3);
    FILE *VAR_5 = FUNC_6("./gnugo --mode gtp < game.txt", "r");
    for(VAR_2 = 0; VAR_2 < VAR_4; ++VAR_2){
        FUNC_4(FUNC_1(VAR_5));
        FUNC_4(FUNC_1(VAR_5));
    }
    char *VAR_6 = 0;
    float VAR_7 = 0;
    char VAR_8 = 0;
    while((VAR_6 = FUNC_1(VAR_5))){
        FUNC_3(VAR_0, "%s  \t", VAR_6);
        int VAR_9 = FUNC_8(VAR_6, "= %c+%f", &VAR_8, &VAR_7);
        FUNC_4(VAR_6);
        if (VAR_9 == 2) break;
    }
    if(VAR_8 == 'W') VAR_7 = -VAR_7;
    FUNC_5(VAR_5);
    return VAR_7;
}
