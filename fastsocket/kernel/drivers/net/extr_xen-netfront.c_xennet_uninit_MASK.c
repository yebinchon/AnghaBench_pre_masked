
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {int gref_rx_head; int gref_tx_head; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct netfront_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netfront_info*) ;
 int FUNC_3 (struct netfront_info*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct netfront_info *VAR_1 = FUNC_1(VAR_0);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->gref_tx_head);
 FUNC_0(VAR_1->gref_rx_head);
}
