
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_htc_rxbuf {int list; } ;
struct TYPE_2__ {int rxbuf; int rxbuflock; } ;
struct ath9k_htc_priv {TYPE_1__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 struct ath9k_htc_rxbuf* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ath9k_htc_priv *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_3->rx.rxbuf);
 FUNC_4(&VAR_3->rx.rxbuflock);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct ath9k_htc_rxbuf *VAR_5 =
   FUNC_2(sizeof(struct ath9k_htc_rxbuf), VAR_2);
  if (VAR_5 == ((void*)0))
   goto err;

  FUNC_3(&VAR_5->list, &VAR_3->rx.rxbuf);
 }

 return 0;

err:
 FUNC_1(VAR_3);
 return -VAR_1;
}
