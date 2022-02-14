
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {int len; int size; } ;
typedef TYPE_1__ Type ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(Vector *VAR_1, Type *VAR_2, char *VAR_3, int VAR_4) {
    if (VAR_2->len == -1)
        VAR_2->len = VAR_2->size = FUNC_2(VAR_3) + 1;
    int VAR_5 = 0;
    for (; VAR_5 < VAR_2->len && *VAR_3; VAR_5++)
        FUNC_3(VAR_1, FUNC_0(FUNC_1(VAR_0, *VAR_3++), VAR_0, VAR_4 + VAR_5));
    for (; VAR_5 < VAR_2->len; VAR_5++)
        FUNC_3(VAR_1, FUNC_0(FUNC_1(VAR_0, 0), VAR_0, VAR_4 + VAR_5));
}
