
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; void** val; int ** key; } ;
typedef TYPE_1__ Map ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void *FUNC_2(Map *VAR_1, char *VAR_2) {
    if (!VAR_1->key)
        return ((void*)0);
    int VAR_3 = VAR_1->size - 1;
    int VAR_4 = FUNC_0(VAR_2) & VAR_3;
    for (; VAR_1->key[VAR_4] != ((void*)0); VAR_4 = (VAR_4 + 1) & VAR_3)
        if (VAR_1->key[VAR_4] != VAR_0 && !FUNC_1(VAR_1->key[VAR_4], VAR_2))
            return VAR_1->val[VAR_4];
    return ((void*)0);
}
