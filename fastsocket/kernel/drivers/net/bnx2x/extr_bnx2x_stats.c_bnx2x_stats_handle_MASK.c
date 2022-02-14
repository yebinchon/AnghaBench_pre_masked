
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {int stats_state; int stats_lock; int panic; } ;
typedef enum bnx2x_stats_state { ____Placeholder_bnx2x_stats_state } bnx2x_stats_state ;
typedef enum bnx2x_stats_event { ____Placeholder_bnx2x_stats_event } bnx2x_stats_event ;
struct TYPE_2__ {int next_state; void (* action ) (struct bnx2x*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct bnx2x *VAR_3, enum bnx2x_stats_event VAR_4)
{
 enum bnx2x_stats_state VAR_5;
 void (*VAR_6)(struct bnx2x *VAR_7);
 if (FUNC_4(VAR_3->panic))
  return;

 FUNC_2(&VAR_3->stats_lock);
 VAR_5 = VAR_3->stats_state;
 VAR_3->stats_state = VAR_2[VAR_5][VAR_4].next_state;
 VAR_6 = VAR_2[VAR_5][VAR_4].action;
 FUNC_3(&VAR_3->stats_lock);

 VAR_6(VAR_3);

 if ((VAR_4 != VAR_1) || FUNC_1(VAR_3))
  FUNC_0(VAR_0, "state %d -> event %d -> state %d\n",
     VAR_5, VAR_4, VAR_3->stats_state);
}
