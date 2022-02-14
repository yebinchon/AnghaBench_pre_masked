
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_mbox {TYPE_1__* ops; } ;
typedef int mbox_msg_t ;
struct TYPE_2__ {int (* fifo_write ) (struct omap_mbox*,int ) ;} ;


 int FUNC_0 (struct omap_mbox*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct omap_mbox *VAR_0, mbox_msg_t VAR_1)
{
 VAR_0->ops->fifo_write(VAR_0, VAR_1);
}
