
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int multi_heap_handle_t ;
typedef int heap_block_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int *) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (void*) ;
 int FUNC_4 (int *) ;

size_t FUNC_5(multi_heap_handle_t VAR_0, void *VAR_1)
{
    heap_block_t *VAR_2 = FUNC_3(VAR_1);

    FUNC_1(VAR_0, VAR_2);
    FUNC_0(!FUNC_4(VAR_2), VAR_2);
    return FUNC_2(VAR_2);
}
