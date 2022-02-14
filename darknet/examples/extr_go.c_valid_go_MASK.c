
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double learning_rate; double momentum; double decay; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int n; char** data; } ;
typedef TYPE_2__ moves ;


 char* FUNC_0 (char*) ;
 float* FUNC_1 (int,int) ;
 TYPE_2__ FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (float*,int) ;
 int FUNC_5 (TYPE_1__*,float*,float*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,float*) ;
 int FUNC_10 (int ) ;

void FUNC_11(char *VAR_0, char *VAR_1, int VAR_2, char *VAR_3)
{
    FUNC_8(FUNC_10(0));
    char *VAR_4 = FUNC_0(VAR_0);
    FUNC_6("%s\n", VAR_4);
    network *VAR_5 = FUNC_3(VAR_0, VAR_1, 0);
    FUNC_7(VAR_5, 1);
    FUNC_6("Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_5->learning_rate, VAR_5->momentum, VAR_5->decay);

    float *VAR_6 = FUNC_1(19*19*3, sizeof(float));
    float *VAR_7 = FUNC_1(19*19+2, sizeof(float));

    moves VAR_8 = FUNC_2(VAR_3);

    int VAR_9 = VAR_8.n;
    int VAR_10,VAR_11;
    int VAR_12 = 0;
    for (VAR_10 = 0; VAR_10 <VAR_9; ++VAR_10) {
        char *VAR_13 = VAR_8.data[VAR_10];
        int VAR_14 = VAR_13[0] - '0';

        int VAR_15 = VAR_13[2];
        int VAR_16 = VAR_13[3];
        int VAR_17 = VAR_16 + 19*VAR_15;
        FUNC_9(VAR_13+4, VAR_6);
        if(VAR_14 > 0) for(VAR_11 = 0; VAR_11 < 19*19; ++VAR_11) VAR_6[19*19*2 + VAR_11] = 1;
        FUNC_5(VAR_5, VAR_6, VAR_7, VAR_2);
        int VAR_18 = FUNC_4(VAR_7, 19*19+1);
        if(VAR_18 == VAR_17) ++VAR_12;
        FUNC_6("%d Accuracy %f\n", VAR_10, (float) VAR_12/(VAR_10+1));
    }
}
