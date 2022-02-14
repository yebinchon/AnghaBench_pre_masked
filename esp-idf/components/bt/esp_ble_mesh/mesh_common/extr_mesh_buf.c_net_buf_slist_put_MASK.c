
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf {int node; int flags; struct net_buf* frags; } ;
typedef struct net_buf sys_slist_t ;


 int FUNC_0 (struct net_buf*) ;
 int VAR_0 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct net_buf*,int *,int *) ;

void FUNC_4(sys_slist_t *VAR_1, struct net_buf *VAR_2)
{
    struct net_buf *VAR_3;
    unsigned int VAR_4;

    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    for (VAR_3 = VAR_2; VAR_3->frags; VAR_3 = VAR_3->frags) {
        VAR_3->flags |= VAR_0;
    }

    VAR_4 = FUNC_1();
    FUNC_3(VAR_1, &VAR_2->node, &VAR_3->node);
    FUNC_2(VAR_4);
}
