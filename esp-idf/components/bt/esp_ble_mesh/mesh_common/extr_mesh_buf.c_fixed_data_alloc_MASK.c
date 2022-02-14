
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct net_buf_pool_fixed {int data_size; int * data_pool; } ;
struct net_buf_pool {TYPE_1__* alloc; } ;
struct net_buf {struct net_buf_pool* pool; } ;
typedef int s32_t ;
struct TYPE_2__ {struct net_buf_pool_fixed* alloc_data; } ;


 size_t FUNC_0 (int,size_t) ;
 int FUNC_1 (struct net_buf*) ;

__attribute__((used)) static u8_t *FUNC_2(struct net_buf *VAR_0, size_t *VAR_1, s32_t VAR_2)
{
    struct net_buf_pool *VAR_3 = VAR_0->pool;
    const struct net_buf_pool_fixed *VAR_4 = VAR_3->alloc->alloc_data;

    *VAR_1 = FUNC_0(VAR_4->data_size, *VAR_1);

    return VAR_4->data_pool + VAR_4->data_size * FUNC_1(VAR_0);
}
