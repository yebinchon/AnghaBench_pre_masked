
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pop; TYPE_1__* sec; int * sec_inst; } ;
typedef TYPE_2__ protocomm_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int (* cleanup ) (int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(protocomm_t *VAR_1, const char *VAR_2)
{
    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0))) {
        return VAR_0;
    }

    if (VAR_1->sec && VAR_1->sec->cleanup) {
        VAR_1->sec->cleanup(VAR_1->sec_inst);
        VAR_1->sec_inst = ((void*)0);
        VAR_1->sec = ((void*)0);
    }

    if (VAR_1->pop) {
        FUNC_0(VAR_1->pop);
        VAR_1->pop = ((void*)0);
    }

    return FUNC_1(VAR_1, VAR_2);
}
