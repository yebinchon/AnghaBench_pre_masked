
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int int64_t ;
typedef size_t int32_t ;
struct TYPE_19__ {size_t layers_num; TYPE_1__* layers; } ;
struct TYPE_18__ {scalar_t__ model; } ;
struct TYPE_17__ {int status; int graph; } ;
struct TYPE_16__ {scalar_t__ index; int * oper; } ;
struct TYPE_15__ {int type; scalar_t__ params; } ;
typedef int TF_Tensor ;
typedef TYPE_2__ TF_Output ;
typedef int TF_OperationDescription ;
typedef int TF_Operation ;
typedef TYPE_3__ TFModel ;
typedef int LayerPadParams ;
typedef int DnnLayerMaximumParams ;
typedef int DepthToSpaceParams ;
typedef scalar_t__ DNNReturnType ;
typedef TYPE_4__ DNNModel ;
typedef int ConvolutionalParams ;
typedef TYPE_5__ ConvolutionalNetwork ;


 int FUNC_0 (TYPE_3__*) ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_2__) ;
 int * FUNC_2 (int ,int*,int,int) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int * FUNC_6 (int ,char*,char*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *,char*,int*,int) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int *,char*,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int *,int **,int *,size_t) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int **,int *,size_t) ;
 scalar_t__ FUNC_14 (TYPE_3__*,int **,int *,size_t) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int **,int *,size_t) ;
 int FUNC_16 (TYPE_4__**) ;
 TYPE_4__* FUNC_17 (char const*) ;

__attribute__((used)) static DNNReturnType FUNC_18(TFModel *VAR_5, const char *VAR_6)
{
    int32_t VAR_7;
    TF_OperationDescription *VAR_8;
    TF_Operation *VAR_9;
    TF_Operation *VAR_10;
    TF_Tensor *VAR_11;
    TF_Output VAR_12;
    int32_t *VAR_13;
    int64_t VAR_14[] = {4};
    int64_t VAR_15[] = {1, -1, -1, -1};
    DNNReturnType VAR_16;
    DNNModel *VAR_17 = ((void*)0);
    ConvolutionalNetwork *VAR_18;

    VAR_17 = FUNC_17(VAR_6);
    if (!VAR_17){
        return VAR_0;
    }

    VAR_18 = (ConvolutionalNetwork *)VAR_17->model;
    VAR_5->graph = FUNC_5();
    VAR_5->status = FUNC_7();
    VAR_8 = FUNC_6(VAR_5->graph, "Placeholder", "x");
    FUNC_10(VAR_8, "dtype", VAR_2);
    FUNC_8(VAR_8, "shape", VAR_15, 4);
    VAR_9 = FUNC_3(VAR_8, VAR_5->status);
    if (FUNC_4(VAR_5->status) != VAR_4){
        { FUNC_0(VAR_5->graph); FUNC_0(VAR_5->status); return VAR_0; };
    }

    VAR_8 = FUNC_6(VAR_5->graph, "Const", "transpose_perm");
    FUNC_10(VAR_8, "dtype", VAR_3);
    VAR_11 = FUNC_2(VAR_3, VAR_14, 1, 4 * sizeof(int32_t));
    VAR_13 = (int32_t *)FUNC_11(VAR_11);
    VAR_13[0] = 1;
    VAR_13[1] = 2;
    VAR_13[2] = 3;
    VAR_13[3] = 0;
    FUNC_9(VAR_8, "value", VAR_11, VAR_5->status);
    if (FUNC_4(VAR_5->status) != VAR_4){
        { FUNC_0(VAR_5->graph); FUNC_0(VAR_5->status); return VAR_0; };
    }
    VAR_10 = FUNC_3(VAR_8, VAR_5->status);

    for (VAR_7 = 0; VAR_7 < VAR_18->layers_num; ++VAR_7){
        switch (VAR_18->layers[VAR_7].type){
        case 130:
            VAR_16 = VAR_1;
            break;
        case 132:
            VAR_16 = FUNC_12(VAR_5, VAR_10, &VAR_9,
                                           (ConvolutionalParams *)VAR_18->layers[VAR_7].params, VAR_7);
            break;
        case 131:
            VAR_16 = FUNC_13(VAR_5, &VAR_9,
                                                     (DepthToSpaceParams *)VAR_18->layers[VAR_7].params, VAR_7);
            break;
        case 128:
            VAR_16 = FUNC_15(VAR_5, &VAR_9,
                                          (LayerPadParams *)VAR_18->layers[VAR_7].params, VAR_7);
            break;
        case 129:
            VAR_16 = FUNC_14(VAR_5, &VAR_9,
                                          (DnnLayerMaximumParams *)VAR_18->layers[VAR_7].params, VAR_7);
            break;
        default:
            { FUNC_0(VAR_5->graph); FUNC_0(VAR_5->status); return VAR_0; };
        }

        if (VAR_16 != VAR_1){
            { FUNC_0(VAR_5->graph); FUNC_0(VAR_5->status); return VAR_0; };
        }
    }

    VAR_8 = FUNC_6(VAR_5->graph, "Identity", "y");
    VAR_12.oper = VAR_9;
    VAR_12.index = 0;
    FUNC_1(VAR_8, VAR_12);
    FUNC_3(VAR_8, VAR_5->status);
    if (FUNC_4(VAR_5->status) != VAR_4){
        { FUNC_0(VAR_5->graph); FUNC_0(VAR_5->status); return VAR_0; };
    }

    FUNC_16(&VAR_17);

    return VAR_1;
}
