
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int flags; } ;
struct bnx2x {scalar_t__ state; int sp_rtnl_task; int sp_rtnl_state; int sp_state; int rx_mode; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 struct bnx2x* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct net_device *VAR_13)
{
 struct bnx2x *VAR_14 = FUNC_8(VAR_13);
 u32 VAR_15 = VAR_5;

 if (VAR_14->state != VAR_9) {
  FUNC_1(VAR_12, "state is %x, returning\n", VAR_14->state);
  return;
 }

 FUNC_1(VAR_12, "dev->flags = %x\n", VAR_14->dev->flags);

 if (VAR_13->flags & VAR_11)
  VAR_15 = VAR_6;
 else if ((VAR_13->flags & VAR_10) ||
   ((FUNC_7(VAR_13) > VAR_2) &&
    FUNC_0(VAR_14)))
  VAR_15 = VAR_3;
 else {
  if (FUNC_3(VAR_14)) {

   if (FUNC_4(VAR_14) < 0)
    VAR_15 = VAR_3;

   if (FUNC_6(VAR_14) < 0)
    VAR_15 = VAR_6;
  } else {





   FUNC_12();
   FUNC_10(VAR_7,
    &VAR_14->sp_rtnl_state);
   FUNC_11();
   FUNC_9(&VAR_14->sp_rtnl_task, 0);
  }
 }

 VAR_14->rx_mode = VAR_15;

 if (FUNC_2(VAR_14))
  VAR_14->rx_mode = VAR_4;


 if (FUNC_13(VAR_0, &VAR_14->sp_state)) {
  FUNC_10(VAR_1, &VAR_14->sp_state);
  return;
 }

 if (FUNC_3(VAR_14)) {
  FUNC_5(VAR_14);
 } else {





  FUNC_12();
  FUNC_10(VAR_8,
   &VAR_14->sp_rtnl_state);
  FUNC_11();
  FUNC_9(&VAR_14->sp_rtnl_task, 0);
 }
}
