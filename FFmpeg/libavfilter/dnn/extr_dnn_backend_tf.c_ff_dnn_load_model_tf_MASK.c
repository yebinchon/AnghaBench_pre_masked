
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * get_input; int * set_input_output; void* model; } ;
typedef TYPE_1__ TFModel ;
typedef TYPE_1__ DNNModel ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 int VAR_2 ;

DNNModel *FUNC_5(const char *VAR_3)
{
    DNNModel *VAR_4 = ((void*)0);
    TFModel *VAR_5 = ((void*)0);

    VAR_4 = FUNC_1(sizeof(DNNModel));
    if (!VAR_4){
        return ((void*)0);
    }

    VAR_5 = FUNC_2(sizeof(TFModel));
    if (!VAR_5){
        FUNC_0(&VAR_4);
        return ((void*)0);
    }

    if (FUNC_4(VAR_5, VAR_3) != VAR_0){
        if (FUNC_3(VAR_5, VAR_3) != VAR_0){
            FUNC_0(&VAR_5);
            FUNC_0(&VAR_4);

            return ((void*)0);
        }
    }

    VAR_4->model = (void *)VAR_5;
    VAR_4->set_input_output = &VAR_2;
    VAR_4->get_input = &VAR_1;

    return VAR_4;
}
