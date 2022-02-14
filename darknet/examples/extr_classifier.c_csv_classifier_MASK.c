
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int outputs; int hierarchy; int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_17__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_18__ {int data; } ;
typedef TYPE_3__ image ;


 int* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,double,int,int) ;
 int FUNC_2 (TYPE_3__) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (char*) ;
 int FUNC_5 (float*,int ,int ,int,int) ;
 TYPE_3__ FUNC_6 (TYPE_3__,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_3__ FUNC_8 (char*,int ,int ) ;
 TYPE_1__* FUNC_9 (char*,char*,int ) ;
 float* FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_2__*,char*,int) ;
 char* FUNC_12 (TYPE_2__*,char*,char*) ;
 int FUNC_13 (char*,...) ;
 TYPE_2__* FUNC_14 (char*) ;
 int FUNC_15 (int ) ;
 int VAR_0 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (float*,int ,int,int*) ;
 double FUNC_18 () ;

void FUNC_19(char *VAR_1, char *VAR_2, char *VAR_3)
{
    int VAR_4,VAR_5;
    network *VAR_6 = FUNC_9(VAR_2, VAR_3, 0);
    FUNC_15(FUNC_16(0));

    list *VAR_7 = FUNC_14(VAR_1);

    char *VAR_8 = FUNC_12(VAR_7, "test", "data/test.list");
    int VAR_9 = FUNC_11(VAR_7, "top", 1);

    list *VAR_10 = FUNC_4(VAR_8);

    char **VAR_11 = (char **)FUNC_7(VAR_10);
    int VAR_12 = VAR_10->size;
    FUNC_3(VAR_10);
    int *VAR_13 = FUNC_0(VAR_9, sizeof(int));

    for(VAR_4 = 0; VAR_4 < VAR_12; ++VAR_4){
        double VAR_14 = FUNC_18();
        char *VAR_15 = VAR_11[VAR_4];
        image VAR_16 = FUNC_8(VAR_15, 0, 0);
        image VAR_17 = FUNC_6(VAR_16, VAR_6->w, VAR_6->h);
        float *VAR_18 = FUNC_10(VAR_6, VAR_17.data);
        if(VAR_6->hierarchy) FUNC_5(VAR_18, VAR_6->outputs, VAR_6->hierarchy, 1, 1);
        FUNC_17(VAR_18, VAR_6->outputs, VAR_9, VAR_13);

        FUNC_13("%s", VAR_15);
        for(VAR_5 = 0; VAR_5 < VAR_9; ++VAR_5){
            FUNC_13("\t%d", VAR_13[VAR_5]);
        }
        FUNC_13("\n");

        FUNC_2(VAR_16);
        FUNC_2(VAR_17);

        FUNC_1(VAR_0, "%lf seconds, %d images, %d total\n", FUNC_18() - VAR_14, VAR_4+1, VAR_12);
    }
}
