
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int cs_init; int channels; int mutex; scalar_t__ bcs; scalar_t__ inbuf; int at_state; TYPE_1__* ops; int timer; int event_tasklet; int lock; scalar_t__ running; } ;
struct TYPE_2__ {int (* freecshw ) (struct cardstate*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cardstate*) ;
 int FUNC_2 (struct cardstate*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cardstate*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct cardstate*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct cardstate*,int ) ;
 int FUNC_9 (struct cardstate*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct cardstate*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (struct cardstate*) ;
 int FUNC_17 (int *) ;

void FUNC_18(struct cardstate *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 if (!VAR_3)
  return;

 FUNC_12(&VAR_3->mutex);

 if (!VAR_3->bcs)
  goto f_cs;
 if (!VAR_3->inbuf)
  goto f_bcs;

 FUNC_14(&VAR_3->lock, VAR_5);
 VAR_3->running = 0;
 FUNC_15(&VAR_3->lock, VAR_5);


 FUNC_17(&VAR_3->event_tasklet);
 FUNC_3(&VAR_3->timer);

 switch (VAR_3->cs_init) {
 default:

  FUNC_6(VAR_3);

  FUNC_9(VAR_3);

  FUNC_5(VAR_0, "clearing hw");
  VAR_3->ops->freecshw(VAR_3);




 case 2:

  FUNC_11(VAR_3, VAR_2);
  FUNC_5(VAR_0, "clearing iif");
  FUNC_8(VAR_3, VAR_1);


 case 1:
  FUNC_5(VAR_0, "clearing at_state");
  FUNC_0(&VAR_3->at_state);
  FUNC_2(VAR_3);


 case 0:
  for (VAR_4 = 0; VAR_4 < VAR_3->channels; ++VAR_4) {
   FUNC_5(VAR_0, "clearing bcs[%d]", VAR_4);
   FUNC_7(VAR_3->bcs + VAR_4);
  }

  FUNC_1(VAR_3);
  FUNC_5(VAR_0, "freeing inbuf");
  FUNC_10(VAR_3->inbuf);
 }
f_bcs: FUNC_5(VAR_0, "freeing bcs[]");
 FUNC_10(VAR_3->bcs);
f_cs: FUNC_5(VAR_0, "freeing cs");
 FUNC_13(&VAR_3->mutex);
 FUNC_4(VAR_3);
}
