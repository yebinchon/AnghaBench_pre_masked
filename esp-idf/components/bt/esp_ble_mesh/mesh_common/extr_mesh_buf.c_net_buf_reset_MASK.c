
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf {scalar_t__ flags; int b; int * frags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct net_buf *VAR_0)
{
    FUNC_0(VAR_0->flags == 0);
    FUNC_0(VAR_0->frags == ((void*)0));

    FUNC_1(&VAR_0->b);
}
