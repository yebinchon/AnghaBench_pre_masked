
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_buf_pool_fixed {int data_size; } ;
struct net_buf_pool {TYPE_1__* alloc; } ;
struct net_buf {int dummy; } ;
typedef int s32_t ;
struct TYPE_2__ {struct net_buf_pool_fixed* alloc_data; } ;


 struct net_buf* FUNC_0 (struct net_buf_pool*,int ,int ) ;

struct net_buf *FUNC_1(struct net_buf_pool *VAR_0, s32_t VAR_1)
{
    const struct net_buf_pool_fixed *VAR_2 = VAR_0->alloc->alloc_data;

    return FUNC_0(VAR_0, VAR_2->data_size, VAR_1);
}
