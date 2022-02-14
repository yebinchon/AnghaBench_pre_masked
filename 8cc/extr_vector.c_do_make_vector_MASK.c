
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nalloc; scalar_t__ len; void* body; } ;
typedef TYPE_1__ Vector ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static Vector *FUNC_2(int VAR_0) {
    Vector *VAR_1 = FUNC_0(sizeof(Vector));
    VAR_0 = FUNC_1(VAR_0);
    if (VAR_0 > 0)
        VAR_1->body = FUNC_0(sizeof(void *) * VAR_0);
    VAR_1->len = 0;
    VAR_1->nalloc = VAR_0;
    return VAR_1;
}
