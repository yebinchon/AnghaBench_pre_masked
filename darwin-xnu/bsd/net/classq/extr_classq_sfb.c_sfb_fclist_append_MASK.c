
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sfb_fcl {scalar_t__ cnt; int fclist; } ;
struct TYPE_3__ {int flow_feedback; } ;
struct sfb {TYPE_1__ sfb_stats; TYPE_2__* sfb_ifp; } ;
struct TYPE_4__ {int if_snd; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct sfb *VAR_0, struct sfb_fcl *VAR_1)
{
 FUNC_0(&VAR_0->sfb_ifp->if_snd);
 FUNC_2(FUNC_1(&VAR_1->fclist) || VAR_1->cnt > 0);
 VAR_0->sfb_stats.flow_feedback += VAR_1->cnt;
 VAR_1->cnt = 0;

 FUNC_3(&VAR_1->fclist);
 FUNC_2(VAR_1->cnt == 0 && FUNC_1(&VAR_1->fclist));
}
