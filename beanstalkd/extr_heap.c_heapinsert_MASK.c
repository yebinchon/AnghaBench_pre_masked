
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t len; size_t cap; void** data; } ;
typedef TYPE_1__ Heap ;


 int FUNC_0 (void**) ;
 void** FUNC_1 (int) ;
 int FUNC_2 (void**,void**,int) ;
 int FUNC_3 (TYPE_1__*,size_t,void*) ;
 int FUNC_4 (TYPE_1__*,size_t) ;

int
FUNC_5(Heap *VAR_0, void *VAR_1)
{
    if (VAR_0->len == VAR_0->cap) {
        void **VAR_2;
        size_t VAR_3 = (VAR_0->len+1) * 2;

        VAR_2 = FUNC_1(sizeof(void*) * VAR_3);
        if (!VAR_2) {
            return 0;
        }

        FUNC_2(VAR_2, VAR_0->data, sizeof(void*) * VAR_0->len);
        FUNC_0(VAR_0->data);
        VAR_0->data = VAR_2;
        VAR_0->cap = VAR_3;
    }

    size_t VAR_4 = VAR_0->len;
    VAR_0->len++;
    FUNC_3(VAR_0, VAR_4, VAR_1);
    FUNC_4(VAR_0, VAR_4);
    return 1;
}
