
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int w; int h; } ;
typedef TYPE_1__ network ;
struct TYPE_20__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_21__ {int w; int h; scalar_t__ data; } ;
typedef TYPE_3__ image ;


 TYPE_3__ FUNC_0 (TYPE_3__,int,int,int,int) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (TYPE_2__*) ;
 char** FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 TYPE_3__ FUNC_6 (char*,int ,int ) ;
 TYPE_1__* FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (float*,int) ;
 float* FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (TYPE_2__*,char*,int) ;
 char* FUNC_11 (TYPE_2__*,char*,char*) ;
 int FUNC_12 (char*,char*) ;
 TYPE_2__* FUNC_13 (char*) ;
 TYPE_3__ FUNC_14 (TYPE_3__,int) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

void FUNC_18(char *VAR_0, char *VAR_1, char *VAR_2)
{
    int VAR_3;
    network *VAR_4 = FUNC_7(VAR_1, VAR_2, 0);
    FUNC_15(VAR_4, 1);
    FUNC_16(FUNC_17(0));

    list *VAR_5 = FUNC_13(VAR_0);

    char *VAR_6 = FUNC_11(VAR_5, "names", "data/labels.list");
    char *VAR_7 = FUNC_11(VAR_5, "test", "data/train.list");
    int VAR_8 = FUNC_10(VAR_5, "classes", 2);

    char **VAR_9 = FUNC_3(VAR_6);
    list *VAR_10 = FUNC_4(VAR_7);

    char **VAR_11 = (char **)FUNC_5(VAR_10);
    int VAR_12 = VAR_10->size;
    FUNC_2(VAR_10);

    for(VAR_3 = 0; VAR_3 < VAR_12; ++VAR_3){
        image VAR_13 = FUNC_6(VAR_11[VAR_3], 0, 0);
        image VAR_14 = FUNC_14(VAR_13, VAR_4->w);
        image VAR_15 = FUNC_0(VAR_14, (VAR_14.w - VAR_4->w)/2, (VAR_14.h - VAR_4->h)/2, VAR_4->w, VAR_4->h);
        float *VAR_16 = FUNC_9(VAR_4, VAR_15.data);

        if(VAR_14.data != VAR_13.data) FUNC_1(VAR_14);
        FUNC_1(VAR_13);
        FUNC_1(VAR_15);
        int VAR_17 = FUNC_8(VAR_16, VAR_8);

        FUNC_12("%s\n", VAR_9[VAR_17]);
    }
}
