
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {char* name; } ;
struct TYPE_8__ {int max_adj; int pps; void* enable; void* settime; void* gettime; void* adjtime; void* adjfreq; int n_per_out; int n_ext_ts; int n_alarm; void* owner; int name; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int state; int * ptp_clock; TYPE_3__* pdev; TYPE_4__ ptp_caps; int ptp_tx_work; int tmreg_lock; TYPE_2__ hw; struct net_device* netdev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;


 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int * FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int,char*,char*) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ixgbe_adapter *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->netdev;

 switch (VAR_8->hw.mac.type) {
 case 128:
  FUNC_7(VAR_8->ptp_caps.name, 16, "%s", VAR_9->name);
  VAR_8->ptp_caps.owner = VAR_0;
  VAR_8->ptp_caps.max_adj = 250000000;
  VAR_8->ptp_caps.n_alarm = 0;
  VAR_8->ptp_caps.n_ext_ts = 0;
  VAR_8->ptp_caps.n_per_out = 0;
  VAR_8->ptp_caps.pps = 1;
  VAR_8->ptp_caps.adjfreq = VAR_2;
  VAR_8->ptp_caps.adjtime = VAR_3;
  VAR_8->ptp_caps.gettime = VAR_5;
  VAR_8->ptp_caps.settime = VAR_6;
  VAR_8->ptp_caps.enable = VAR_4;
  break;
 case 129:
  FUNC_7(VAR_8->ptp_caps.name, 16, "%s", VAR_9->name);
  VAR_8->ptp_caps.owner = VAR_0;
  VAR_8->ptp_caps.max_adj = 250000000;
  VAR_8->ptp_caps.n_alarm = 0;
  VAR_8->ptp_caps.n_ext_ts = 0;
  VAR_8->ptp_caps.n_per_out = 0;
  VAR_8->ptp_caps.pps = 0;
  VAR_8->ptp_caps.adjfreq = VAR_2;
  VAR_8->ptp_caps.adjtime = VAR_3;
  VAR_8->ptp_caps.gettime = VAR_5;
  VAR_8->ptp_caps.settime = VAR_6;
  VAR_8->ptp_caps.enable = VAR_4;
  break;
 default:
  VAR_8->ptp_clock = ((void*)0);
  return;
 }

 FUNC_8(&VAR_8->tmreg_lock);
 FUNC_0(&VAR_8->ptp_tx_work, VAR_7);

 VAR_8->ptp_clock = FUNC_5(&VAR_8->ptp_caps,
      &VAR_8->pdev->dev);
 if (FUNC_1(VAR_8->ptp_clock)) {
  VAR_8->ptp_clock = ((void*)0);
  FUNC_2("ptp_clock_register failed\n");
 } else
  FUNC_3("registered PHC device on %s\n", VAR_9->name);

 FUNC_4(VAR_8);


 FUNC_6(VAR_1, &VAR_8->state);

 return;
}
