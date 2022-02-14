
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; scalar_t__ arp_interval; scalar_t__ miimon; } ;
struct bonding {int kill_timers; int mcast_work; int ad_work; TYPE_1__ params; int alb_work; int arp_work; int mii_work; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bonding *VAR_2)
{
 FUNC_2(&VAR_2->lock);
 VAR_2->kill_timers = 1;
 FUNC_3(&VAR_2->lock);

 if (VAR_2->params.miimon && FUNC_1(&VAR_2->mii_work))
  FUNC_0(&VAR_2->mii_work);

 if (VAR_2->params.arp_interval && FUNC_1(&VAR_2->arp_work))
  FUNC_0(&VAR_2->arp_work);

 if (VAR_2->params.mode == VAR_1 &&
     FUNC_1(&VAR_2->alb_work))
  FUNC_0(&VAR_2->alb_work);

 if (VAR_2->params.mode == VAR_0 &&
     FUNC_1(&VAR_2->ad_work))
  FUNC_0(&VAR_2->ad_work);

 if (FUNC_1(&VAR_2->mcast_work))
  FUNC_0(&VAR_2->mcast_work);
}
