
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int flags; int cc; int tc; int ptp_caps; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int FUNC_0 (int *,struct timespec*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct timespec FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct igb_adapter *VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_9->hw;

 if (!(VAR_9->flags & VAR_6))
  return;

 switch (VAR_9->hw.mac.type) {
 case 133:

  FUNC_5(VAR_2, VAR_7 | VAR_8);
  break;
 case 132:
 case 128:
 case 129:
 case 131:
 case 130:

  FUNC_5(VAR_3, 0x0);
  FUNC_5(VAR_4, VAR_5);
  FUNC_5(VAR_0, VAR_1);
  break;
 default:

  return;
 }


 if ((VAR_10->mac.type == 131) || (VAR_10->mac.type == 130)) {
  struct timespec VAR_11 = FUNC_3(FUNC_1());

  FUNC_0(&VAR_9->ptp_caps, &VAR_11);
 } else {
  FUNC_4(&VAR_9->tc, &VAR_9->cc,
     FUNC_2(FUNC_1()));
 }
}
