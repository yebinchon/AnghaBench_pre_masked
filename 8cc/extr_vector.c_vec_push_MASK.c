
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; void** body; } ;
typedef TYPE_1__ Vector ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(Vector *VAR_0, void *VAR_1) {
    FUNC_0(VAR_0, 1);
    VAR_0->body[VAR_0->len++] = VAR_1;
}
