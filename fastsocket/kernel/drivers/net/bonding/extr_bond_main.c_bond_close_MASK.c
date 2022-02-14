
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int mode; scalar_t__ arp_interval; scalar_t__ miimon; scalar_t__ arp_validate; } ;
struct bonding {int kill_timers; int mcast_work; int alb_work; int ad_work; TYPE_1__ params; int arp_work; int mii_work; int lock; scalar_t__ send_unsol_na; scalar_t__ send_grat_arp; } ;





 int FUNC_0 (struct bonding*) ;
 scalar_t__ FUNC_1 (struct bonding*) ;
 int FUNC_2 (struct bonding*) ;
 int FUNC_3 (struct bonding*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 struct bonding* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct bonding *VAR_1 = FUNC_6(VAR_0);

 if (VAR_1->params.mode == 130) {

  FUNC_3(VAR_1);
 }

 if (VAR_1->params.arp_interval && VAR_1->params.arp_validate)
  FUNC_2(VAR_1);

 FUNC_7(&VAR_1->lock);

 VAR_1->send_grat_arp = 0;
 VAR_1->send_unsol_na = 0;


 VAR_1->kill_timers = 1;

 FUNC_8(&VAR_1->lock);

 if (VAR_1->params.miimon) {
  FUNC_4(&VAR_1->mii_work);
 }

 if (VAR_1->params.arp_interval) {
  FUNC_4(&VAR_1->arp_work);
 }

 switch (VAR_1->params.mode) {
 case 130:
  FUNC_4(&VAR_1->ad_work);
  break;
 case 128:
 case 129:
  FUNC_4(&VAR_1->alb_work);
  break;
 default:
  break;
 }

 if (FUNC_5(&VAR_1->mcast_work))
  FUNC_4(&VAR_1->mcast_work);

 if (FUNC_1(VAR_1)) {



  FUNC_0(VAR_1);
 }

 return 0;
}
