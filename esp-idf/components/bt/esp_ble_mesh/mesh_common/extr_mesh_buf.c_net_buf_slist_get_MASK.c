
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf {int flags; struct net_buf* frags; } ;
typedef struct net_buf sys_slist_t ;


 int FUNC_0 (struct net_buf*) ;
 int VAR_0 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct net_buf*) ;

struct net_buf *FUNC_4(sys_slist_t *VAR_1)
{
    struct net_buf *VAR_2, *VAR_3;
    unsigned int VAR_4;

    FUNC_0(VAR_1);

    VAR_4 = FUNC_1();
    VAR_2 = (void *)FUNC_3(VAR_1);
    FUNC_2(VAR_4);

    if (!VAR_2) {
        return ((void*)0);
    }


    for (VAR_3 = VAR_2; (VAR_3->flags & VAR_0); VAR_3 = VAR_3->frags) {
        VAR_4 = FUNC_1();
        VAR_3->frags = (void *)FUNC_3(VAR_1);
        FUNC_2(VAR_4);

        FUNC_0(VAR_3->frags);


        VAR_3->flags &= ~VAR_0;
    }


    VAR_3->frags = ((void*)0);

    return VAR_2;
}
