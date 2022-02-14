
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* netdev; scalar_t__ master; } ;
typedef TYPE_2__ isdn_net_local ;
struct TYPE_4__ {scalar_t__ dev; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static __inline__ void FUNC_1(isdn_net_local *VAR_0)
{
 if (VAR_0->master)
  FUNC_0(VAR_0->master);
 else
  FUNC_0(VAR_0->netdev->dev);
}
