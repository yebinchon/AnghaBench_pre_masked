
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16_t ;
struct net_buf_pool {size_t buf_count; struct net_buf* __bufs; } ;
struct net_buf {struct net_buf_pool* pool; } ;



__attribute__((used)) static inline struct net_buf *FUNC_0(struct net_buf_pool *VAR_0,
        u16_t VAR_1)
{
    struct net_buf *VAR_2;

    VAR_2 = &VAR_0->__bufs[VAR_0->buf_count - VAR_1];

    VAR_2->pool = VAR_0;

    return VAR_2;
}
