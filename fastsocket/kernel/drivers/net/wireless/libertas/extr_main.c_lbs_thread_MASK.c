
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_t ;
typedef size_t u8 ;
typedef int u32 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ currenttxskb; scalar_t__ psstate; scalar_t__ tx_pending_len; size_t resp_idx; scalar_t__ connect_status; int nr_retries; int (* hw_host_to_card ) (struct lbs_private*,int ,int ,scalar_t__) ;scalar_t__ mesh_connect_status; int cmd_pending; int command_timer; int driver_lock; scalar_t__ mesh_dev; scalar_t__ dev; void* dnld_sent; int tx_pending_buf; int cmdpendingq; struct cmd_ctrl_node* cur_cmd; int fw_ready; int event_fifo; scalar_t__ cmd_timed_out; int (* reset_card ) (struct lbs_private*) ;scalar_t__* resp_len; int * resp_buf; scalar_t__ surpriseremoved; int waitq; void* psmode; } ;
struct cmd_ctrl_node {int list; TYPE_1__* cmdbuf; } ;
typedef int event ;
struct TYPE_2__ {int command; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct lbs_private*,struct cmd_ctrl_node*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct lbs_private*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ,...) ;
 int FUNC_14 (struct lbs_private*,int ,scalar_t__) ;
 int FUNC_15 (struct lbs_private*,int ) ;
 int FUNC_16 (struct lbs_private*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct lbs_private*) ;
 int FUNC_27 (struct lbs_private*,int ,int ,scalar_t__) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(void *VAR_11)
{
 struct net_device *VAR_12 = VAR_11;
 struct lbs_private *VAR_13 = VAR_12->ml_priv;
 wait_queue_t VAR_14;

 FUNC_7(VAR_3);

 FUNC_4(&VAR_14, VAR_10);

 for (;;) {
  int VAR_15;
  u8 VAR_16;

  FUNC_9("1: currenttxskb %p, dnld_sent %d\n",
    VAR_13->currenttxskb, VAR_13->dnld_sent);

  FUNC_2(&VAR_13->waitq, &VAR_14);
  FUNC_23(VAR_8);
  FUNC_24(&VAR_13->driver_lock);

  if (FUNC_5())
   VAR_15 = 0;
  else if (VAR_13->surpriseremoved)
   VAR_15 = 1;
  else if (VAR_13->psstate == VAR_7)
   VAR_15 = 1;
  else if (VAR_13->cmd_timed_out)
   VAR_15 = 0;
  else if (!VAR_13->fw_ready)
   VAR_15 = 1;
  else if (VAR_13->dnld_sent)
   VAR_15 = 1;
  else if (VAR_13->tx_pending_len > 0)
   VAR_15 = 0;
  else if (VAR_13->resp_len[VAR_13->resp_idx])
   VAR_15 = 0;
  else if (VAR_13->cur_cmd)
   VAR_15 = 1;
  else if (!FUNC_19(&VAR_13->cmdpendingq))
   VAR_15 = 0;
  else if (FUNC_1(VAR_13->event_fifo))
   VAR_15 = 0;
  else
   VAR_15 = 1;

  if (VAR_15) {
   FUNC_9("sleeping, connect_status %d, "
    "psmode %d, psstate %d\n",
    VAR_13->connect_status,
    VAR_13->psmode, VAR_13->psstate);
   FUNC_25(&VAR_13->driver_lock);
   FUNC_22();
  } else
   FUNC_25(&VAR_13->driver_lock);

  FUNC_9("2: currenttxskb %p, dnld_send %d\n",
          VAR_13->currenttxskb, VAR_13->dnld_sent);

  FUNC_23(VAR_9);
  FUNC_21(&VAR_13->waitq, &VAR_14);

  FUNC_9("3: currenttxskb %p, dnld_sent %d\n",
          VAR_13->currenttxskb, VAR_13->dnld_sent);

  if (FUNC_5()) {
   FUNC_9("break from main thread\n");
   break;
  }

  if (VAR_13->surpriseremoved) {
   FUNC_9("adapter removed; waiting to die...\n");
   continue;
  }

  FUNC_9("4: currenttxskb %p, dnld_sent %d\n",
         VAR_13->currenttxskb, VAR_13->dnld_sent);


  FUNC_24(&VAR_13->driver_lock);
  VAR_16 = VAR_13->resp_idx;
  if (VAR_13->resp_len[VAR_16]) {
   FUNC_25(&VAR_13->driver_lock);
   FUNC_14(VAR_13,
    VAR_13->resp_buf[VAR_16],
    VAR_13->resp_len[VAR_16]);
   FUNC_24(&VAR_13->driver_lock);
   VAR_13->resp_len[VAR_16] = 0;
  }
  FUNC_25(&VAR_13->driver_lock);


  if (VAR_13->cmd_timed_out && VAR_13->cur_cmd) {
   struct cmd_ctrl_node *VAR_17 = VAR_13->cur_cmd;

   if (++VAR_13->nr_retries > 3) {
    FUNC_13("Excessive timeouts submitting "
     "command 0x%04x\n",
     FUNC_17(VAR_17->cmdbuf->command));
    FUNC_6(VAR_13, VAR_17, -VAR_1);
    VAR_13->nr_retries = 0;
    if (VAR_13->reset_card)
     VAR_13->reset_card(VAR_13);
   } else {
    VAR_13->cur_cmd = ((void*)0);
    VAR_13->dnld_sent = VAR_0;
    FUNC_13("requeueing command 0x%04x due "
     "to timeout (#%d)\n",
     FUNC_17(VAR_17->cmdbuf->command),
     VAR_13->nr_retries);



    FUNC_18(&VAR_17->list, &VAR_13->cmdpendingq);
   }
  }
  VAR_13->cmd_timed_out = 0;


  FUNC_24(&VAR_13->driver_lock);
  while (FUNC_1(VAR_13->event_fifo)) {
   u32 VAR_18;

   FUNC_0(VAR_13->event_fifo, (unsigned char *) &VAR_18,
    sizeof(VAR_18));
   FUNC_25(&VAR_13->driver_lock);
   FUNC_15(VAR_13, VAR_18);
   FUNC_24(&VAR_13->driver_lock);
  }
  FUNC_25(&VAR_13->driver_lock);

  if (!VAR_13->fw_ready)
   continue;


  if (VAR_13->psstate == VAR_6 &&
      !VAR_13->dnld_sent && !VAR_13->cur_cmd) {
   if (VAR_13->connect_status == VAR_2) {
    FUNC_9("pre-sleep, currenttxskb %p, "
     "dnld_sent %d, cur_cmd %p\n",
     VAR_13->currenttxskb, VAR_13->dnld_sent,
     VAR_13->cur_cmd);

    FUNC_16(VAR_13);
   } else {





    VAR_13->psstate = VAR_5;
    FUNC_12("ignore PS_SleepConfirm in "
     "non-connected state\n");
   }
  }




  if ((VAR_13->psstate == VAR_7) ||
      (VAR_13->psstate == VAR_6))
   continue;


  if (!VAR_13->dnld_sent && !VAR_13->cur_cmd)
   FUNC_11(VAR_13);




  if (!FUNC_19(&VAR_13->cmdpendingq))
   FUNC_28(&VAR_13->cmd_pending);

  FUNC_24(&VAR_13->driver_lock);
  if (!VAR_13->dnld_sent && VAR_13->tx_pending_len > 0) {
   int VAR_19 = VAR_13->hw_host_to_card(VAR_13, VAR_4,
       VAR_13->tx_pending_buf,
       VAR_13->tx_pending_len);
   if (VAR_19) {
    FUNC_10("host_to_card failed %d\n", VAR_19);
    VAR_13->dnld_sent = VAR_0;
   }
   VAR_13->tx_pending_len = 0;
   if (!VAR_13->currenttxskb) {


    if (VAR_13->connect_status == VAR_2)
     FUNC_20(VAR_13->dev);
    if (VAR_13->mesh_dev &&
        VAR_13->mesh_connect_status == VAR_2)
     FUNC_20(VAR_13->mesh_dev);
   }
  }
  FUNC_25(&VAR_13->driver_lock);
 }

 FUNC_3(&VAR_13->command_timer);
 FUNC_28(&VAR_13->cmd_pending);

 FUNC_8(VAR_3);
 return 0;
}
