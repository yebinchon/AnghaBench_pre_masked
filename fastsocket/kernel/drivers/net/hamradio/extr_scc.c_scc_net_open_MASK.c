
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_channel {int tx_queue; int * tx_buff; int init; } ;
struct net_device {scalar_t__ ml_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct scc_channel*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct scc_channel *VAR_2 = (struct scc_channel *) VAR_1->ml_priv;

  if (!VAR_2->init)
  return -VAR_0;

 VAR_2->tx_buff = ((void*)0);
 FUNC_2(&VAR_2->tx_queue);

 FUNC_0(VAR_2);

 FUNC_1(VAR_1);
 return 0;
}
