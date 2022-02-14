
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int start; } ;
struct c2_port {int dma; int mem; int mem_size; TYPE_2__ tx_ring; TYPE_1__ rx_ring; struct c2_dev* c2dev; } ;
struct c2_dev {int pcidev; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct c2_port*) ;
 int FUNC_1 (struct c2_port*) ;
 int FUNC_2 (struct c2_port*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct c2_port* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct c2_port*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 struct c2_port *VAR_3 = FUNC_5(VAR_2);
 struct c2_dev *VAR_4 = VAR_3->c2dev;

 if (FUNC_6(VAR_3))
  FUNC_9("%s: disabling interface\n",
   VAR_2->name);


 FUNC_3(VAR_2);


 FUNC_7(VAR_2);


 FUNC_10(1, VAR_4->regs + VAR_0);
 FUNC_10(0, VAR_4->regs + VAR_1);






 FUNC_0(VAR_3);




 FUNC_2(VAR_3);
 FUNC_1(VAR_3);


 FUNC_4(VAR_3->rx_ring.start);
 FUNC_4(VAR_3->tx_ring.start);
 FUNC_8(VAR_4->pcidev, VAR_3->mem_size, VAR_3->mem,
       VAR_3->dma);

 return 0;
}
