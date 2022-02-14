
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int learning_rate; double momentum; double decay; int* seen; int max_batches; int batch; int subdivisions; } ;
typedef TYPE_1__ network ;
struct TYPE_14__ {int n; } ;
typedef TYPE_2__ moves ;
typedef int data ;


 char* FUNC_0 (char*) ;
 TYPE_1__** FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_2__ FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_2__,int) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (char*,char*,char*,char*,...) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 float FUNC_17 (TYPE_1__*,int ) ;
 float FUNC_18 (TYPE_1__**,int,int ,int) ;
 double FUNC_19 () ;

void FUNC_20(char *VAR_0, char *VAR_1, char *VAR_2, int *VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    float VAR_7 = -1;
    char *VAR_8 = FUNC_0(VAR_0);
    FUNC_10("%s\n", VAR_8);
    FUNC_10("%d\n", VAR_4);
    network **VAR_9 = FUNC_1(VAR_4, sizeof(network*));

    FUNC_15(FUNC_16(0));
    int VAR_10 = FUNC_11();
    for(VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6){
        FUNC_15(VAR_10);



        VAR_9[VAR_6] = FUNC_9(VAR_0, VAR_1, VAR_5);
        VAR_9[VAR_6]->learning_rate *= VAR_4;
    }
    network *VAR_11 = VAR_9[0];
    FUNC_10("Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_11->learning_rate, VAR_11->momentum, VAR_11->decay);

    char *VAR_12 = "/home/pjreddie/backup/";

    char VAR_13[256];
    moves VAR_14 = FUNC_8(VAR_2);


    int VAR_15 = VAR_14.n;
    FUNC_10("Moves: %d\n", VAR_15);
    int VAR_16 = (*VAR_11->seen)/VAR_15;
    while(FUNC_6(VAR_11) < VAR_11->max_batches || VAR_11->max_batches == 0){
        double VAR_17=FUNC_19();

        data VAR_18 = FUNC_12(VAR_14, VAR_11->batch*VAR_11->subdivisions*VAR_4);
        FUNC_10("Loaded: %lf seconds\n", FUNC_19() - VAR_17);
        VAR_17=FUNC_19();

        float VAR_19 = 0;







        VAR_19 = FUNC_17(VAR_11, VAR_18);

        FUNC_4(VAR_18);

        if(VAR_7 == -1) VAR_7 = VAR_19;
        VAR_7 = VAR_7*.95 + VAR_19*.05;
        FUNC_10("%ld, %.3f: %f, %f avg, %f rate, %lf seconds, %ld images\n", FUNC_6(VAR_11), (float)(*VAR_11->seen)/VAR_15, VAR_19, VAR_7, FUNC_7(VAR_11), FUNC_19()-VAR_17, *VAR_11->seen);
        if(*VAR_11->seen/VAR_15 > VAR_16){
            VAR_16 = *VAR_11->seen/VAR_15;
            char VAR_20[256];
            FUNC_14(VAR_20, "%s/%s_%d.weights", VAR_12,VAR_8, VAR_16);
            FUNC_13(VAR_11, VAR_20);

        }
        if(FUNC_6(VAR_11)%1000 == 0){
            char VAR_21[256];
            FUNC_14(VAR_21, "%s/%s.backup",VAR_12,VAR_8);
            FUNC_13(VAR_11, VAR_21);
        }
        if(FUNC_6(VAR_11)%10000 == 0){
            char VAR_22[256];
            FUNC_14(VAR_22, "%s/%s_%ld.backup",VAR_12,VAR_8,FUNC_6(VAR_11));
            FUNC_13(VAR_11, VAR_22);
        }
    }
    FUNC_14(VAR_13, "%s/%s.weights", VAR_12, VAR_8);
    FUNC_13(VAR_11, VAR_13);

    FUNC_5(VAR_11);
    FUNC_3(VAR_8);
}
