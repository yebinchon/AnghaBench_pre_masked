
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
struct TYPE_9__ {int max_adj; int name; } ;
struct e1000_adapter {int flags; int * ptp_clock; TYPE_3__* pdev; TYPE_4__ ptp_clock_info; int systim_overflow_work; TYPE_1__* netdev; struct e1000_hw hw; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int perm_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;




 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_4__*,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int,char*,int ) ;

void FUNC_8(struct e1000_adapter *VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_6->hw;

 VAR_6->ptp_clock = ((void*)0);

 if (!(VAR_6->flags & VAR_2))
  return;

 VAR_6->ptp_clock_info = VAR_4;

 FUNC_7(VAR_6->ptp_clock_info.name,
   sizeof(VAR_6->ptp_clock_info.name), "%pm",
   VAR_6->netdev->perm_addr);

 switch (VAR_7->mac.type) {
 case 129:
 case 128:
  if ((VAR_7->mac.type != 128) ||
      (FUNC_4(VAR_3) & VAR_1)) {
   VAR_6->ptp_clock_info.max_adj = 24000000 - 1;
   break;
  }

 case 131:
 case 130:
  VAR_6->ptp_clock_info.max_adj = 600000000 - 1;
  break;
 default:
  break;
 }

 FUNC_0(&VAR_6->systim_overflow_work,
     VAR_5);

 FUNC_6(&VAR_6->systim_overflow_work,
         VAR_0);

 VAR_6->ptp_clock = FUNC_5(&VAR_6->ptp_clock_info,
      &VAR_6->pdev->dev);
 if (FUNC_1(VAR_6->ptp_clock)) {
  VAR_6->ptp_clock = ((void*)0);
  FUNC_2("ptp_clock_register failed\n");
 } else {
  FUNC_3("registered PHC clock\n");
 }
}
