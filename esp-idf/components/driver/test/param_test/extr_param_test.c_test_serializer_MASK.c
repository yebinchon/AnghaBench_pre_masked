
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* post_test ) (void*) ;int (* loop ) (void*,void*) ;int (* def_param ) (void*) ;int (* pre_test ) (void**) ;} ;
typedef TYPE_1__ ptest_func_t ;
struct TYPE_6__ {int pset_num; int pset_size; void* param_group; int name; } ;
typedef TYPE_2__ param_group_t ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (void*) ;

void FUNC_6(const param_group_t *VAR_0, const ptest_func_t* VAR_1)
{
    FUNC_0("test", "run test: %s", VAR_0->name);

    void *VAR_2 = ((void*)0);
    VAR_1->pre_test(&VAR_2);

    void *VAR_3 = VAR_0->param_group;
    for (int VAR_4 = VAR_0->pset_num; VAR_4 >0; VAR_4--) {
        if (VAR_1->def_param) VAR_1->def_param(VAR_3);
        VAR_1->loop(VAR_3, VAR_2);
        VAR_3+=VAR_0->pset_size;
    }

    VAR_1->post_test(VAR_2);
    FUNC_1(VAR_2);
    VAR_2 = ((void*)0);
}
