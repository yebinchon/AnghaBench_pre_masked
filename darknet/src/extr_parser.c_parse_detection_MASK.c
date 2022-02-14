
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int inputs; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {void* reorg; void* random; void* jitter; void* class_scale; void* noobject_scale; void* object_scale; void* forced; void* coord_scale; void* max_boxes; void* sqrt; void* softmax; } ;
typedef TYPE_2__ detection_layer ;


 TYPE_2__ FUNC_0 (int ,int ,int,int,int,int,int) ;
 void* FUNC_1 (int *,char*,double) ;
 void* FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,char*,int) ;

detection_layer FUNC_4(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_2(VAR_0, "coords", 1);
    int VAR_3 = FUNC_2(VAR_0, "classes", 1);
    int VAR_4 = FUNC_2(VAR_0, "rescore", 0);
    int VAR_5 = FUNC_2(VAR_0, "num", 1);
    int VAR_6 = FUNC_2(VAR_0, "side", 7);
    detection_layer VAR_7 = FUNC_0(VAR_1.batch, VAR_1.inputs, VAR_5, VAR_6, VAR_3, VAR_2, VAR_4);

    VAR_7.softmax = FUNC_2(VAR_0, "softmax", 0);
    VAR_7.sqrt = FUNC_2(VAR_0, "sqrt", 0);

    VAR_7.max_boxes = FUNC_3(VAR_0, "max",90);
    VAR_7.coord_scale = FUNC_1(VAR_0, "coord_scale", 1);
    VAR_7.forced = FUNC_2(VAR_0, "forced", 0);
    VAR_7.object_scale = FUNC_1(VAR_0, "object_scale", 1);
    VAR_7.noobject_scale = FUNC_1(VAR_0, "noobject_scale", 1);
    VAR_7.class_scale = FUNC_1(VAR_0, "class_scale", 1);
    VAR_7.jitter = FUNC_1(VAR_0, "jitter", .2);
    VAR_7.random = FUNC_3(VAR_0, "random", 0);
    VAR_7.reorg = FUNC_3(VAR_0, "reorg", 0);
    return VAR_7;
}
