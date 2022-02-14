
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wan_device {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct cycx_x25_channel {scalar_t__ lcn; struct net_device* slave; } ;
typedef scalar_t__ s16 ;


 struct cycx_x25_channel* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device *FUNC_1(struct wan_device *VAR_0,
        s16 VAR_1)
{
 struct net_device *VAR_2 = VAR_0->dev;
 struct cycx_x25_channel *VAR_3;

 while (VAR_2) {
  VAR_3 = FUNC_0(VAR_2);

  if (VAR_3->lcn == VAR_1)
   break;
  VAR_2 = VAR_3->slave;
 }
 return VAR_2;
}
