
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {size_t size; size_t len; } ;


 size_t FUNC_0 (struct net_buf_simple*) ;

size_t FUNC_1(struct net_buf_simple *VAR_0)
{
    return VAR_0->size - FUNC_0(VAR_0) - VAR_0->len;
}
