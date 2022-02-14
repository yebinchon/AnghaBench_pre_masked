
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int netdevice; scalar_t__ ctrlio; int txdma; int rxdma; } ;
struct z8530_dev {TYPE_1__ chanA; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct z8530_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct z8530_dev*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct z8530_dev*) ;

__attribute__((used)) static void FUNC_7(struct z8530_dev *VAR_1)
{
 FUNC_5(VAR_1->chanA.netdevice);
 FUNC_6(VAR_1);
 FUNC_1(VAR_1->irq, VAR_1);
 if (VAR_0) {
  if (VAR_0 == 1)
   FUNC_0(VAR_1->chanA.rxdma);
  FUNC_0(VAR_1->chanA.txdma);
 }
 FUNC_4(VAR_1->chanA.ctrlio - 1, 8);
 FUNC_2(VAR_1->chanA.netdevice);
 FUNC_3(VAR_1);
}
