
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct ax_device {TYPE_1__ mii_timer; scalar_t__ running; int mii_lock; int mii; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ax_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct ax_device* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *)VAR_2;
 struct ax_device *VAR_4 = FUNC_5(VAR_3);
 unsigned long VAR_5;

 FUNC_3(&VAR_4->mii_lock, VAR_5);
 FUNC_1(&VAR_4->mii, FUNC_2(VAR_4), 0);
 FUNC_4(&VAR_4->mii_lock, VAR_5);

 if (VAR_4->running) {
  VAR_4->mii_timer.expires = VAR_1 + VAR_0*2;
  FUNC_0(&VAR_4->mii_timer);
 }
}
