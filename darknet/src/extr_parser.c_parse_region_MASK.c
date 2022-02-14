
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ inputs; int h; int w; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {scalar_t__ outputs; float* biases; int map; int softmax_tree; void* bias_match; void* class_scale; void* mask_scale; void* noobject_scale; void* object_scale; void* coord_scale; void* random; void* absolute; void* classfix; void* thresh; void* rescore; void* jitter; void* max_boxes; void* background; void* softmax; void* sqrt; void* log; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int) ;
 float FUNC_1 (char*) ;
 TYPE_2__ FUNC_2 (int ,int ,int ,int,int,int) ;
 void* FUNC_3 (int *,char*,int) ;
 void* FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,char*,int) ;
 char* FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*) ;

layer FUNC_11(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_4(VAR_0, "coords", 4);
    int VAR_3 = FUNC_4(VAR_0, "classes", 20);
    int VAR_4 = FUNC_4(VAR_0, "num", 1);

    layer VAR_5 = FUNC_2(VAR_1.batch, VAR_1.w, VAR_1.h, VAR_4, VAR_3, VAR_2);
    FUNC_0(VAR_5.outputs == VAR_1.inputs);

    VAR_5.log = FUNC_5(VAR_0, "log", 0);
    VAR_5.sqrt = FUNC_5(VAR_0, "sqrt", 0);

    VAR_5.softmax = FUNC_4(VAR_0, "softmax", 0);
    VAR_5.background = FUNC_5(VAR_0, "background", 0);
    VAR_5.max_boxes = FUNC_5(VAR_0, "max",30);
    VAR_5.jitter = FUNC_3(VAR_0, "jitter", .2);
    VAR_5.rescore = FUNC_5(VAR_0, "rescore",0);

    VAR_5.thresh = FUNC_3(VAR_0, "thresh", .5);
    VAR_5.classfix = FUNC_5(VAR_0, "classfix", 0);
    VAR_5.absolute = FUNC_5(VAR_0, "absolute", 0);
    VAR_5.random = FUNC_5(VAR_0, "random", 0);

    VAR_5.coord_scale = FUNC_3(VAR_0, "coord_scale", 1);
    VAR_5.object_scale = FUNC_3(VAR_0, "object_scale", 1);
    VAR_5.noobject_scale = FUNC_3(VAR_0, "noobject_scale", 1);
    VAR_5.mask_scale = FUNC_3(VAR_0, "mask_scale", 1);
    VAR_5.class_scale = FUNC_3(VAR_0, "class_scale", 1);
    VAR_5.bias_match = FUNC_5(VAR_0, "bias_match",0);

    char *VAR_6 = FUNC_6(VAR_0, "tree", 0);
    if (VAR_6) VAR_5.softmax_tree = FUNC_8(VAR_6);
    char *VAR_7 = FUNC_6(VAR_0, "map", 0);
    if (VAR_7) VAR_5.map = FUNC_7(VAR_7);

    char *VAR_8 = FUNC_6(VAR_0, "anchors", 0);
    if(VAR_8){
        int VAR_9 = FUNC_10(VAR_8);
        int VAR_10 = 1;
        int VAR_11;
        for(VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11){
            if (VAR_8[VAR_11] == ',') ++VAR_10;
        }
        for(VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11){
            float VAR_12 = FUNC_1(VAR_8);
            VAR_5.biases[VAR_11] = VAR_12;
            VAR_8 = FUNC_9(VAR_8, ',')+1;
        }
    }
    return VAR_5;
}
