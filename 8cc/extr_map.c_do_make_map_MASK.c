
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ nused; scalar_t__ nelem; void* val; void* key; struct TYPE_5__* parent; } ;
typedef TYPE_1__ Map ;


 void* FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static Map *FUNC_2(Map *VAR_0, int VAR_1) {
    Map *VAR_2 = FUNC_1(sizeof(Map));
    VAR_2->parent = VAR_0;
    VAR_2->key = FUNC_0(VAR_1, sizeof(char *));
    VAR_2->val = FUNC_0(VAR_1, sizeof(void *));
    VAR_2->size = VAR_1;
    VAR_2->nelem = 0;
    VAR_2->nused = 0;
    return VAR_2;
}
