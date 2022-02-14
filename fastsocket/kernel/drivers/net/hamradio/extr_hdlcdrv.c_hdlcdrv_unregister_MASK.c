
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hdlcdrv_state {scalar_t__ magic; TYPE_1__* ops; scalar_t__ opened; } ;
struct TYPE_2__ {int (* close ) (struct net_device*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 struct hdlcdrv_state* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_1)
{
 struct hdlcdrv_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->magic != VAR_0);

 if (VAR_2->opened && VAR_2->ops->close)
  VAR_2->ops->close(VAR_1);
 FUNC_4(VAR_1);

 FUNC_1(VAR_1);
}
