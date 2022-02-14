
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tx_cmd {int pa_tbd; } ;
struct TYPE_4__ {int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct i596_tbd {int skb; } ;
struct TYPE_5__ {int pa_cmd; scalar_t__ command; } ;
struct i596_private {TYPE_3__* cmd_head; TYPE_2__ scb; int cmd_backlog; } ;
struct i596_cmd {int command; void* pa_next; } ;
struct TYPE_6__ {int pa_next; } ;




 void* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (unsigned char*) ;
 struct i596_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_1) {
 struct i596_private *VAR_2;
 struct i596_cmd *VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 while (VAR_2->cmd_head) {
  VAR_3 = (struct i596_cmd *)VAR_2->cmd_head;

  VAR_2->cmd_head = FUNC_6(VAR_2->cmd_head->pa_next);
  VAR_2->cmd_backlog--;

  switch ((VAR_3->command) & 0x7) {
   case 128: {
    struct tx_cmd *VAR_4 = (struct tx_cmd *) VAR_3;
    struct i596_tbd * VAR_5;
    VAR_5 = FUNC_6(VAR_4->pa_tbd);

    FUNC_1(VAR_5->skb);

    VAR_1->stats.tx_errors++;
    VAR_1->stats.tx_aborted_errors++;

    VAR_3->pa_next = VAR_0;
    FUNC_3((unsigned char *)VAR_4);
    FUNC_5(VAR_1);
    break;
   }
   case 129: {


    VAR_3->pa_next = VAR_0;
    FUNC_3((unsigned char *)VAR_3);
    break;
   }
   default: {
    VAR_3->pa_next = VAR_0;
    break;
   }
  }
  FUNC_0();
 }

 if (VAR_2->scb.command && FUNC_2(VAR_1, "i596_cleanup_cmd", 100))
  ;

 VAR_2->scb.pa_cmd = FUNC_7(VAR_2->cmd_head);
}
