
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_rx_queue {int need_update; int bd; } ;
struct il_priv {int status; int txq; int lock; struct il_rx_queue rxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*,struct il_rx_queue*) ;
 int FUNC_3 (struct il_priv*,struct il_rx_queue*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*,struct il_rx_queue*) ;
 int FUNC_11 (struct il_priv*,int ,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

int
FUNC_15(struct il_priv *VAR_4)
{
 unsigned long VAR_5;
 struct il_rx_queue *VAR_6 = &VAR_4->rxq;
 int VAR_7;

 FUNC_13(&VAR_4->lock, VAR_5);
 FUNC_8(VAR_4);

 FUNC_11(VAR_4, VAR_0, VAR_2);
 FUNC_14(&VAR_4->lock, VAR_5);

 FUNC_5(VAR_4);
 FUNC_1(VAR_4);


 if (!VAR_6->bd) {
  VAR_7 = FUNC_9(VAR_4);
  if (VAR_7) {
   FUNC_0("Unable to initialize Rx queue\n");
   return -VAR_1;
  }
 } else
  FUNC_3(VAR_4, VAR_6);

 FUNC_4(VAR_4);

 FUNC_2(VAR_4, VAR_6);

 FUNC_13(&VAR_4->lock, VAR_5);

 VAR_6->need_update = 1;
 FUNC_10(VAR_4, VAR_6);

 FUNC_14(&VAR_4->lock, VAR_5);


 if (!VAR_4->txq) {
  VAR_7 = FUNC_6(VAR_4);
  if (VAR_7)
   return VAR_7;
 } else
  FUNC_7(VAR_4);

 FUNC_12(VAR_3, &VAR_4->status);

 return 0;
}
