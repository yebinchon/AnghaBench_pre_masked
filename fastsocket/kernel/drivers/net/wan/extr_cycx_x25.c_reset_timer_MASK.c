
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cycx_x25_channel {int idle_tmout; int timer; scalar_t__ svc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct cycx_x25_channel* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct cycx_x25_channel *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->svc)
  FUNC_0(&VAR_3->timer, VAR_1+VAR_3->idle_tmout*VAR_0);
}
