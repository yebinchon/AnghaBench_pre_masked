
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int alarm_timer; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_2)
{
 struct s2io_nic *VAR_3 = (struct s2io_nic *)VAR_2;
 struct net_device *VAR_4 = VAR_3->dev;

 FUNC_1(VAR_4);
 FUNC_0(&VAR_3->alarm_timer, VAR_1 + VAR_0 / 2);
}
