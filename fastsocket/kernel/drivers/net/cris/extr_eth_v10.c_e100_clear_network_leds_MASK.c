
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_local {int led_lock; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_5)
{
 struct net_device *VAR_6 = (struct net_device *)VAR_5;
 struct net_local *VAR_7 = FUNC_1(VAR_6);

 FUNC_2(&VAR_7->led_lock);

 if (VAR_3 && FUNC_4(VAR_2, VAR_4)) {
  FUNC_0(VAR_1);


  VAR_4 = VAR_2 + VAR_0;
  VAR_3 = 0;
 }

 FUNC_3(&VAR_7->led_lock);
}
