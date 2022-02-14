
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ inputs; int h; int w; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {scalar_t__ outputs; float* biases; int map; void* random; void* truth_thresh; void* ignore_thresh; void* jitter; void* max_boxes; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int) ;
 float FUNC_1 (char*) ;
 TYPE_2__ FUNC_2 (int ,int ,int ,int,int,int*,int) ;
 void* FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,char*,int) ;
 char* FUNC_6 (int *,char*,int ) ;
 int* FUNC_7 (char*,int*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;

layer FUNC_11(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_4(VAR_0, "classes", 20);
    int VAR_3 = FUNC_4(VAR_0, "num", 1);
    int VAR_4 = VAR_3;

    char *VAR_5 = FUNC_6(VAR_0, "mask", 0);
    int *VAR_6 = FUNC_7(VAR_5, &VAR_4);
    layer VAR_7 = FUNC_2(VAR_1.batch, VAR_1.w, VAR_1.h, VAR_4, VAR_3, VAR_6, VAR_2);
    FUNC_0(VAR_7.outputs == VAR_1.inputs);

    VAR_7.max_boxes = FUNC_5(VAR_0, "max",90);
    VAR_7.jitter = FUNC_3(VAR_0, "jitter", .2);

    VAR_7.ignore_thresh = FUNC_3(VAR_0, "ignore_thresh", .5);
    VAR_7.truth_thresh = FUNC_3(VAR_0, "truth_thresh", 1);
    VAR_7.random = FUNC_5(VAR_0, "random", 0);

    char *VAR_8 = FUNC_6(VAR_0, "map", 0);
    if (VAR_8) VAR_7.map = FUNC_8(VAR_8);

    VAR_5 = FUNC_6(VAR_0, "anchors", 0);
    if(VAR_5){
        int VAR_9 = FUNC_10(VAR_5);
        int VAR_10 = 1;
        int VAR_11;
        for(VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11){
            if (VAR_5[VAR_11] == ',') ++VAR_10;
        }
        for(VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11){
            float VAR_12 = FUNC_1(VAR_5);
            VAR_7.biases[VAR_11] = VAR_12;
            VAR_5 = FUNC_9(VAR_5, ',')+1;
        }
    }
    return VAR_7;
}
