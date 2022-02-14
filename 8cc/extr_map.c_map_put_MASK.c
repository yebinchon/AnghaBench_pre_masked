
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; char** key; void** val; int nused; int nelem; } ;
typedef TYPE_1__ Map ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3(Map *VAR_1, char *VAR_2, void *VAR_3) {
    FUNC_1(VAR_1);
    int VAR_4 = VAR_1->size - 1;
    int VAR_5 = FUNC_0(VAR_2) & VAR_4;
    for (;; VAR_5 = (VAR_5 + 1) & VAR_4) {
        char *VAR_6 = VAR_1->key[VAR_5];
        if (VAR_6 == ((void*)0) || VAR_6 == VAR_0) {
            VAR_1->key[VAR_5] = VAR_2;
            VAR_1->val[VAR_5] = VAR_3;
            VAR_1->nelem++;
            if (VAR_6 == ((void*)0))
                VAR_1->nused++;
            return;
        }
        if (!FUNC_2(VAR_6, VAR_2)) {
            VAR_1->val[VAR_5] = VAR_3;
            return;
        }
    }
}
