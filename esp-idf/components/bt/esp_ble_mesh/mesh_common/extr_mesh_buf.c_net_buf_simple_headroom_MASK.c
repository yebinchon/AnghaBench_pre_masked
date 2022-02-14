
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {size_t data; size_t __buf; } ;



size_t FUNC_0(struct net_buf_simple *VAR_0)
{
    return VAR_0->data - VAR_0->__buf;
}
