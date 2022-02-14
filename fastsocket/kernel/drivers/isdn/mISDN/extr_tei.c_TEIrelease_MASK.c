
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct teimgr {TYPE_1__* mgr; int timer; } ;
struct layer2 {struct teimgr* tm; int list; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct teimgr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(struct layer2 *VAR_0)
{
 struct teimgr *VAR_1 = VAR_0->tm;
 u_long VAR_2;

 FUNC_2(&VAR_1->timer, 1);
 FUNC_3(&VAR_1->mgr->lock, VAR_2);
 FUNC_1(&VAR_0->list);
 FUNC_4(&VAR_1->mgr->lock, VAR_2);
 VAR_0->tm = ((void*)0);
 FUNC_0(VAR_1);
}
