
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int index; int batch; } ;
typedef TYPE_1__ size_params ;
struct TYPE_10__ {scalar_t__ out_w; scalar_t__ out_h; scalar_t__ out_c; } ;
typedef TYPE_2__ route_layer ;
struct TYPE_11__ {TYPE_4__* layers; } ;
typedef TYPE_3__ network ;
typedef int list ;
struct TYPE_12__ {int outputs; scalar_t__ out_w; scalar_t__ out_h; scalar_t__ out_c; } ;
typedef TYPE_4__ convolutional_layer ;


 int FUNC_0 (char*) ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 TYPE_2__ FUNC_3 (int,int,int*,int*) ;
 char* FUNC_4 (int *,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

route_layer FUNC_7(list *VAR_0, size_params VAR_1, network *VAR_2)
{
    char *VAR_3 = FUNC_4(VAR_0, "layers");
    int VAR_4 = FUNC_6(VAR_3);
    if(!VAR_3) FUNC_2("Route Layer must specify input layers");
    int VAR_5 = 1;
    int VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6){
        if (VAR_3[VAR_6] == ',') ++VAR_5;
    }

    int *VAR_7 = FUNC_1(VAR_5, sizeof(int));
    int *VAR_8 = FUNC_1(VAR_5, sizeof(int));
    for(VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6){
        int VAR_9 = FUNC_0(VAR_3);
        VAR_3 = FUNC_5(VAR_3, ',')+1;
        if(VAR_9 < 0) VAR_9 = VAR_1.index + VAR_9;
        VAR_7[VAR_6] = VAR_9;
        VAR_8[VAR_6] = VAR_2->layers[VAR_9].outputs;
    }
    int VAR_10 = VAR_1.batch;

    route_layer VAR_11 = FUNC_3(VAR_10, VAR_5, VAR_7, VAR_8);

    convolutional_layer VAR_12 = VAR_2->layers[VAR_7[0]];
    VAR_11.out_w = VAR_12.out_w;
    VAR_11.out_h = VAR_12.out_h;
    VAR_11.out_c = VAR_12.out_c;
    for(VAR_6 = 1; VAR_6 < VAR_5; ++VAR_6){
        int VAR_13 = VAR_7[VAR_6];
        convolutional_layer VAR_14 = VAR_2->layers[VAR_13];
        if(VAR_14.out_w == VAR_12.out_w && VAR_14.out_h == VAR_12.out_h){
            VAR_11.out_c += VAR_14.out_c;
        }else{
            VAR_11.out_h = VAR_11.out_w = VAR_11.out_c = 0;
        }
    }

    return VAR_11;
}
