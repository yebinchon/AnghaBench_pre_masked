
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int * body; } ;
typedef TYPE_1__ Vector ;


 TYPE_1__* FUNC_0 (int) ;

Vector *FUNC_1(Vector *VAR_0) {
    Vector *VAR_1 = FUNC_0(VAR_0->len);
    for (int VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++)
        VAR_1->body[VAR_2] = VAR_0->body[VAR_0->len - VAR_2 - 1];
    VAR_1->len = VAR_0->len;
    return VAR_1;
}
