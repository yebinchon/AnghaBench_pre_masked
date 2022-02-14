
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_mbox {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* fifo_empty ) (struct omap_mbox*) ;} ;


 int FUNC_0 (struct omap_mbox*) ;

__attribute__((used)) static inline int FUNC_1(struct omap_mbox *VAR_0)
{
 return VAR_0->ops->fifo_empty(VAR_0);
}
