
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {scalar_t__ tx_pending_len; int driver_lock; int waitq; int cur_cmd; int dnld_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct lbs_private *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(VAR_1);

 FUNC_2(&VAR_2->driver_lock, VAR_3);

 VAR_2->dnld_sent = VAR_0;


 if (!VAR_2->cur_cmd || VAR_2->tx_pending_len > 0)
  FUNC_4(&VAR_2->waitq);

 FUNC_3(&VAR_2->driver_lock, VAR_3);
 FUNC_1(VAR_1);
}
