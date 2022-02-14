
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** key; void** val; int size; double nused; double nelem; } ;
typedef TYPE_1__ Map ;


 int VAR_0 ;
 char* VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(Map *VAR_2) {
    if (!VAR_2->key) {
        VAR_2->key = FUNC_0(VAR_0, sizeof(char *));
        VAR_2->val = FUNC_0(VAR_0, sizeof(void *));
        VAR_2->size = VAR_0;
        return;
    }
    if (VAR_2->nused < VAR_2->size * 0.7)
        return;
    int VAR_3 = (VAR_2->nelem < VAR_2->size * 0.35) ? VAR_2->size : VAR_2->size * 2;
    char **VAR_4 = FUNC_0(VAR_3, sizeof(char *));
    void **VAR_5 = FUNC_0(VAR_3, sizeof(void *));
    int VAR_6 = VAR_3 - 1;
    for (int VAR_7 = 0; VAR_7 < VAR_2->size; VAR_7++) {
        if (VAR_2->key[VAR_7] == ((void*)0) || VAR_2->key[VAR_7] == VAR_1)
            continue;
        int VAR_8 = FUNC_1(VAR_2->key[VAR_7]) & VAR_6;
        for (;; VAR_8 = (VAR_8 + 1) & VAR_6) {
            if (VAR_4[VAR_8] != ((void*)0))
                continue;
            VAR_4[VAR_8] = VAR_2->key[VAR_7];
            VAR_5[VAR_8] = VAR_2->val[VAR_7];
            break;
        }
    }
    VAR_2->key = VAR_4;
    VAR_2->val = VAR_5;
    VAR_2->size = VAR_3;
    VAR_2->nused = VAR_2->nelem;
}
