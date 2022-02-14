
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {size_t largest_free_block; } ;
typedef TYPE_1__ multi_heap_info_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

size_t FUNC_1( uint32_t VAR_0 )
{
    multi_heap_info_t VAR_1;
    FUNC_0(&VAR_1, VAR_0);
    return VAR_1.largest_free_block;
}
