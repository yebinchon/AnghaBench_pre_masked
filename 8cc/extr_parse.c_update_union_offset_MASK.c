
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_4__ {scalar_t__ kind; scalar_t__ bitsize; scalar_t__ bitoff; scalar_t__ offset; int align; int size; } ;
typedef TYPE_1__ Type ;
typedef int Dict ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,TYPE_1__*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 void** FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static Dict *FUNC_7(int *VAR_1, int *VAR_2, Vector *VAR_3) {
    int VAR_4 = 0;
    Dict *VAR_5 = FUNC_3();
    for (int VAR_6 = 0; VAR_6 < FUNC_6(VAR_3); VAR_6++) {
        void **VAR_7 = FUNC_5(VAR_3, VAR_6);
        char *VAR_8 = VAR_7[0];
        Type *VAR_9 = VAR_7[1];
        VAR_4 = FUNC_0(VAR_4, VAR_9->size);
        *VAR_2 = FUNC_0(*VAR_2, VAR_9->align);
        if (VAR_8 == ((void*)0) && VAR_9->kind == VAR_0) {
            FUNC_4(VAR_5, VAR_9, 0);
            continue;
        }
        VAR_9->offset = 0;
        if (VAR_9->bitsize >= 0)
            VAR_9->bitoff = 0;
        if (VAR_8)
            FUNC_2(VAR_5, VAR_8, VAR_9);
    }
    *VAR_1 = VAR_4 + FUNC_1(VAR_4, *VAR_2);
    return VAR_5;
}
