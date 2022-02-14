
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ link_up; } ;


 struct usbnet* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct usbnet*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_0(VAR_0);

 return FUNC_2(VAR_1)->link_up && FUNC_1(VAR_0);
}
