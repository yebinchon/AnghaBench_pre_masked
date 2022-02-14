
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tulip_private {int media_work; } ;
struct net_device {int dummy; } ;


 struct tulip_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct net_device *VAR_1 = (struct net_device *)VAR_0;
 struct tulip_private *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1))
  FUNC_2(&VAR_2->media_work);
}
