
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * free_model; int * execute_model; int * load_model; } ;
typedef TYPE_1__ DNNModule ;
typedef int DNNBackendType ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *,int ,char*) ;
 TYPE_1__* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

DNNModule *FUNC_3(DNNBackendType VAR_7)
{
    DNNModule *VAR_8;

    VAR_8 = FUNC_2(sizeof(DNNModule));
    if(!VAR_8){
        return ((void*)0);
    }

    switch(VAR_7){
    case 129:
        VAR_8->load_model = &VAR_5;
        VAR_8->execute_model = &VAR_1;
        VAR_8->free_model = &VAR_3;
        break;
    case 128:





        FUNC_0(&VAR_8);
        return ((void*)0);

        break;
    default:
        FUNC_1(((void*)0), VAR_0, "Module backend_type is not native or tensorflow\n");
        FUNC_0(&VAR_8);
        return ((void*)0);
    }

    return VAR_8;
}
