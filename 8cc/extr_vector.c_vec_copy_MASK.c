
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; int body; } ;
typedef TYPE_1__ Vector ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

Vector *FUNC_2(Vector *VAR_0) {
    Vector *VAR_1 = FUNC_0(VAR_0->len);
    FUNC_1(VAR_1->body, VAR_0->body, sizeof(void *) * VAR_0->len);
    VAR_1->len = VAR_0->len;
    return VAR_1;
}
