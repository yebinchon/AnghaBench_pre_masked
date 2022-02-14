
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int fsm; } ;
struct channel {int th_seg; int th_seq_num; int collect_lock; scalar_t__ collect_len; int collect_queue; int sweep_queue; int io_queue; int flags; int * trans_skb; int * ccw; int sweep_timer; int timer; int id; struct net_device* netdev; } ;
typedef int fsm_instance ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct channel*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,struct net_device*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(fsm_instance *VAR_7, int VAR_8,
  struct channel *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->netdev;
 struct ctcm_priv *VAR_11 = VAR_10->ml_priv;

 FUNC_1(VAR_6, VAR_1,
   "%s(%s): %s[%d]\n",
   VAR_0, VAR_10->name, VAR_9->id, VAR_8);

 FUNC_6(&VAR_9->timer);
 if (FUNC_2(VAR_9))
  FUNC_6(&VAR_9->sweep_timer);

 FUNC_8(VAR_7, VAR_8);
 if (VAR_8 == VAR_2 && VAR_9->trans_skb != ((void*)0)) {
  FUNC_3(&VAR_9->ccw[1]);
  FUNC_5(VAR_9->trans_skb);
  VAR_9->trans_skb = ((void*)0);
 }

 VAR_9->th_seg = 0x00;
 VAR_9->th_seq_num = 0x00;
 if (FUNC_0(VAR_9->flags) == VAR_5) {
  FUNC_9(&VAR_9->io_queue);
  FUNC_7(VAR_11->fsm, VAR_3, VAR_10);
 } else {
  FUNC_4(&VAR_9->io_queue);
  if (FUNC_2(VAR_9))
   FUNC_4(&VAR_9->sweep_queue);
  FUNC_10(&VAR_9->collect_lock);
  FUNC_4(&VAR_9->collect_queue);
  VAR_9->collect_len = 0;
  FUNC_11(&VAR_9->collect_lock);
  FUNC_7(VAR_11->fsm, VAR_4, VAR_10);
 }
}
