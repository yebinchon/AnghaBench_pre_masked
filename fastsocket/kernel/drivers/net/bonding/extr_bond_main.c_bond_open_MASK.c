
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ arp_validate; scalar_t__ arp_interval; scalar_t__ miimon; } ;
struct bonding {int ad_work; int wq; TYPE_1__ params; int arp_work; int mii_work; int alb_work; int mcast_work; scalar_t__ kill_timers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bonding*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct bonding*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct bonding*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct bonding*) ;
 int FUNC_5 (struct bonding*) ;
 int VAR_8 ;
 struct bonding* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_9)
{
 struct bonding *VAR_10 = FUNC_6(VAR_9);

 VAR_10->kill_timers = 0;

 FUNC_0(&VAR_10->mcast_work, VAR_8);

 if (FUNC_3(VAR_10)) {



  if (FUNC_2(VAR_10, (VAR_10->params.mode == VAR_2))) {

   return -1;
  }

  FUNC_0(&VAR_10->alb_work, VAR_5);
  FUNC_7(VAR_10->wq, &VAR_10->alb_work, 0);
 }

 if (VAR_10->params.miimon) {
  FUNC_0(&VAR_10->mii_work, VAR_7);
  FUNC_7(VAR_10->wq, &VAR_10->mii_work, 0);
 }

 if (VAR_10->params.arp_interval) {
  if (VAR_10->params.mode == VAR_1)
   FUNC_0(&VAR_10->arp_work,
       VAR_4);
  else
   FUNC_0(&VAR_10->arp_work,
       VAR_6);

  FUNC_7(VAR_10->wq, &VAR_10->arp_work, 0);
  if (VAR_10->params.arp_validate)
   FUNC_4(VAR_10);
 }

 if (VAR_10->params.mode == VAR_0) {
  FUNC_0(&VAR_10->ad_work, VAR_3);
  FUNC_7(VAR_10->wq, &VAR_10->ad_work, 0);

  FUNC_5(VAR_10);
  FUNC_1(VAR_10, 1);
 }

 return 0;
}
