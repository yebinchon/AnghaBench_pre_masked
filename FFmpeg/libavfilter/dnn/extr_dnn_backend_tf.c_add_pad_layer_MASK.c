
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_9__ {int ** paddings; } ;
struct TYPE_8__ {int status; int graph; } ;
struct TYPE_7__ {int * oper; scalar_t__ index; } ;
typedef int TF_Tensor ;
typedef TYPE_1__ TF_Output ;
typedef int TF_OperationDescription ;
typedef int TF_Operation ;
typedef TYPE_2__ TFModel ;
typedef TYPE_3__ LayerPadParams ;
typedef int DNNReturnType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__) ;
 int * FUNC_1 (int ,int*,int,int) ;
 int VAR_3 ;
 int * FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int * FUNC_4 (int ,char*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *,char*,char*,int) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 int FUNC_7 (int *,char*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*,int const) ;

__attribute__((used)) static DNNReturnType FUNC_10(TFModel *VAR_6, TF_Operation **VAR_7,
                                              LayerPadParams *VAR_8, const int VAR_9)
{
    TF_Operation *VAR_10;
    TF_Tensor *VAR_11;
    TF_OperationDescription *VAR_12;
    TF_Output VAR_13;
    int32_t *VAR_14;
    int64_t VAR_15[] = {4, 2};

    char VAR_16[VAR_2];
    FUNC_9(VAR_16, VAR_2, "pad%d", VAR_9);

    VAR_12 = FUNC_4(VAR_6->graph, "Const", VAR_16);
    FUNC_7(VAR_12, "dtype", VAR_4);
    VAR_11 = FUNC_1(VAR_4, VAR_15, 2, 4 * 2 * sizeof(int32_t));
    VAR_14 = (int32_t *)FUNC_8(VAR_11);
    VAR_14[0] = VAR_8->paddings[0][0];
    VAR_14[1] = VAR_8->paddings[0][1];
    VAR_14[2] = VAR_8->paddings[1][0];
    VAR_14[3] = VAR_8->paddings[1][1];
    VAR_14[4] = VAR_8->paddings[2][0];
    VAR_14[5] = VAR_8->paddings[2][1];
    VAR_14[6] = VAR_8->paddings[3][0];
    VAR_14[7] = VAR_8->paddings[3][1];
    FUNC_6(VAR_12, "value", VAR_11, VAR_6->status);
    if (FUNC_3(VAR_6->status) != VAR_5){
        return VAR_0;
    }
    VAR_10 = FUNC_2(VAR_12, VAR_6->status);
    if (FUNC_3(VAR_6->status) != VAR_5){
        return VAR_0;
    }

    VAR_12 = FUNC_4(VAR_6->graph, "MirrorPad", "mirror_pad");
    VAR_13.oper = *VAR_7;
    VAR_13.index = 0;
    FUNC_0(VAR_12, VAR_13);
    VAR_13.oper = VAR_10;
    FUNC_0(VAR_12, VAR_13);
    FUNC_7(VAR_12, "T", VAR_3);
    FUNC_7(VAR_12, "Tpaddings", VAR_4);
    FUNC_5(VAR_12, "mode", "SYMMETRIC", 9);
    *VAR_7 = FUNC_2(VAR_12, VAR_6->status);
    if (FUNC_3(VAR_6->status) != VAR_5){
        return VAR_0;
    }

    return VAR_1;
}
