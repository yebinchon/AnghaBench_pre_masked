
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {int dev; TYPE_1__* if_ops; } ;
struct TYPE_2__ {int (* init ) (int ) ;} ;


 int FUNC_0 (int ) ;

void FUNC_1(struct wl1271 *VAR_0)
{
 if (VAR_0->if_ops->init)
  VAR_0->if_ops->init(VAR_0->dev);
}
