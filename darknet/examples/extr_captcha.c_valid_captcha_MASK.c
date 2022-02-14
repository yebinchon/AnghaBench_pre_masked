
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int outputs; int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_12__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_13__ {float* data; } ;
typedef TYPE_3__ image ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__) ;
 char** FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 TYPE_3__ FUNC_6 (char*,int ,int ) ;
 TYPE_1__* FUNC_7 (char*,char*,int ) ;
 float* FUNC_8 (TYPE_1__*,float*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_12 (char*,char*) ;

void FUNC_13(char *VAR_2, char *VAR_3, char *VAR_4)
{
    char **VAR_5 = FUNC_3("/data/captcha/reimgs.labels.list");
    network *VAR_6 = FUNC_7(VAR_2, VAR_3, 0);
    list *VAR_7 = FUNC_4("/data/captcha/reimgs.fg.list");
    char **VAR_8 = (char **)FUNC_5(VAR_7);
    int VAR_9 = VAR_7->size;
    int VAR_10 = VAR_6->outputs;

    FUNC_10(VAR_6, 1);
    FUNC_11(2222222);
    int VAR_11, VAR_12;
    for(VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11){
        if (VAR_11%100 == 0) FUNC_1(VAR_0, "%d\n", VAR_11);
        image VAR_13 = FUNC_6(VAR_8[VAR_11], VAR_6->w, VAR_6->h);
        float *VAR_14 = VAR_13.data;
        float *VAR_15 = FUNC_8(VAR_6, VAR_14);

        int VAR_16 = -1;
        for(VAR_12 = 0; VAR_12 < 13; ++VAR_12){
            if (FUNC_12(VAR_8[VAR_11], VAR_5[VAR_12])) VAR_16 = VAR_12;
        }
        if (VAR_16 == -1){
            FUNC_1(VAR_0, "bad: %s\n", VAR_8[VAR_11]);
            return;
        }
        FUNC_9("%d, ", VAR_16);
        for(VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12){
            if (VAR_12 != 0) FUNC_9(", ");
            FUNC_9("%f", VAR_15[VAR_12]);
        }
        FUNC_9("\n");
        FUNC_0(VAR_1);
        FUNC_2(VAR_13);
        if (VAR_4) break;
    }
}
