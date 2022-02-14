
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* multi_heap_handle_t ;
typedef int * multi_heap_block_handle_t ;
typedef int heap_block_t ;
struct TYPE_4__ {int * last_block; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

multi_heap_block_handle_t FUNC_4(multi_heap_handle_t VAR_0, multi_heap_block_handle_t VAR_1)
{
    heap_block_t *VAR_2 = FUNC_1(VAR_1);

    if (VAR_2 == VAR_0->last_block && FUNC_3(VAR_2) && FUNC_2(VAR_2)) {
        return ((void*)0);
    }
    FUNC_0(VAR_0, VAR_2);
    return VAR_2;
}
