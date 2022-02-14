
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wan_device {int dummy; } ;
struct net_device {int dummy; } ;
struct cycx_x25_channel {scalar_t__ state; int timer; int local_addr; scalar_t__ svc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct cycx_x25_channel* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wan_device *VAR_1, struct net_device *VAR_2)
{
 struct cycx_x25_channel *VAR_3 = FUNC_2(VAR_2);

 if (VAR_3->svc) {
  FUNC_1(VAR_3->local_addr);
  if (VAR_3->state == VAR_0)
   FUNC_0(&VAR_3->timer);
 }

 return 0;
}
