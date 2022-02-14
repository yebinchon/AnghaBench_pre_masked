
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wait_queue_t ;
typedef int ulong ;
struct sk_buff {scalar_t__ len; } ;
struct btmrvl_thread {int wait_q; struct btmrvl_private* priv; } ;
struct TYPE_8__ {TYPE_2__* hcidev; int tx_dnld_rdy; } ;
struct btmrvl_private {TYPE_3__ btmrvl_dev; int driver_lock; int (* hw_wakeup_firmware ) (struct btmrvl_private*) ;struct btmrvl_adapter* adapter; } ;
struct btmrvl_adapter {scalar_t__ ps_state; int tx_queue; scalar_t__ wakeup_tries; scalar_t__ int_count; } ;
struct TYPE_9__ {int flags; } ;
struct TYPE_6__ {int byte_tx; int err_tx; } ;
struct TYPE_7__ {TYPE_1__ stat; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct btmrvl_private*,struct sk_buff*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 struct sk_buff* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct btmrvl_private*) ;

__attribute__((used)) static int FUNC_14(void *VAR_5)
{
 struct btmrvl_thread *VAR_6 = VAR_5;
 struct btmrvl_private *VAR_7 = VAR_6->priv;
 struct btmrvl_adapter *VAR_8 = VAR_7->adapter;
 wait_queue_t VAR_9;
 struct sk_buff *VAR_10;
 ulong VAR_11;

 FUNC_3(&VAR_9, VAR_4);

 VAR_4->flags |= VAR_0;

 for (;;) {
  FUNC_1(&VAR_6->wait_q, &VAR_9);

  FUNC_8(VAR_2);

  if (VAR_8->wakeup_tries ||
    ((!VAR_8->int_count) &&
    (!VAR_7->btmrvl_dev.tx_dnld_rdy ||
    FUNC_10(&VAR_8->tx_queue)))) {
   FUNC_0("main_thread is sleeping...");
   FUNC_7();
  }

  FUNC_8(VAR_3);

  FUNC_6(&VAR_6->wait_q, &VAR_9);

  FUNC_0("main_thread woke up");

  if (FUNC_5()) {
   FUNC_0("main_thread: break from main thread");
   break;
  }

  FUNC_11(&VAR_7->driver_lock, VAR_11);
  if (VAR_8->int_count) {
   VAR_8->int_count = 0;
  } else if (VAR_8->ps_state == VAR_1 &&
     !FUNC_10(&VAR_8->tx_queue)) {
   FUNC_12(&VAR_7->driver_lock, VAR_11);
   VAR_8->wakeup_tries++;
   VAR_7->hw_wakeup_firmware(VAR_7);
   continue;
  }
  FUNC_12(&VAR_7->driver_lock, VAR_11);

  if (VAR_8->ps_state == VAR_1)
   continue;

  if (!VAR_7->btmrvl_dev.tx_dnld_rdy)
   continue;

  VAR_10 = FUNC_9(&VAR_8->tx_queue);
  if (VAR_10) {
   if (FUNC_2(VAR_7, VAR_10))
    VAR_7->btmrvl_dev.hcidev->stat.err_tx++;
   else
    VAR_7->btmrvl_dev.hcidev->stat.byte_tx += VAR_10->len;

   FUNC_4(VAR_10);
  }
 }

 return 0;
}
