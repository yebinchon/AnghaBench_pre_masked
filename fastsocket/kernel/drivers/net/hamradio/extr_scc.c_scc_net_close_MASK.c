
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int tx_wdog; int tx_t; int lock; int ctrl; } ;
struct net_device {scalar_t__ ml_priv; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct scc_channel*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct scc_channel*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct scc_channel *VAR_3 = (struct scc_channel *) VAR_2->ml_priv;
 unsigned long VAR_4;

 FUNC_2(VAR_2);

 FUNC_4(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3->ctrl,0);
 FUNC_6(VAR_3,VAR_0,0);
 FUNC_6(VAR_3,VAR_1,0);
 FUNC_5(&VAR_3->lock, VAR_4);

 FUNC_1(&VAR_3->tx_t);
 FUNC_1(&VAR_3->tx_wdog);

 FUNC_3(VAR_3);

 return 0;
}
