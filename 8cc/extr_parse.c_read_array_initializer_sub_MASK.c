
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_4__ {int len; int size; TYPE_2__* ptr; } ;
typedef TYPE_1__ Type ;
typedef int Token ;
struct TYPE_5__ {int size; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,TYPE_2__*,int,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(Vector *VAR_0, Type *VAR_1, int VAR_2, bool VAR_3) {
    bool VAR_4 = FUNC_4();
    bool VAR_5 = (VAR_1->len <= 0);
    int VAR_6 = VAR_1->ptr->size;
    int VAR_7;
    for (VAR_7 = 0; VAR_5 || VAR_7 < VAR_1->len; VAR_7++) {
        Token *VAR_8 = FUNC_2();
        if (FUNC_3(VAR_8, '}')) {
            if (!VAR_4)
                FUNC_10(VAR_8);
            goto finish;
        }
        if ((FUNC_3(VAR_8, '.') || FUNC_3(VAR_8, '[')) && !VAR_4 && !VAR_3) {
            FUNC_10(VAR_8);
            return;
        }
        if (FUNC_3(VAR_8, '[')) {
            Token *VAR_9 = FUNC_6();
            int VAR_10 = FUNC_8();
            if (VAR_10 < 0 || (!VAR_5 && VAR_1->len <= VAR_10))
                FUNC_0(VAR_9, "array designator exceeds array bounds: %d", VAR_10);
            VAR_7 = VAR_10;
            FUNC_1(']');
            VAR_3 = 1;
        } else {
            FUNC_10(VAR_8);
        }
        FUNC_7(VAR_0, VAR_1->ptr, VAR_2 + VAR_6 * VAR_7, VAR_3);
        FUNC_5();
        VAR_3 = 0;
    }
    if (VAR_4)
        FUNC_9();
 finish:
    if (VAR_1->len < 0) {
        VAR_1->len = VAR_7;
        VAR_1->size = VAR_6 * VAR_7;
    }
}
