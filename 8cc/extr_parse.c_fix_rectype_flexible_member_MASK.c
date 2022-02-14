
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {scalar_t__ kind; int len; scalar_t__ size; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 void** FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(Vector *VAR_1) {
    for (int VAR_2 = 0; VAR_2 < FUNC_3(VAR_1); VAR_2++) {
        void **VAR_3 = FUNC_2(VAR_1, VAR_2);
        char *VAR_4 = VAR_3[0];
        Type *VAR_5 = VAR_3[1];
        if (VAR_5->kind != VAR_0)
            continue;
        if (VAR_5->len == -1) {
            if (VAR_2 != FUNC_3(VAR_1) - 1)
                FUNC_0("flexible member may only appear as the last member: %s %s", FUNC_1(VAR_5), VAR_4);
            if (FUNC_3(VAR_1) == 1)
                FUNC_0("flexible member with no other fields: %s %s", FUNC_1(VAR_5), VAR_4);
            VAR_5->len = 0;
            VAR_5->size = 0;
        }
    }
}
