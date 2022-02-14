
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_rx_queue {int write; int bd; } ;
struct il_priv {int status; int lock; struct il_rx_queue rxq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*,struct il_rx_queue*) ;
 int FUNC_5 (struct il_priv*,struct il_rx_queue*) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*) ;
 int FUNC_10 (struct il_priv*,int ,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

int
FUNC_14(struct il_priv *VAR_2)
{
 int VAR_3;
 unsigned long VAR_4;
 struct il_rx_queue *VAR_5 = &VAR_2->rxq;

 FUNC_12(&VAR_2->lock, VAR_4);
 FUNC_2(VAR_2);
 FUNC_13(&VAR_2->lock, VAR_4);

 FUNC_7(VAR_2);
 FUNC_3(VAR_2);


 if (!VAR_5->bd) {
  VAR_3 = FUNC_9(VAR_2);
  if (VAR_3) {
   FUNC_1("Unable to initialize Rx queue\n");
   return -VAR_0;
  }
 } else
  FUNC_5(VAR_2, VAR_5);

 FUNC_6(VAR_2);

 FUNC_4(VAR_2, VAR_5);






 FUNC_10(VAR_2, FUNC_0(0), VAR_5->write & ~7);

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_11(VAR_1, &VAR_2->status);

 return 0;
}
