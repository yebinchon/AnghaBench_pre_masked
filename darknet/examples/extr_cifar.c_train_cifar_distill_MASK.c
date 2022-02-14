
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {double learning_rate; double momentum; double decay; int* seen; int max_batches; } ;
typedef TYPE_1__ network ;
typedef int matrix ;
struct TYPE_13__ {int y; } ;
typedef TYPE_2__ data ;
typedef scalar_t__ clock_t ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (void**,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 char** FUNC_9 (char*) ;
 TYPE_2__ FUNC_10 () ;
 TYPE_1__* FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*,char*,char*,char*,...) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 float FUNC_20 (TYPE_1__*,TYPE_2__,int) ;

void FUNC_21(char *VAR_0, char *VAR_1)
{
    FUNC_18(FUNC_19(0));
    float VAR_2 = -1;
    char *VAR_3 = FUNC_0(VAR_0);
    FUNC_13("%s\n", VAR_3);
    network *VAR_4 = FUNC_11(VAR_0, VAR_1, 0);
    FUNC_13("Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_4->learning_rate, VAR_4->momentum, VAR_4->decay);

    char *VAR_5 = "/home/pjreddie/backup/";
    int VAR_6 = 10;
    int VAR_7 = 50000;

    char **VAR_8 = FUNC_9("data/cifar/labels.txt");
    int VAR_9 = (*VAR_4->seen)/VAR_7;

    data VAR_10 = FUNC_10();
    matrix VAR_11 = FUNC_2("results/ensemble.csv");

    float VAR_12 = .9;
    FUNC_15(VAR_11, VAR_12);
    FUNC_15(VAR_10.y, 1. - VAR_12);
    FUNC_12(VAR_11, VAR_10.y);

    while(FUNC_7(VAR_4) < VAR_4->max_batches || VAR_4->max_batches == 0){
        clock_t VAR_13=FUNC_1();

        float VAR_14 = FUNC_20(VAR_4, VAR_10, 1);
        if(VAR_2 == -1) VAR_2 = VAR_14;
        VAR_2 = VAR_2*.95 + VAR_14*.05;
        FUNC_13("%ld, %.3f: %f, %f avg, %f rate, %lf seconds, %ld images\n", FUNC_7(VAR_4), (float)(*VAR_4->seen)/VAR_7, VAR_14, VAR_2, FUNC_8(VAR_4), FUNC_16(FUNC_1()-VAR_13), *VAR_4->seen);
        if(*VAR_4->seen/VAR_7 > VAR_9){
            VAR_9 = *VAR_4->seen/VAR_7;
            char VAR_15[256];
            FUNC_17(VAR_15, "%s/%s_%d.weights",VAR_5,VAR_3, VAR_9);
            FUNC_14(VAR_4, VAR_15);
        }
        if(FUNC_7(VAR_4)%100 == 0){
            char VAR_16[256];
            FUNC_17(VAR_16, "%s/%s.backup",VAR_5,VAR_3);
            FUNC_14(VAR_4, VAR_16);
        }
    }
    char VAR_17[256];
    FUNC_17(VAR_17, "%s/%s.weights", VAR_5, VAR_3);
    FUNC_14(VAR_4, VAR_17);

    FUNC_5(VAR_4);
    FUNC_6((void**)VAR_8, VAR_6);
    FUNC_3(VAR_3);
    FUNC_4(VAR_10);
}
