
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int head; } ;
struct TYPE_3__ {int head; } ;
struct sa1100_irda {TYPE_2__ rx_buff; TYPE_1__ tx_buff; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct sa1100_irda* FUNC_3 (struct net_device*) ;
 struct net_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct net_device *VAR_4 = FUNC_4(VAR_3);

 if (VAR_4) {
  struct sa1100_irda *VAR_5 = FUNC_3(VAR_4);
  FUNC_6(VAR_4);
  FUNC_2(VAR_5->tx_buff.head);
  FUNC_2(VAR_5->rx_buff.head);
  FUNC_1(VAR_4);
 }

 FUNC_5(FUNC_0(VAR_1), 0x04);
 FUNC_5(FUNC_0(VAR_0), 0x1c);
 FUNC_5(FUNC_0(VAR_2), 0x24);

 return 0;
}
