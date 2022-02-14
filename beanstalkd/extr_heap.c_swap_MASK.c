
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** data; } ;
typedef TYPE_1__ Heap ;


 int FUNC_0 (TYPE_1__*,size_t,void*) ;

__attribute__((used)) static void
FUNC_1(Heap *VAR_0, size_t VAR_1, size_t VAR_2)
{
    void *VAR_3;

    VAR_3 = VAR_0->data[VAR_1];
    FUNC_0(VAR_0, VAR_1, VAR_0->data[VAR_2]);
    FUNC_0(VAR_0, VAR_2, VAR_3);
}
