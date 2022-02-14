
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; void** body; } ;
typedef TYPE_1__ Vector ;


 int FUNC_0 (int) ;

void FUNC_1(Vector *VAR_0, int VAR_1, void *VAR_2) {
    FUNC_0(0 <= VAR_1 && VAR_1 < VAR_0->len);
    VAR_0->body[VAR_1] = VAR_2;
}
