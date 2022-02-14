
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int height; int width; int channels; int dt; } ;
struct TYPE_8__ {int graph; } ;
struct TYPE_7__ {scalar_t__ index; int oper; } ;
typedef int TF_Status ;
typedef TYPE_1__ TF_Output ;
typedef TYPE_2__ TFModel ;
typedef int DNNReturnType ;
typedef TYPE_3__ DNNData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__,int*,int,int *) ;
 int FUNC_3 (int ,char const*) ;
 int * FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static DNNReturnType FUNC_7(void *VAR_3, DNNData *VAR_4, const char *VAR_5)
{
    TFModel *VAR_6 = (TFModel *)VAR_3;
    TF_Status *VAR_7;
    int64_t VAR_8[4];

    TF_Output VAR_9;
    VAR_9.oper = FUNC_3(VAR_6->graph, VAR_5);
    if (!VAR_9.oper)
        return VAR_0;

    VAR_9.index = 0;
    VAR_4->dt = FUNC_5(VAR_9);

    VAR_7 = FUNC_4();
    FUNC_2(VAR_6->graph, VAR_9, VAR_8, 4, VAR_7);
    if (FUNC_1(VAR_7) != VAR_2){
        FUNC_0(VAR_7);
        return VAR_0;
    }
    FUNC_0(VAR_7);


    FUNC_6(VAR_8[0] == 1);
    VAR_4->height = VAR_8[1];
    VAR_4->width = VAR_8[2];
    VAR_4->channels = VAR_8[3];

    return VAR_1;
}
