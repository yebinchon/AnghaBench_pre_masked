
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {double learning_rate; double momentum; double decay; int* seen; int max_batches; } ;
typedef TYPE_1__ network ;
typedef int data ;
typedef scalar_t__ clock_t ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void**,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 char** FUNC_8 (char*) ;
 int FUNC_9 () ;
 TYPE_1__* FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (TYPE_1__*,char*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*,char*,char*,char*,...) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 float FUNC_17 (TYPE_1__*,int ,int) ;

void FUNC_18(char *VAR_0, char *VAR_1)
{
    FUNC_15(FUNC_16(0));
    float VAR_2 = -1;
    char *VAR_3 = FUNC_0(VAR_0);
    FUNC_11("%s\n", VAR_3);
    network *VAR_4 = FUNC_10(VAR_0, VAR_1, 0);
    FUNC_11("Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_4->learning_rate, VAR_4->momentum, VAR_4->decay);

    char *VAR_5 = "/home/pjreddie/backup/";
    int VAR_6 = 10;
    int VAR_7 = 50000;

    char **VAR_8 = FUNC_8("data/cifar/labels.txt");
    int VAR_9 = (*VAR_4->seen)/VAR_7;
    data VAR_10 = FUNC_9();
    while(FUNC_6(VAR_4) < VAR_4->max_batches || VAR_4->max_batches == 0){
        clock_t VAR_11=FUNC_1();

        float VAR_12 = FUNC_17(VAR_4, VAR_10, 1);
        if(VAR_2 == -1) VAR_2 = VAR_12;
        VAR_2 = VAR_2*.95 + VAR_12*.05;
        FUNC_11("%ld, %.3f: %f, %f avg, %f rate, %lf seconds, %ld images\n", FUNC_6(VAR_4), (float)(*VAR_4->seen)/VAR_7, VAR_12, VAR_2, FUNC_7(VAR_4), FUNC_13(FUNC_1()-VAR_11), *VAR_4->seen);
        if(*VAR_4->seen/VAR_7 > VAR_9){
            VAR_9 = *VAR_4->seen/VAR_7;
            char VAR_13[256];
            FUNC_14(VAR_13, "%s/%s_%d.weights",VAR_5,VAR_3, VAR_9);
            FUNC_12(VAR_4, VAR_13);
        }
        if(FUNC_6(VAR_4)%100 == 0){
            char VAR_14[256];
            FUNC_14(VAR_14, "%s/%s.backup",VAR_5,VAR_3);
            FUNC_12(VAR_4, VAR_14);
        }
    }
    char VAR_15[256];
    FUNC_14(VAR_15, "%s/%s.weights", VAR_5, VAR_3);
    FUNC_12(VAR_4, VAR_15);

    FUNC_4(VAR_4);
    FUNC_5((void**)VAR_8, VAR_6);
    FUNC_2(VAR_3);
    FUNC_3(VAR_10);
}
