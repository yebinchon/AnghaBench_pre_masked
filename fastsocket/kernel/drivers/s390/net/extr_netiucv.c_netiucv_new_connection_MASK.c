
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iucv_connection {void* rx_buff; void* tx_buff; int list; int fsm; int userid; int timer; int max_buffsize; struct net_device* netdev; int collect_lock; int commit_queue; int collect_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct iucv_connection*) ;
 int FUNC_5 (void*) ;
 struct iucv_connection* FUNC_6 (int,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static struct iucv_connection *FUNC_13(struct net_device *VAR_13,
            char *VAR_14)
{
 struct iucv_connection *VAR_15;

 VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  goto out;
 FUNC_9(&VAR_15->collect_queue);
 FUNC_9(&VAR_15->commit_queue);
 FUNC_10(&VAR_15->collect_lock);
 VAR_15->max_buffsize = VAR_5;
 VAR_15->netdev = VAR_13;

 VAR_15->rx_buff = FUNC_0(VAR_15->max_buffsize, VAR_4 | VAR_3);
 if (!VAR_15->rx_buff)
  goto out_conn;
 VAR_15->tx_buff = FUNC_0(VAR_15->max_buffsize, VAR_4 | VAR_3);
 if (!VAR_15->tx_buff)
  goto out_rx;
 VAR_15->fsm = FUNC_3("netiucvconn", VAR_10,
        VAR_8, VAR_7,
        VAR_6, VAR_9, VAR_0,
        VAR_4);
 if (!VAR_15->fsm)
  goto out_tx;

 FUNC_2(VAR_15->fsm, &VAR_15->timer);
 FUNC_1(VAR_15->fsm, VAR_1);

 if (VAR_14) {
  FUNC_8(VAR_15->userid, VAR_14, 9);
  FUNC_1(VAR_15->fsm, VAR_2);
 }

 FUNC_11(&VAR_12);
 FUNC_7(&VAR_15->list, &VAR_11);
 FUNC_12(&VAR_12);
 return VAR_15;

out_tx:
 FUNC_5(VAR_15->tx_buff);
out_rx:
 FUNC_5(VAR_15->rx_buff);
out_conn:
 FUNC_4(VAR_15);
out:
 return ((void*)0);
}
