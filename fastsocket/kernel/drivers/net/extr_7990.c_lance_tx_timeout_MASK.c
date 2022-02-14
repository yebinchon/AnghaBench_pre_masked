
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct net_device *VAR_1)
{
 FUNC_2("lance_tx_timeout\n");
 FUNC_0(VAR_1);
 VAR_1->trans_start = VAR_0;
 FUNC_1 (VAR_1);
}
