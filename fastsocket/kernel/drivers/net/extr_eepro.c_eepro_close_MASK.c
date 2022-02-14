
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; } ;
struct eepro_local {scalar_t__ tx_last; int xmt_lower_limit; int tx_end; int tx_start; } ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct net_device*) ;
 short FUNC_6 (int) ;
 struct eepro_local* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (short,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2)
{
 struct eepro_local *VAR_3 = FUNC_7(VAR_2);
 int VAR_4 = VAR_2->base_addr;
 short VAR_5;

 FUNC_8(VAR_2);

 FUNC_4(VAR_4);


 VAR_5 = FUNC_6(VAR_4 + VAR_0);
 FUNC_9(VAR_5 & 0x7f, VAR_4 + VAR_0);

 FUNC_3(VAR_4);


 FUNC_9(VAR_1, VAR_4);
 VAR_3->tx_start = VAR_3->tx_end = VAR_3->xmt_lower_limit;
 VAR_3->tx_last = 0;


 FUNC_1(VAR_4);


 FUNC_0(VAR_4);


 FUNC_2(VAR_4);


 FUNC_5(VAR_2->irq, VAR_2);



 return 0;
}
