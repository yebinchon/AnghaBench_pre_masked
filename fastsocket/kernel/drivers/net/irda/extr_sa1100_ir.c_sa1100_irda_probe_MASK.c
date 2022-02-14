
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int head; } ;
struct TYPE_9__ {int bits; } ;
struct TYPE_8__ {unsigned int bits; } ;
struct TYPE_11__ {TYPE_3__ min_turn_time; TYPE_2__ baud_rate; } ;
struct sa1100_irda {TYPE_4__ rx_buff; TYPE_4__ tx_buff; int utcr4; TYPE_5__ qos; scalar_t__ pdata; TYPE_1__* dev; } ;
struct TYPE_7__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int irq; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ) ;
 int VAR_17 ;
 struct sa1100_irda* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct platform_device*,struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int,char*) ;
 int FUNC_11 (TYPE_4__*,int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_20)
{
 struct net_device *VAR_21;
 struct sa1100_irda *VAR_22;
 unsigned int VAR_23;
 int VAR_24;

 if (!VAR_20->dev.platform_data)
  return -VAR_1;

 VAR_24 = FUNC_10(FUNC_0(VAR_12), 0x24, "IrDA") ? 0 : -VAR_0;
 if (VAR_24)
  goto err_mem_1;
 VAR_24 = FUNC_10(FUNC_0(VAR_10), 0x1c, "IrDA") ? 0 : -VAR_0;
 if (VAR_24)
  goto err_mem_2;
 VAR_24 = FUNC_10(FUNC_0(VAR_11), 0x04, "IrDA") ? 0 : -VAR_0;
 if (VAR_24)
  goto err_mem_3;

 VAR_21 = FUNC_1(sizeof(struct sa1100_irda));
 if (!VAR_21)
  goto err_mem_4;

 VAR_22 = FUNC_6(VAR_21);
 VAR_22->dev = &VAR_20->dev;
 VAR_22->pdata = VAR_20->dev.platform_data;




 VAR_24 = FUNC_11(&VAR_22->rx_buff, 14384);
 if (VAR_24)
  goto err_mem_5;
 VAR_24 = FUNC_11(&VAR_22->tx_buff, 4000);
 if (VAR_24)
  goto err_mem_5;

 VAR_21->netdev_ops = &VAR_18;
 VAR_21->irq = VAR_3;

 FUNC_3(&VAR_22->qos);





 VAR_23 = VAR_9;

 switch (VAR_17) {
 case 4000000: VAR_23 |= VAR_7 << 8;
 case 115200: VAR_23 |= VAR_4;
 case 57600: VAR_23 |= VAR_8;
 case 38400: VAR_23 |= VAR_6;
 case 19200: VAR_23 |= VAR_5;
 }

 VAR_22->qos.baud_rate.bits &= VAR_23;
 VAR_22->qos.min_turn_time.bits = 7;

 FUNC_4(&VAR_22->qos);

 VAR_22->utcr4 = VAR_15;
 if (VAR_19)
  VAR_22->utcr4 |= VAR_16;





 VAR_13 = 0;
 VAR_14 = VAR_22->utcr4;
 VAR_10 = VAR_2;

 VAR_24 = FUNC_8(VAR_21);
 if (VAR_24 == 0)
  FUNC_7(VAR_20, VAR_21);

 if (VAR_24) {
 err_mem_5:
  FUNC_5(VAR_22->tx_buff.head);
  FUNC_5(VAR_22->rx_buff.head);
  FUNC_2(VAR_21);
 err_mem_4:
  FUNC_9(FUNC_0(VAR_11), 0x04);
 err_mem_3:
  FUNC_9(FUNC_0(VAR_10), 0x1c);
 err_mem_2:
  FUNC_9(FUNC_0(VAR_12), 0x24);
 }
 err_mem_1:
 return VAR_24;
}
