
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; void** body; } ;
typedef TYPE_1__ Vector ;


 int FUNC_0 (int) ;

void *FUNC_1(Vector *VAR_0) {
    FUNC_0(VAR_0->len > 0);
    return VAR_0->body[--VAR_0->len];
}
