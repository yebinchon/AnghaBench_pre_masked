
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int graph; } ;
typedef int TF_ImportGraphDefOptions ;
typedef int TF_Buffer ;
typedef TYPE_1__ TFModel ;
typedef int DNNReturnType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *,int ) ;
 int FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_2 ;
 int * FUNC_9 (char const*) ;

__attribute__((used)) static DNNReturnType FUNC_10(TFModel *VAR_3, const char *VAR_4)
{
    TF_Buffer *VAR_5;
    TF_ImportGraphDefOptions *VAR_6;

    VAR_5 = FUNC_9(VAR_4);
    if (!VAR_5){
        return VAR_0;
    }
    VAR_3->graph = FUNC_6();
    VAR_3->status = FUNC_8();
    VAR_6 = FUNC_7();
    FUNC_5(VAR_3->graph, VAR_5, VAR_6, VAR_3->status);
    FUNC_2(VAR_6);
    FUNC_0(VAR_5);
    if (FUNC_4(VAR_3->status) != VAR_2){
        FUNC_1(VAR_3->graph);
        FUNC_3(VAR_3->status);
        return VAR_0;
    }

    return VAR_1;
}
