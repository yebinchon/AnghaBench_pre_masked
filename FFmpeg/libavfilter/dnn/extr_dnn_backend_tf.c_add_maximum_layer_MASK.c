
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float y; } ;
struct TYPE_11__ {TYPE_1__ val; } ;
struct TYPE_10__ {int status; int graph; } ;
struct TYPE_9__ {int * oper; scalar_t__ index; } ;
typedef int TF_Tensor ;
typedef TYPE_2__ TF_Output ;
typedef int TF_OperationDescription ;
typedef int TF_Operation ;
typedef TYPE_3__ TFModel ;
typedef TYPE_4__ DnnLayerMaximumParams ;
typedef int DNNReturnType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__) ;
 int * FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ,char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *,char*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*,int const) ;

__attribute__((used)) static DNNReturnType FUNC_10(TFModel *VAR_5, TF_Operation **VAR_6,
                                       DnnLayerMaximumParams *VAR_7, const int VAR_8)
{
    TF_Operation *VAR_9;
    TF_Tensor *VAR_10;
    TF_OperationDescription *VAR_11;
    TF_Output VAR_12;
    float *VAR_13;

    char VAR_14[VAR_2];
    FUNC_9(VAR_14, VAR_2, "maximum/y%d", VAR_8);

    VAR_11 = FUNC_5(VAR_5->graph, "Const", VAR_14);
    FUNC_7(VAR_11, "dtype", VAR_3);
    VAR_10 = FUNC_1(VAR_3, ((void*)0), 0, FUNC_2(VAR_3));
    VAR_13 = (float *)FUNC_8(VAR_10);
    *VAR_13 = VAR_7->val.y;
    FUNC_6(VAR_11, "value", VAR_10, VAR_5->status);
    if (FUNC_4(VAR_5->status) != VAR_4){
        return VAR_0;
    }
    VAR_9 = FUNC_3(VAR_11, VAR_5->status);
    if (FUNC_4(VAR_5->status) != VAR_4){
        return VAR_0;
    }

    FUNC_9(VAR_14, VAR_2, "maximum%d", VAR_8);
    VAR_11 = FUNC_5(VAR_5->graph, "Maximum", VAR_14);
    VAR_12.oper = *VAR_6;
    VAR_12.index = 0;
    FUNC_0(VAR_11, VAR_12);
    VAR_12.oper = VAR_9;
    FUNC_0(VAR_11, VAR_12);
    FUNC_7(VAR_11, "T", VAR_3);
    *VAR_6 = FUNC_3(VAR_11, VAR_5->status);
    if (FUNC_4(VAR_5->status) != VAR_4){
        return VAR_0;
    }

    return VAR_1;
}
