
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_mbox {TYPE_1__* ops; } ;
typedef int omap_mbox_irq_t ;
struct TYPE_2__ {int (* enable_irq ) (struct omap_mbox*,int ) ;} ;


 int FUNC_0 (struct omap_mbox*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct omap_mbox *VAR_0, omap_mbox_irq_t VAR_1)
{
 VAR_0->ops->enable_irq(VAR_0, VAR_1);
}
