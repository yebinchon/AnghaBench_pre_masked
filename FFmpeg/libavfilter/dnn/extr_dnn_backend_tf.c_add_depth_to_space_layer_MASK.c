
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int block_size; } ;
struct TYPE_8__ {int status; int graph; } ;
struct TYPE_7__ {scalar_t__ index; int * oper; } ;
typedef TYPE_1__ TF_Output ;
typedef int TF_OperationDescription ;
typedef int TF_Operation ;
typedef TYPE_2__ TFModel ;
typedef TYPE_3__ DepthToSpaceParams ;
typedef int DNNReturnType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__) ;
 int VAR_3 ;
 int * FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ,char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*,int,char*,int const) ;

__attribute__((used)) static DNNReturnType FUNC_7(TFModel *VAR_5, TF_Operation **VAR_6,
                                              DepthToSpaceParams *VAR_7, const int VAR_8)
{
    TF_OperationDescription *VAR_9;
    TF_Output VAR_10;
    char VAR_11[VAR_2];

    FUNC_6(VAR_11, VAR_2, "depth_to_space%d", VAR_8);
    VAR_9 = FUNC_3(VAR_5->graph, "DepthToSpace", VAR_11);
    VAR_10.oper = *VAR_6;
    VAR_10.index = 0;
    FUNC_0(VAR_9, VAR_10);
    FUNC_5(VAR_9, "T", VAR_3);
    FUNC_4(VAR_9, "block_size", VAR_7->block_size);
    *VAR_6 = FUNC_1(VAR_9, VAR_5->status);
    if (FUNC_2(VAR_5->status) != VAR_4){
        return VAR_0;
    }

    return VAR_1;
}
