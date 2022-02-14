
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_5__ {int kind; int fields; int is_struct; struct TYPE_5__* ptr; int len; } ;
typedef TYPE_1__ Type ;





 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(Type *VAR_0, Type *VAR_1) {
    if (VAR_0->kind != VAR_1->kind)
        return 0;
    switch (VAR_0->kind) {
    case 130:
        return VAR_0->len == VAR_1->len &&
            FUNC_3(VAR_0->ptr, VAR_1->ptr);
    case 129:
        return FUNC_3(VAR_0->ptr, VAR_1->ptr);
    case 128: {
        if (VAR_0->is_struct != VAR_1->is_struct)
            return 0;
        Vector *VAR_2 = FUNC_0(VAR_0->fields);
        Vector *VAR_3 = FUNC_0(VAR_1->fields);
        if (FUNC_2(VAR_2) != FUNC_2(VAR_3))
            return 0;
        for (int VAR_4 = 0; VAR_4 < FUNC_2(VAR_2); VAR_4++)
            if (!FUNC_3(FUNC_1(VAR_2, VAR_4), FUNC_1(VAR_3, VAR_4)))
                return 0;
        return 1;
    }
    default:
        return 1;
    }
}
