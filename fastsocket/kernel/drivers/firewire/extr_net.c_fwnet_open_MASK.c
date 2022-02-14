
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fwnet_device {scalar_t__ broadcast_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fwnet_device*) ;
 struct fwnet_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct fwnet_device *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (VAR_2->broadcast_state == VAR_0) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   return VAR_3;
 }
 FUNC_2(VAR_1);

 return 0;
}
