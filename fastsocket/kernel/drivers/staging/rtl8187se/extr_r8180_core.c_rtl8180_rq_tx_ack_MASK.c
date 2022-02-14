
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int ack_tx_to_ieee; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8180_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;

void FUNC_3(struct net_device *VAR_2){

 struct r8180_priv *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_2,VAR_0,FUNC_1(VAR_2,VAR_0)|VAR_1);
 VAR_3->ack_tx_to_ieee = 1;
}
