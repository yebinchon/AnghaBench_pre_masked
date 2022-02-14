
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* multi_heap_handle_t ;
struct TYPE_3__ {size_t minimum_free_bytes; } ;



size_t FUNC_0(multi_heap_handle_t VAR_0)
{
    if (VAR_0 == ((void*)0)) {
        return 0;
    }
    return VAR_0->minimum_free_bytes;
}
