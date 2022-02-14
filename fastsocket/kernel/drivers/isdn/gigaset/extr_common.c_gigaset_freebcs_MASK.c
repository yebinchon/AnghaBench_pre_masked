
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bc_state {int ** commands; scalar_t__ skb; int channel; int at_state; TYPE_1__* cs; } ;
struct TYPE_4__ {int (* freebcshw ) (struct bc_state*) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bc_state*) ;

__attribute__((used)) static void FUNC_5(struct bc_state *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, "freeing bcs[%d]->hw", VAR_2->channel);
 if (!VAR_2->cs->ops->freebcshw(VAR_2)) {
  FUNC_2(VAR_1, "failed");
 }

 FUNC_2(VAR_1, "clearing bcs[%d]->at_state", VAR_2->channel);
 FUNC_0(&VAR_2->at_state);
 FUNC_2(VAR_1, "freeing bcs[%d]->skb", VAR_2->channel);

 if (VAR_2->skb)
  FUNC_1(VAR_2->skb);
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_3(VAR_2->commands[VAR_3]);
  VAR_2->commands[VAR_3] = ((void*)0);
 }
}
