
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct korina_private {int media_check_timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct korina_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *) VAR_2;
 struct korina_private *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_3, 0);
 FUNC_1(&VAR_4->media_check_timer, VAR_1 + VAR_0);
}
