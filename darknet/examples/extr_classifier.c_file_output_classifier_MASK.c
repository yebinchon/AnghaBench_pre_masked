
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int w; int h; int hierarchy; int outputs; } ;
typedef TYPE_1__ network ;
struct TYPE_19__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_20__ {int w; int h; scalar_t__ data; } ;
typedef TYPE_3__ image ;


 TYPE_3__ FUNC_0 (TYPE_3__,int,int,int,int) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (char*) ;
 int FUNC_4 (float*,int ,int ,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 TYPE_3__ FUNC_6 (char*,int ,int ) ;
 TYPE_1__* FUNC_7 (char*,char*,int ) ;
 float* FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,char*,int) ;
 int FUNC_10 (char*,...) ;
 TYPE_2__* FUNC_11 (char*) ;
 TYPE_3__ FUNC_12 (TYPE_3__,int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

void FUNC_16(char *VAR_0, char *VAR_1, char *VAR_2, char *VAR_3)
{
    int VAR_4,VAR_5;
    network *VAR_6 = FUNC_7(VAR_1, VAR_2, 0);
    FUNC_13(VAR_6, 1);
    FUNC_14(FUNC_15(0));

    list *VAR_7 = FUNC_11(VAR_0);


    int VAR_8 = FUNC_9(VAR_7, "classes", 2);

    list *VAR_9 = FUNC_3(VAR_3);

    char **VAR_10 = (char **)FUNC_5(VAR_9);
    int VAR_11 = VAR_9->size;
    FUNC_2(VAR_9);

    for(VAR_4 = 0; VAR_4 < VAR_11; ++VAR_4){
        image VAR_12 = FUNC_6(VAR_10[VAR_4], 0, 0);
        image VAR_13 = FUNC_12(VAR_12, VAR_6->w);
        image VAR_14 = FUNC_0(VAR_13, (VAR_13.w - VAR_6->w)/2, (VAR_13.h - VAR_6->h)/2, VAR_6->w, VAR_6->h);

        float *VAR_15 = FUNC_8(VAR_6, VAR_14.data);
        if(VAR_6->hierarchy) FUNC_4(VAR_15, VAR_6->outputs, VAR_6->hierarchy, 0, 1);

        if(VAR_13.data != VAR_12.data) FUNC_1(VAR_13);
        FUNC_1(VAR_12);
        FUNC_1(VAR_14);

        FUNC_10("%s", VAR_10[VAR_4]);
        for(VAR_5 = 0; VAR_5 < VAR_8; ++VAR_5){
            FUNC_10("\t%g", VAR_15[VAR_5]);
        }
        FUNC_10("\n");
    }
}
