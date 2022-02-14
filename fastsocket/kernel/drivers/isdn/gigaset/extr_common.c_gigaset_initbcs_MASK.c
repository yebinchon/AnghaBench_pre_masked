
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {TYPE_1__* ops; scalar_t__ ignoreframes; } ;
struct bc_state {int channel; int use_count; int * skb; int ** commands; scalar_t__ ignore; scalar_t__ busy; scalar_t__ chstate; struct cardstate* cs; int inputstate; int fcs; scalar_t__ emptycount; int at_state; scalar_t__ trans_up; scalar_t__ trans_down; scalar_t__ corrupted; int squeue; int * tx_skb; } ;
struct TYPE_2__ {scalar_t__ (* initbcshw ) (struct bc_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,struct bc_state*,struct cardstate*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (struct bc_state*) ;

__attribute__((used)) static struct bc_state *FUNC_8(struct bc_state *VAR_6,
     struct cardstate *VAR_7, int VAR_8)
{
 int VAR_9;

 VAR_6->tx_skb = ((void*)0);

 FUNC_5(&VAR_6->squeue);

 VAR_6->corrupted = 0;
 VAR_6->trans_down = 0;
 VAR_6->trans_up = 0;

 FUNC_2(VAR_1, "setting up bcs[%d]->at_state", VAR_8);
 FUNC_3(&VAR_6->at_state, VAR_6, VAR_7, -1);





 FUNC_2(VAR_1, "allocating bcs[%d]->skb", VAR_8);
 VAR_6->fcs = VAR_4;
 VAR_6->inputstate = 0;
 if (VAR_7->ignoreframes) {
  VAR_6->inputstate |= VAR_3;
  VAR_6->skb = ((void*)0);
 } else if ((VAR_6->skb = FUNC_0(VAR_5 + VAR_2)) != ((void*)0))
  FUNC_6(VAR_6->skb, VAR_2);
 else {
  FUNC_4("out of memory\n");
  VAR_6->inputstate |= VAR_3;
 }

 VAR_6->channel = VAR_8;
 VAR_6->cs = VAR_7;

 VAR_6->chstate = 0;
 VAR_6->use_count = 1;
 VAR_6->busy = 0;
 VAR_6->ignore = VAR_7->ignoreframes;

 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
  VAR_6->commands[VAR_9] = ((void*)0);

 FUNC_2(VAR_1, "  setting up bcs[%d]->hw", VAR_8);
 if (VAR_7->ops->initbcshw(VAR_6))
  return VAR_6;

 FUNC_2(VAR_1, "  failed");

 FUNC_2(VAR_1, "  freeing bcs[%d]->skb", VAR_8);
 if (VAR_6->skb)
  FUNC_1(VAR_6->skb);

 return ((void*)0);
}
