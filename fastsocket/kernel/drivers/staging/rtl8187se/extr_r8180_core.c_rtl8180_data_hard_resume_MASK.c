
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int dma_poll_stop_mask; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

void FUNC_3(struct net_device *VAR_4)
{
 struct r8180_priv *VAR_5 = (struct r8180_priv *)FUNC_0(VAR_4);

 FUNC_1(VAR_4,VAR_0);
 VAR_5->dma_poll_stop_mask &= ~(VAR_2);
 FUNC_2(VAR_4,VAR_3, VAR_5->dma_poll_stop_mask);
 FUNC_1(VAR_4,VAR_1);
}
