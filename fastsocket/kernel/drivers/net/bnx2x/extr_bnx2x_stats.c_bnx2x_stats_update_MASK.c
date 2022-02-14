
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bnx2x_eth_stats {int brb_truncate_lo; int brb_drop_lo; } ;
struct TYPE_2__ {scalar_t__ pmf; } ;
struct bnx2x {int stats_sema; int dev; struct bnx2x_eth_stats eth_stats; int stats_pending; TYPE_1__ port; int stats_started; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 () ;
 scalar_t__* FUNC_9 (struct bnx2x*,int ) ;
 int FUNC_10 (struct bnx2x*) ;
 scalar_t__ FUNC_11 (struct bnx2x*) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_14 (struct bnx2x*) ;
 scalar_t__* VAR_1 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct bnx2x *VAR_2)
{
 u32 *VAR_3 = FUNC_9(VAR_2, VAR_3);




 if (FUNC_12(&VAR_2->stats_sema))
  return;

 if (FUNC_4(VAR_2) || !VAR_2->stats_started)
  goto out;

 if (FUNC_1(VAR_2)) {
  if (*VAR_3 != VAR_0)
   goto out;

  if (VAR_2->port.pmf)
   FUNC_6(VAR_2);

  if (FUNC_11(VAR_2)) {
   if (VAR_2->stats_pending++ == 3) {
    FUNC_0("storm stats were not updated for 3 times\n");
    FUNC_8();
   }
   goto out;
  }
 } else {



  FUNC_11(VAR_2);
 }

 FUNC_7(VAR_2);
 FUNC_3(VAR_2);


 if (FUNC_2(VAR_2))
  goto out;

 if (FUNC_14(VAR_2)) {
  struct bnx2x_eth_stats *VAR_4 = &VAR_2->eth_stats;

  FUNC_13(VAR_2->dev, "brb drops %u  brb truncate %u\n",
         VAR_4->brb_drop_lo, VAR_4->brb_truncate_lo);
 }

 FUNC_5(VAR_2);
 FUNC_10(VAR_2);

out:
 FUNC_15(&VAR_2->stats_sema);
}
