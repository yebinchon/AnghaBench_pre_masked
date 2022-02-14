
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; } ;
typedef TYPE_1__ Map ;


 void* FUNC_0 (TYPE_1__*,char*) ;

void *FUNC_1(Map *VAR_0, char *VAR_1) {
    void *VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_2)
        return VAR_2;


    if (VAR_0->parent)
        return FUNC_1(VAR_0->parent, VAR_1);
    return ((void*)0);
}
