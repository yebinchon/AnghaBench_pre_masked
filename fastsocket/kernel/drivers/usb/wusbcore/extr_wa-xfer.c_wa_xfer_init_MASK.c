
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wa_xfer {int lock; int list_node; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct wa_xfer *VAR_0)
{
 FUNC_1(&VAR_0->refcnt);
 FUNC_0(&VAR_0->list_node);
 FUNC_2(&VAR_0->lock);
}
