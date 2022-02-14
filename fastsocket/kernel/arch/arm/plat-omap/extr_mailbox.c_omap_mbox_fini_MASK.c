
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_mbox {TYPE_1__* ops; int irq; int rxq; int txq; } ;
struct TYPE_2__ {int (* shutdown ) (struct omap_mbox*) ;} ;


 int FUNC_0 (int ,struct omap_mbox*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct omap_mbox*) ;
 scalar_t__ FUNC_3 (int (*) (struct omap_mbox*)) ;

__attribute__((used)) static void FUNC_4(struct omap_mbox *VAR_0)
{
 FUNC_1(VAR_0->txq);
 FUNC_1(VAR_0->rxq);

 FUNC_0(VAR_0->irq, VAR_0);

 if (FUNC_3(VAR_0->ops->shutdown))
  VAR_0->ops->shutdown(VAR_0);
}
