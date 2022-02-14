
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {TYPE_1__ hw; } ;
struct bas_cardstate {int waitqueue; int timer_cmd_in; int timer_atrdy; int timer_ctrl; scalar_t__ basstate; scalar_t__ pending; int lock; scalar_t__ rcvbuf_size; int * rcvbuf; int * urb_cmd_out; int * urb_cmd_in; void* int_in_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bas_cardstate*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cardstate *VAR_2)
{
 struct bas_cardstate *VAR_3;

 VAR_2->hw.bas = VAR_3 = FUNC_3(sizeof *VAR_3, VAR_0);
 if (!VAR_3) {
  FUNC_4("out of memory\n");
  return 0;
 }
 VAR_3->int_in_buf = FUNC_3(VAR_1, VAR_0);
 if (!VAR_3->int_in_buf) {
  FUNC_2(VAR_3);
  FUNC_4("out of memory\n");
  return 0;
 }

 VAR_3->urb_cmd_in = ((void*)0);
 VAR_3->urb_cmd_out = ((void*)0);
 VAR_3->rcvbuf = ((void*)0);
 VAR_3->rcvbuf_size = 0;

 FUNC_5(&VAR_3->lock);
 VAR_3->pending = 0;

 VAR_3->basstate = 0;
 FUNC_0(&VAR_3->timer_ctrl);
 FUNC_0(&VAR_3->timer_atrdy);
 FUNC_0(&VAR_3->timer_cmd_in);
 FUNC_1(&VAR_3->waitqueue);

 return 1;
}
