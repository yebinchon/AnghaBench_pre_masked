
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t len; void** data; } ;
typedef TYPE_1__ Heap ;


 int FUNC_0 (TYPE_1__*,size_t,void*) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

void *
FUNC_3(Heap *VAR_0, size_t VAR_1)
{
    if (VAR_1 >= VAR_0->len) {
        return 0;
    }

    void *VAR_2 = VAR_0->data[VAR_1];
    VAR_0->len--;
    FUNC_0(VAR_0, VAR_1, VAR_0->data[VAR_0->len]);
    FUNC_1(VAR_0, VAR_1);
    FUNC_2(VAR_0, VAR_1);
    return VAR_2;
}
