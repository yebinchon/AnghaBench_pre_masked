
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int inputs; } ;
typedef TYPE_1__ network ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 float* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (char*,char*,int ) ;
 float FUNC_6 (float) ;
 float* FUNC_7 (TYPE_1__*,float*) ;
 double FUNC_8 (int,float) ;
 int FUNC_9 (char*,int,float,double,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (char*) ;

void FUNC_11(char *VAR_3, char *VAR_4, char *VAR_5)
{
    char *VAR_6 = FUNC_0(VAR_3);
    FUNC_3(VAR_1, "%s\n", VAR_6);

    network *VAR_7 = FUNC_5(VAR_3, VAR_4, 0);
    int VAR_8 = VAR_7->inputs;

    int VAR_9 = 0;
    int VAR_10 = 1;
    int VAR_11;
    int VAR_12 = FUNC_10(VAR_5);
    float *VAR_13 = FUNC_1(VAR_8, sizeof(float));
    int VAR_14;
    for(VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14){
        VAR_11 = VAR_5[VAR_14];
        VAR_13[(int)VAR_11] = 1;
        FUNC_7(VAR_7, VAR_13);
        VAR_13[(int)VAR_11] = 0;
    }
    float VAR_15 = 0;
    VAR_11 = FUNC_4(VAR_2);
    float VAR_16 = FUNC_6(2);
    while(VAR_11 != VAR_0){
        int VAR_17 = FUNC_4(VAR_2);
        if(VAR_17 == VAR_0) break;
        if(VAR_17 < 0 || VAR_17 >= 255) FUNC_2("Out of range character");
        ++VAR_9;
        if(VAR_17 == ' ' || VAR_17 == '\n' || VAR_17 == '\t') ++VAR_10;
        VAR_13[VAR_11] = 1;
        float *VAR_18 = FUNC_7(VAR_7, VAR_13);
        VAR_13[VAR_11] = 0;
        VAR_15 += FUNC_6(VAR_18[VAR_17])/VAR_16;
        VAR_11 = VAR_17;
        FUNC_9("%d BPC: %4.4f   Perplexity: %4.4f    Word Perplexity: %4.4f\n", VAR_9, -VAR_15/VAR_9, FUNC_8(2, -VAR_15/VAR_9), FUNC_8(2, -VAR_15/VAR_10));
    }
}
