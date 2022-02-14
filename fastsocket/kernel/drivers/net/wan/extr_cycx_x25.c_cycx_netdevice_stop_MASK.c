
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cycx_x25_channel {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct cycx_x25_channel* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct cycx_x25_channel *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_2);

 if (VAR_3->state == VAR_0 || VAR_3->state == VAR_1)
  FUNC_0(VAR_2);

 return 0;
}
